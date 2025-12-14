/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144703
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((arr_1 [i_0]) <= (((((/* implicit */long long int) ((var_8) / (((/* implicit */int) arr_8 [i_0] [i_0]))))) % (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_1])) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])) : (arr_7 [i_0]))))))))));
                        var_21 |= ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_0] [i_1]))))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))))));
                        var_23 ^= ((/* implicit */long long int) ((arr_0 [i_2] [i_2]) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 4294967295U)) : (1686817361633060007LL)))), (((arr_3 [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                        var_24 = ((/* implicit */int) var_16);
                    }
                    arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_18)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) 3940749196U)) : (var_4))))))) - (((/* implicit */int) ((_Bool) arr_4 [i_1] [i_0])))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((arr_1 [i_2]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))) : (((/* implicit */long long int) (~(var_8))))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((((-(9223372036854775807LL))) + (9223372036854775807LL))) >> (((arr_6 [i_2] [i_1] [i_1]) - (4231770993U)))))) | (arr_9 [i_0] [i_1] [i_2] [i_2])));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_0);
    var_28 = ((/* implicit */_Bool) 858123363U);
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_3)) : (var_8))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
}
