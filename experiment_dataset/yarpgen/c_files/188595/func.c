/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188595
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
    var_15 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (((var_13) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)))))));
    var_16 = ((/* implicit */long long int) (((((~(((/* implicit */int) ((var_14) <= (((/* implicit */int) var_12))))))) + (2147483647))) << (((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_13)))) ? (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41666))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (41666ULL)))));
    var_17 += (!(((/* implicit */_Bool) ((var_3) | ((~(((/* implicit */int) (unsigned char)4))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) arr_0 [i_2] [i_1 + 2]);
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) < ((-(((/* implicit */int) var_2))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), ((signed char)0)));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5417)) ? (arr_3 [i_2 + 1] [i_2 - 1]) : (var_10)));
                        var_22 = ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (((arr_3 [0ULL] [i_1 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_11))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_9))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_2 - 2] [i_2 + 2]))))) | ((~(((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
}
