/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177799
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) (+(((var_14) >> (((arr_3 [i_0 + 1] [i_0 + 1]) - (6313924540403429678LL)))))));
                var_17 = ((((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [i_1])), (min((var_10), (((/* implicit */int) (_Bool)0))))))) > (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)12)) || (((/* implicit */_Bool) var_6))))), (min((var_8), (((/* implicit */unsigned int) (unsigned char)145)))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((3261256321U), (((/* implicit */unsigned int) var_0))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_2 - 2] [13LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_3 + 3] [i_2 - 2]))))) ? (((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 1] [i_2 + 2]))) : (var_9))) : (((/* implicit */long long int) (-(2160799345U))))));
                /* LoopNest 3 */
                for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_17 [i_2 + 2] [i_3] [i_4] [i_5] [i_6])) / ((~((~(var_9)))))));
                                arr_19 [(unsigned char)15] [i_4] [i_4] [i_5] [i_6] = (((-(((/* implicit */int) min((var_11), (((/* implicit */short) var_7))))))) != (((/* implicit */int) ((short) arr_8 [i_2 - 1] [i_2 + 3]))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) + (((((/* implicit */_Bool) arr_10 [i_6] [i_2])) ? (var_3) : (var_14)))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_11 [(short)12] [i_3 + 1]))));
                arr_20 [i_2 + 2] [i_3] &= ((((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 - 1])) ? (((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 1])));
                var_22 = ((/* implicit */long long int) var_4);
            }
        } 
    } 
}
