/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154074
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
    var_19 = var_14;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) (-(var_9))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) (~(4294967282U)));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_2 + 2]))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_1))));
    var_24 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_8)), (var_2))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)0)))))))));
}
