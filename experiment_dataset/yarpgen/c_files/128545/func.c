/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128545
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
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */int) (signed char)124)), (var_2))) >= (16760832))))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) (signed char)124))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) -16760821)), (var_3))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)108)))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -16760845))))), (arr_0 [i_0])))))))));
        var_20 -= arr_1 [i_0];
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_6 [i_1] [i_1]))));
                            arr_13 [i_3] = 18446744073709551602ULL;
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_15 [i_1] [i_1] [i_3 - 1] [i_2] [i_6]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)19365)))))) > (((((/* implicit */_Bool) var_9)) ? (arr_17 [i_1] [i_1] [i_1] [i_4] [i_3]) : (((/* implicit */unsigned long long int) 3228047567U))))));
                        }
                        var_25 = ((/* implicit */signed char) var_3);
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((-(var_17))) : (((((/* implicit */int) arr_10 [i_3] [i_3])) >> (((((/* implicit */int) var_13)) + (32331)))))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */signed char) ((((arr_17 [i_1] [i_1] [i_1 + 1] [i_1] [(unsigned char)14]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))))) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) var_12))))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_9])) & (var_1)))) ? (((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_9])) ? (arr_7 [i_9] [i_8]) : (((((/* implicit */_Bool) var_3)) ? (234881024) : (var_2))))) : (((((/* implicit */int) arr_2 [i_9])) | ((-(((/* implicit */int) var_4))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_7]))));
                        var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((945168099) % (-16760832)))) | (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) + (arr_0 [i_10])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_20 [i_10])) : (((/* implicit */int) (signed char)119))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_8])) || (((/* implicit */_Bool) var_12))))) : (((((/* implicit */int) arr_2 [i_7])) | (var_8))))) : (((/* implicit */int) var_14))))));
                        arr_28 [i_7] [i_8] [i_7] [i_7] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((var_17), (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_14 [i_8] [i_8] [i_10])) : (((/* implicit */int) arr_21 [i_7] [i_7] [i_7]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))));
                        var_30 = ((/* implicit */int) min((var_30), ((-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) -16760856)) - (arr_0 [i_7])))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) (short)-26637)))) : (-16760832)))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_31 *= ((/* implicit */signed char) max((((/* implicit */int) var_5)), (var_17)));
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 3; i_12 < 17; i_12 += 4) 
                        {
                            var_32 = ((/* implicit */signed char) arr_9 [i_7] [i_7] [i_7] [i_7]);
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_16 [i_8] [i_8] [i_9] [i_11] [i_8] [i_9]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 1; i_13 < 14; i_13 += 2) 
                        {
                            var_34 = ((/* implicit */int) arr_31 [i_7] [i_13 - 1] [i_13 + 3] [i_11] [i_13] [i_13] [i_13]);
                            var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_13 - 1] [i_13 + 1] [i_11] [i_11] [i_7] [i_11] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_13 + 1] [i_13 - 1] [i_13] [i_9] [i_13] [i_13] [i_9]))) : (1883063331U)));
                            arr_35 [i_7] [i_7] [i_9] [i_7] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_7])) : (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            var_36 *= (((-(arr_22 [i_13]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_8] [i_8] [i_9] [i_8] [i_13 + 1])) + ((-2147483647 - 1))))));
                            arr_36 [i_7] [i_7] [i_9] [i_7] [i_7] |= ((/* implicit */short) (!(((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) arr_19 [i_9] [i_7]))))));
                        }
                    }
                    for (int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_7] [i_7])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26636)) ? (((/* implicit */int) (short)508)) : (((/* implicit */int) arr_14 [i_7] [i_9] [i_14]))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_17 [i_7] [i_7] [i_9] [i_7] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_7] [i_7])) & (-16760856))))));
                        arr_39 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) var_1);
                        arr_40 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */signed char) arr_26 [i_14] [i_7] [i_7] [i_7]);
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19365))) : (var_16))))))) >> ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)15991)))))))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 17; i_15 += 3) 
                    {
                        arr_43 [i_7] [i_7] [i_7] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16950531122711052802ULL)) ? (((/* implicit */int) ((16760814) > (((/* implicit */int) arr_11 [i_7] [i_9] [i_9] [i_8] [i_7]))))) : (((/* implicit */int) var_0))))) > (max((arr_17 [i_7] [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17)))))))));
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (-(arr_22 [i_7]))))));
                    }
                }
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((max((((/* implicit */int) arr_5 [i_7] [i_7])), (var_8))) | (var_8))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (((((/* implicit */_Bool) var_4)) ? (var_16) : (arr_23 [i_8])))))))))));
                    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) var_5))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_43 = ((/* implicit */_Bool) min((var_43), ((_Bool)0)));
                        var_44 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)21)) : (((((/* implicit */_Bool) ((16285508924743341573ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? ((-(((/* implicit */int) (signed char)64)))) : (((/* implicit */int) var_5))))));
                    }
                }
                arr_48 [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (var_3) : (4294967273U)))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) var_10))))) : (var_17))))));
                arr_49 [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)119)) < (((/* implicit */int) var_10)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_7] [i_7] [i_8])) : (16760846)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_22 [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19344)))))));
            }
        } 
    } 
    var_45 *= ((/* implicit */unsigned long long int) var_5);
    var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
}
