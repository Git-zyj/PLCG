/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129831
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */long long int) max((var_16), (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))), (((((/* implicit */int) var_5)) | (((/* implicit */int) var_15))))))));
    var_18 = ((/* implicit */unsigned long long int) max((max((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))))), (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) var_6);
        arr_2 [i_0] = ((/* implicit */unsigned char) var_7);
        arr_3 [i_0] [i_0] = ((/* implicit */short) 4294967290U);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [(short)2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
                        var_20 = (!(((/* implicit */_Bool) var_13)));
                    }
                } 
            } 
        } 
    }
    var_21 |= ((/* implicit */short) var_10);
}
