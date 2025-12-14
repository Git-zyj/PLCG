/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114177
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
    var_16 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) -1946676850091194039LL)))))) + (((/* implicit */int) var_9)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) min((arr_1 [i_0]), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 2462711313U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (3524075986U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 1946676850091194038LL))))))))));
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) (unsigned short)0))), (507904)));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (min((1756375186U), (arr_1 [i_0])))))) ? (((((((/* implicit */_Bool) (unsigned char)66)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))))) << (((/* implicit */int) min(((unsigned char)66), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */unsigned long long int) (-(-1)))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((var_14), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (max((10331016236991555675ULL), (((/* implicit */unsigned long long int) var_2)))) : (((var_13) ? (((/* implicit */unsigned long long int) ((0) & (((/* implicit */int) (unsigned char)169))))) : (((((/* implicit */_Bool) -1235051540)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_8)) == (((/* implicit */int) var_2))))));
                    /* LoopSeq 4 */
                    for (long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */int) (signed char)127);
                        arr_13 [i_1] [i_1] [i_3] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((9223372036854775552LL) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_2])))))) ? (((((/* implicit */unsigned long long int) arr_3 [(unsigned char)23])) / (arr_10 [i_1] [(signed char)4] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)17293))))) != ((~(-7892933535176861359LL)))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))));
                        arr_17 [i_1] [i_1] = ((/* implicit */int) (((~(var_15))) | ((-(0ULL)))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_21 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)15);
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_5)) * (18446744073709551615ULL)));
                            var_25 &= ((/* implicit */unsigned short) var_11);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_1] [i_2] [i_2] [i_1] [i_3] [i_5] [i_7] = ((/* implicit */unsigned int) ((short) arr_7 [i_5 - 1] [i_1] [i_1] [i_1]));
                            arr_25 [i_1] [i_2] [i_3] [(signed char)8] [(signed char)15] [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(unsigned char)10] [i_5 - 1] [i_3] [i_2] [i_1]))))) : ((-(((/* implicit */int) var_7))))));
                        }
                        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_29 [i_1] = ((/* implicit */int) arr_20 [i_1] [i_2] [i_3] [i_5] [i_8]);
                            var_26 = ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (_Bool)1)));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_4 [i_1 + 2])) : ((~(((/* implicit */int) arr_5 [i_1 + 1] [i_1]))))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255)))))));
                        }
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 23; i_9 += 4) /* same iter space */
                    {
                        arr_33 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_1]);
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_36 [i_1] [i_1] [i_9] [i_9] [i_1] = ((/* implicit */unsigned int) var_3);
                            var_29 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_1 + 1] [i_1] [i_1 - 1] [i_3]))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (arr_35 [i_9] [i_9] [i_9 - 1] [i_9 + 1] [i_9] [i_9 - 1] [i_9])));
                            var_31 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_2] [i_3] [i_3] [10])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_32 [i_1 + 2] [i_3] [i_9 + 1] [i_2]))));
                        }
                        arr_37 [i_2] [i_9] [i_2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                            var_33 += ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_9 [i_2] [i_3] [i_12]))))));
                            var_34 -= ((/* implicit */_Bool) var_10);
                            var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)116))));
                        }
                        var_36 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_14)) : (var_11))) : (((/* implicit */unsigned long long int) ((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))))))));
                        var_37 -= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)56))));
                    }
                    var_38 = ((/* implicit */int) ((((/* implicit */int) (short)3)) == (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_42 [(unsigned char)6] &= ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [10U]))));
        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned short)10] [(unsigned short)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2]))) : (1832255983U))))));
        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */unsigned long long int) -9138386045954714836LL)) : ((((_Bool)0) ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (arr_20 [i_1] [6] [i_1] [(unsigned char)6] [i_1])))) ? (((/* implicit */int) ((unsigned char) arr_40 [(_Bool)1] [(_Bool)1] [i_1 + 2] [(signed char)16] [2LL] [(_Bool)1]))) : (((/* implicit */int) arr_41 [i_1]))));
    }
}
