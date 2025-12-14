/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140878
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
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_13))) / (((unsigned long long int) (short)-9720)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -740609344)) ? (((/* implicit */long long int) arr_0 [i_0 - 1])) : (var_16)));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (var_8)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((short) 1921452185U)))));
        arr_2 [i_0] = ((/* implicit */short) var_17);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (var_2)))) ? (((/* implicit */int) var_12)) : (-1089631213)));
            var_21 = ((/* implicit */unsigned int) var_2);
        }
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((unsigned char) arr_9 [i_0 + 3] [i_0 - 1]));
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)39))))));
                    }
                } 
            } 
            var_23 = ((unsigned long long int) ((((/* implicit */_Bool) (short)19016)) ? (((/* implicit */int) var_3)) : (528925886)));
        }
    }
}
