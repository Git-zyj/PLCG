/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16625
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
    var_10 = ((/* implicit */unsigned long long int) ((max(((((-9223372036854775807LL - 1LL)) ^ (-1318602141562520554LL))), (max((var_1), (((/* implicit */long long int) var_3)))))) - (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_9 [i_1] [i_1] [i_1] = -1406171739765706083LL;
                    arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (_Bool)1))))) || (max((var_0), (var_6))))))) != ((~(((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63530))) : (-1406171739765706088LL)))))));
                    var_12 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1406171739765706083LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) <= (arr_0 [0] [0]))))) : ((+(arr_3 [i_0] [i_0])))))));
                }
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((max((arr_4 [(signed char)15] [(signed char)15]), (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)42076)) > (((/* implicit */int) var_7)))))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (-1224585806)))) | (max((arr_0 [i_0] [14ULL]), (((/* implicit */unsigned int) 2147483647))))))));
                    var_14 = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((min((arr_5 [i_1]), (arr_5 [i_1]))) >> (((((/* implicit */int) arr_7 [i_1])) - (39)))))) : (((/* implicit */signed char) ((min((arr_5 [i_1]), (arr_5 [i_1]))) >> (((((((/* implicit */int) arr_7 [i_1])) - (39))) - (96))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (signed char)-99))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */short) var_5);
                                var_17 = ((/* implicit */unsigned char) arr_12 [i_3 + 1] [i_0 - 2]);
                                var_18 ^= ((/* implicit */int) max((min((min((((/* implicit */unsigned int) var_4)), (154134680U))), (((/* implicit */unsigned int) min((-2147483641), (((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1)))))))));
                                var_19 = ((/* implicit */long long int) min((var_19), ((-(min((((/* implicit */long long int) (unsigned short)5)), (1406171739765706079LL)))))));
                                arr_22 [i_1] = ((/* implicit */long long int) 536739840);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) var_9);
                }
                arr_23 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) - (var_1)))))))) > (1406171739765706079LL)));
            }
        } 
    } 
}
