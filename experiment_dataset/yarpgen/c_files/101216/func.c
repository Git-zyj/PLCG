/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101216
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
    var_18 |= ((/* implicit */unsigned char) min(((short)7161), (((/* implicit */short) (unsigned char)138))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 5790605574944949100ULL)) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (((((/* implicit */_Bool) (unsigned char)118)) ? (var_14) : (((/* implicit */unsigned long long int) arr_0 [i_1])))))) : (((/* implicit */unsigned long long int) 2147483647))));
                        var_21 = ((/* implicit */unsigned char) ((int) arr_2 [i_0] [i_0] [i_0]));
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) arr_8 [(unsigned char)16] [i_0] [(short)1] [i_0] [(short)1]);
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_4 [i_0]))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */int) ((unsigned char) ((var_12) % ((-(((/* implicit */int) var_1)))))));
}
