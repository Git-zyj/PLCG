/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166194
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_10 -= ((/* implicit */signed char) (~(arr_6 [(short)18] [i_1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) arr_1 [i_3]);
                                var_12 = ((/* implicit */int) var_3);
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) 524066801U))));
                                var_14 = ((/* implicit */long long int) min((var_14), (var_3)));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] |= ((/* implicit */signed char) arr_10 [i_0] [i_0 - 1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] = ((/* implicit */unsigned int) 7408063407478625407LL);
                                var_15 = ((/* implicit */short) -7408063407478625412LL);
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0 + 1] [i_0 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1] [i_7] [i_0 - 1])) ? (7408063407478625414LL) : (var_3)))) && (((/* implicit */_Bool) min((arr_22 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_0 + 2]), (((/* implicit */unsigned char) arr_7 [i_0 + 3]))))));
                    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0])), (524066801U)))) ? ((+(arr_4 [i_0] [4LL]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 3770900518U)))))) == (-5517266068932412581LL)));
                }
                arr_26 [i_0] = ((/* implicit */long long int) -288474051);
                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_0 + 3])) ? (((/* implicit */int) arr_7 [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 + 1])))) + (((/* implicit */int) max((arr_7 [i_0 + 2]), (arr_7 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        {
                            arr_32 [i_9] [i_1 + 1] [i_1 + 1] [i_9] [i_1] [i_0 + 1] = max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_0 - 1])) ? (((/* implicit */long long int) 3770900512U)) : (-5517266068932412579LL))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3770900512U)) ? (((/* implicit */int) (unsigned char)237)) : (-1060294777)))) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) arr_15 [i_9] [i_1 + 2] [i_8] [5U] [i_9]))))) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_4)) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (-(var_2)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_6 [i_9] [i_1 - 1] [i_8] [i_1 - 1]), (((/* implicit */int) arr_19 [i_9] [i_8] [i_8] [i_1 - 1] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((5517266068932412579LL) <= (((/* implicit */long long int) var_9)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_10 = 1; i_10 < 19; i_10 += 2) 
    {
        var_19 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) & (2173356303U)))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-9223372036854775792LL) & (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) (signed char)-79)) ? (arr_4 [i_10 + 3] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (short)-20225))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_10 + 2])) ? (arr_3 [i_10] [i_10 + 2] [i_10]) : (var_5))))));
    }
    var_21 = ((/* implicit */long long int) (((-(2173356328U))) >> (((var_5) - (2126916744)))));
}
