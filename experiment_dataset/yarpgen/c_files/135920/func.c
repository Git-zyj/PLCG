/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135920
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
    var_16 = ((/* implicit */_Bool) (((((-(var_9))) >= (((/* implicit */unsigned long long int) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) : ((+(min((var_7), (var_7)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((unsigned int) ((long long int) (_Bool)1)));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        arr_14 [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 1])) > (((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3 + 2]))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_1])))) : (arr_3 [i_0] [i_0])));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) & ((~(var_2))))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((int) arr_8 [i_0] [i_1] [i_2] [i_3])))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_2))))))));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_11 [i_2 - 2])) >= (((/* implicit */int) arr_11 [i_2 + 2])))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max(((-(3))), (((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [(signed char)14] [i_0] [i_4])) : (var_13))) : ((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4])))))))))));
                        var_24 = ((/* implicit */int) var_6);
                    }
                    for (short i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        var_25 += ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned short)1)), (((25ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) ^ (((/* implicit */int) arr_11 [i_2])))))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)22)) ? (1165737634U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136)))));
                        arr_19 [i_0] [(signed char)9] [(_Bool)1] [4] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (var_0))), (((/* implicit */unsigned long long int) arr_17 [i_5] [i_1] [i_1] [i_1] [i_0]))));
                        arr_20 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) 637570573515203364ULL));
                    }
                    for (short i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 1073741823ULL)) || (((/* implicit */_Bool) 1523590839)))));
                        arr_25 [i_0] [i_0] [i_6] [i_1] [i_0] [i_6] = ((((/* implicit */int) (unsigned short)19832)) << (((/* implicit */int) (_Bool)1)));
                        var_29 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_2 - 2] [i_2 + 2] [i_0])) < (((int) arr_8 [i_0] [i_0] [i_0] [i_0]))))), (max((11052291381866927388ULL), (((/* implicit */unsigned long long int) 6647716202808557998LL))))));
                    }
                    arr_26 [i_0] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2])) ? (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1]))) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [(_Bool)1])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned int) var_4))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 4; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                arr_32 [i_1] [i_1] [i_1] [i_0] = min((((((/* implicit */_Bool) arr_24 [i_8] [i_0] [i_2 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_24 [(unsigned char)7] [i_1] [i_2 + 1] [i_1] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_2 - 2] [i_7 + 1] [i_8])))), (((/* implicit */int) ((((/* implicit */_Bool) 15681606112880079791ULL)) || (((/* implicit */_Bool) (signed char)-17))))));
                                var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (358728993) : (((/* implicit */int) (signed char)0))))), (((var_0) / (arr_6 [6ULL] [i_8])))));
                                arr_33 [i_8] [i_7] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(min((1778867094U), (((/* implicit */unsigned int) arr_17 [i_7 - 2] [i_2 + 2] [i_2 + 2] [i_1] [i_2 + 2]))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned int) (-(var_10)));
                }
            } 
        } 
    } 
}
