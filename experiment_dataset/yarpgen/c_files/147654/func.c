/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147654
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((long long int) var_8)))))));
                        var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) -1534416903)) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_1] [i_0])) : (((/* implicit */int) var_2))))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)11)) & (((/* implicit */int) (!(((/* implicit */_Bool) 19U))))))))));
                        var_17 -= ((/* implicit */unsigned short) 397404843U);
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_0)))) * ((+(((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1])))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) (signed char)17)))) + (2147483647))) << (((((unsigned int) arr_14 [i_4] [i_1] [i_1] [(_Bool)1])) - (64U)))))) ? (((int) ((((/* implicit */_Bool) (short)255)) ? (67108832LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (661002309)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */int) max((((/* implicit */long long int) min((arr_8 [i_5] [i_5 - 1] [i_2 - 1]), (var_11)))), (max((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_4 [i_5] [i_2] [i_1]))), (((/* implicit */long long int) arr_5 [i_1] [i_1] [i_4]))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0])))))));
                            var_22 = ((/* implicit */signed char) (short)23454);
                            arr_18 [i_2] [i_1] = ((/* implicit */signed char) var_2);
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_10 [i_2] [0U] [i_1] [i_2]);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) var_2)) == ((~(((/* implicit */int) arr_3 [i_0])))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) -9016362434422983486LL);
                            arr_25 [i_0] [i_4] [i_4] [i_2] [i_0] [i_0] [i_0] = (-(max((((/* implicit */long long int) 1077928103)), (67108832LL))));
                            var_26 = ((/* implicit */long long int) arr_21 [i_0] [i_1] [i_2] [i_4] [i_7]);
                            var_27 = ((/* implicit */unsigned char) arr_16 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] [i_0]);
                        }
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            arr_30 [i_0] [(signed char)7] [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */long long int) var_11);
                            var_28 = min((((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) arr_15 [i_2])))))), (1356744780U));
                            var_29 = ((/* implicit */short) ((unsigned long long int) (+(var_7))));
                            arr_31 [i_2] [i_2] [i_8] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_19 [i_2 - 1] [i_2 - 1] [i_2])))) | (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_19 [i_2 - 1] [i_2 + 1] [i_2]))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_34 [i_2] [i_1] [i_1] [i_1] [(short)9] [i_1] = ((/* implicit */unsigned char) var_2);
                            var_30 = (((!(((/* implicit */_Bool) arr_14 [i_2 - 1] [i_9] [i_9] [i_9])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_29 [1] [i_2] [i_2 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2 - 1]))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_2] [i_1] [3LL]))) * (3897562469U))))));
                        }
                        for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */int) arr_35 [i_2] [9LL] [i_4] [i_2] [i_1] [i_1] [i_2]);
                            var_32 = ((/* implicit */long long int) max(((+(arr_0 [(unsigned short)0] [i_2]))), (((/* implicit */unsigned int) var_11))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_4] [i_2 + 1] [i_1] [i_0]))))) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_6)))))));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_10))))) ? ((~(arr_37 [i_2] [i_2] [i_1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_1])))));
                            var_35 = ((/* implicit */signed char) var_6);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_45 [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned char)241)) > (((/* implicit */int) (short)-10660)))), (((((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2])) >= (((/* implicit */int) var_3))))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_2 - 1] [(unsigned short)0] [i_2 + 1] [(unsigned short)0] [i_2 + 1])) / (var_12)))) || (((/* implicit */_Bool) max((arr_41 [(_Bool)1] [i_11] [i_1] [i_1] [i_0]), (((/* implicit */int) var_9))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned int) arr_26 [i_14] [i_2 + 1]);
                            var_38 = ((((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-3566))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [1U] [i_0])) : (((/* implicit */int) (short)8)))));
                        }
                        arr_48 [i_0] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-9)) : (((/* implicit */int) (unsigned char)15)))))) : (((((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_0] [i_0])) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (6226962932109954996LL))))))));
                    }
                    var_39 = ((/* implicit */unsigned short) max((arr_46 [i_2] [i_2 - 1] [i_2 + 1] [(signed char)6] [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned long long int) (~(var_12))))));
                    arr_49 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4902419639542783817LL)) ? (((/* implicit */int) (signed char)121)) : (((((/* implicit */int) (_Bool)1)) + (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (signed char)-1))))))));
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */int) ((unsigned short) var_5));
    var_41 = ((/* implicit */short) min((var_41), (var_4)));
    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
    var_43 = ((/* implicit */_Bool) (-2147483647 - 1));
}
