/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171211
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_15 = (!(((/* implicit */_Bool) (unsigned char)241)));
                    var_16 = ((/* implicit */_Bool) (((((+(min((2097151LL), (((/* implicit */long long int) (short)-32761)))))) + (9223372036854775807LL))) << ((((((~(6470453516640264768LL))) + (6470453516640264804LL))) - (35LL)))));
                }
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_3 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (arr_6 [i_0] [i_3 + 1] [6] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) (signed char)0))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)15)))))));
                        var_18 ^= ((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))));
                    }
                    var_19 = ((/* implicit */signed char) (-(arr_6 [i_3] [i_1] [i_0] [i_0])));
                }
                for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        var_20 = min((max((arr_6 [i_6 - 1] [i_1] [i_5] [i_6 + 1]), (arr_6 [i_0] [11LL] [i_0] [i_6 - 1]))), (min((9223372036854775807LL), (arr_6 [i_0] [i_1] [i_6] [i_6 + 1]))));
                        arr_20 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)241), (((/* implicit */unsigned char) arr_10 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_6 - 1]))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12935)) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) (unsigned short)4272))))))) : (((((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_13 [i_6 + 1] [i_5] [i_5 + 1])))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_1] [i_7])) > (((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775794LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-9223372036854775807LL - 1LL)))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) > (-1LL))))))))));
                        arr_23 [i_0] [i_1] [6LL] [i_1] [i_5] = ((/* implicit */signed char) 72057594037927935ULL);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)9874)) || (((/* implicit */_Bool) (unsigned short)12035)))) ? ((~(((/* implicit */int) arr_21 [i_1] [i_1] [i_1])))) : ((-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1]))))));
                        var_23 = (~(7471853062316658970LL));
                        var_24 = ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [1U] [i_1]);
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_1] [i_0] = -8;
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_1] [i_5 - 1] [i_5 + 1] [i_1])) != (((/* implicit */int) var_5))));
                        }
                        arr_34 [i_0] [i_1] = (+((-(arr_6 [i_0] [i_1] [i_5] [i_5]))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-1811657992837606467LL) : (((/* implicit */long long int) 0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (887509159U) : (arr_3 [10U] [i_9])))) : (arr_13 [(_Bool)1] [i_5 - 1] [i_5 + 1]))))));
                    }
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) 18374686479671623681ULL))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))), (arr_17 [i_0] [i_0] [i_0] [i_5])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_9) && (((/* implicit */_Bool) 1LL)))))))) : (min((((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20386))) : (72057594037927935ULL))), (((/* implicit */unsigned long long int) arr_5 [i_5 + 1] [i_5 + 1] [10U] [i_5 - 1]))))));
                }
                for (int i_11 = 2; i_11 < 11; i_11 += 3) 
                {
                    var_29 = ((/* implicit */long long int) var_4);
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_43 [(unsigned short)3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) (short)23177))))) ? (((/* implicit */int) ((7713872882286292933LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_11 + 3] [(_Bool)1] [i_11] [i_12]))))))));
                                arr_44 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = max((((/* implicit */long long int) min((arr_39 [i_0] [i_1] [i_11]), (arr_39 [i_0] [i_1] [i_11])))), (((((/* implicit */_Bool) (short)-12212)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))));
                                var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_28 [i_0] [i_1] [i_11 + 2] [i_11 - 2]) < (((/* implicit */unsigned int) arr_25 [i_11] [i_11] [i_11 + 2] [i_11 - 2])))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (short)7805))) | (arr_28 [i_11] [i_11] [i_11 + 2] [i_11 - 2])))));
                            }
                        } 
                    } 
                    var_31 += ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_11 + 1] [i_11] [i_11 + 3] [10LL] [i_11 - 2]))) * (((arr_31 [i_1] [i_11 + 3] [i_11] [i_11] [i_11]) ? (arr_5 [i_1] [i_11 - 1] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_11 + 1] [i_11] [4ULL] [i_11]))))));
                }
                arr_45 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) ((int) (_Bool)1)))))) || (((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) (short)0)), (2188528138U)))))));
                var_32 = ((/* implicit */short) -9223372036854775787LL);
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) arr_41 [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107)))))))) ? ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))))) : (var_3)));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_36 [(_Bool)1] [12LL] [i_1]), (arr_36 [i_1] [i_1] [i_0])))) ? ((+(((/* implicit */int) arr_36 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((short) (signed char)-78)))));
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) max(((+((-(var_2))))), (var_2)));
    var_36 = ((/* implicit */signed char) var_3);
    var_37 = ((/* implicit */signed char) ((18374686479671623681ULL) & (((/* implicit */unsigned long long int) var_3))));
}
