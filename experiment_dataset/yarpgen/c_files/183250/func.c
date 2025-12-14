/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183250
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
    var_13 = ((/* implicit */short) (-(((((/* implicit */int) var_12)) | (((/* implicit */int) (short)(-32767 - 1)))))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_10))))));
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((max((var_1), (((/* implicit */unsigned long long int) var_12)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-32746)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)32754))) + (var_10))) : (arr_1 [i_0 + 2])));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    arr_11 [i_0 - 2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_2 + 2]);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */short) (~(((unsigned int) (_Bool)1))));
                        arr_15 [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */signed char) min((((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35566))) | (var_7)))), (((short) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 1) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_4 + 3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_4] [i_0] [i_4 - 1] [i_4] [i_4 + 2] [i_4])) | (((/* implicit */int) (short)-32762))))) ? (min((((var_4) - (((/* implicit */long long int) arr_3 [i_0] [i_4 + 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_9)) <= (389907244))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) var_5)))))))));
                        arr_20 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 17841268996925804788ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32749))) : (var_10))))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
                        {
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0 + 1] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_2 + 1] [i_0] [i_5 + 4]))) / (((((var_4) + (9223372036854775807LL))) << (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) - (47)))))))) : (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_2 + 1] [i_0] [i_5 + 4]))) / (((((var_4) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) - (47))) - (204))))))));
                            arr_24 [i_0] = ((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1019454284)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) arr_12 [i_4] [i_4] [i_4] [14LL])))))))));
                        }
                        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (arr_8 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 + 2] [i_6] [i_2] [i_2] [i_2] [i_2 + 2]))) + (var_1))))))));
                            arr_27 [i_0] [i_0] [i_2 + 2] [i_4] [i_6] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_10)), (max((11835932131526802908ULL), (((/* implicit */unsigned long long int) arr_16 [i_0 + 2] [i_0] [i_0 - 3] [i_0 - 3] [i_0 + 2] [i_0])))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_0 + 1] [i_1] [i_0] [i_6])))));
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_10)))) ? (((/* implicit */unsigned long long int) arr_29 [i_4] [i_4 + 3] [i_4 + 2] [i_0])) : (((((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_0] [i_4 + 3] [i_7] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_11))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) min((var_2), (min((var_5), (var_12)))))) / (((/* implicit */int) (short)4810)))))));
                            arr_31 [i_1] [i_2 + 1] [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_0] [i_0 + 2])), (var_6))), (((/* implicit */unsigned int) ((short) arr_5 [i_0 - 2] [i_0] [i_0 - 3])))));
                            arr_32 [i_0] [i_0] [i_2 + 2] [i_2 + 2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_29 [i_0 - 3] [i_0 - 3] [i_4 + 2] [i_0])))) ? (max((((long long int) (short)-32754)), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) (short)32752)))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 2) 
                        {
                            arr_35 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_5))))));
                            var_22 = ((/* implicit */unsigned int) arr_22 [i_0 - 2] [i_0 - 2] [i_2 - 1] [i_4 + 2] [i_8]);
                            var_23 *= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)32749)) - (((/* implicit */int) arr_18 [i_0 - 2] [i_8] [i_2 + 1] [i_4 + 2] [i_4] [i_8 - 2])))), ((~(((/* implicit */int) arr_2 [i_0 - 2]))))));
                            arr_36 [i_2 + 2] [i_4 - 1] [i_0] = ((/* implicit */short) arr_1 [i_4 - 1]);
                        }
                    }
                    arr_37 [i_0] = ((/* implicit */unsigned int) ((min((-1024336114012605497LL), (((/* implicit */long long int) var_9)))) | (((/* implicit */long long int) ((/* implicit */int) min((arr_18 [i_0] [i_0] [i_1] [i_1] [i_2 + 2] [i_2 + 2]), (arr_18 [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_2 + 2] [i_2 + 1])))))));
                }
                for (long long int i_9 = 2; i_9 < 16; i_9 += 1) 
                {
                    var_24 = ((/* implicit */short) min((arr_13 [i_9 + 1] [i_9 - 2] [i_0] [i_0] [i_0] [i_9 + 1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << ((((~(((/* implicit */int) var_8)))) + (126))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 2) 
                    {
                        arr_42 [i_0] [i_1] = ((((/* implicit */_Bool) arr_22 [i_0 + 2] [i_10] [i_9] [i_10 + 3] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) (short)32749))));
                        arr_43 [i_0] [i_10] = ((/* implicit */short) var_6);
                    }
                    for (unsigned short i_11 = 1; i_11 < 16; i_11 += 2) 
                    {
                        arr_48 [i_0 + 1] [i_0] [i_9 - 2] [i_11 + 2] = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_6)) : (5906554585984371228ULL))))) ? (max((var_7), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_46 [i_0 - 2] [i_9 - 1] [i_0] [i_9 + 2])))))));
                        arr_49 [i_0 + 1] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) var_7);
                        arr_50 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0 - 3])) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)32752))))))));
                        var_25 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_0]))))), (((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0 - 3] [8] [i_9 + 2] [i_9 - 2] [i_11 + 2])) ? (arr_39 [i_9 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)32754))))))));
                    }
                    for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        arr_53 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)173)) >> (((/* implicit */int) arr_47 [i_0 - 1] [i_0] [i_9 - 2] [i_1]))))) ? (var_1) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-32740)), (3925202868U)))))) < (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_9 - 2] [i_9 - 1] [i_9 + 2] [i_9 - 2] [i_9] [i_9 + 2] [i_9 + 2])) != (((/* implicit */int) var_9))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (arr_12 [i_0] [i_1] [i_9 - 1] [i_0]))))))));
                        var_26 *= ((/* implicit */unsigned int) ((unsigned short) (short)32767));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            arr_56 [i_0] [i_0] [i_9] [i_12] [i_9] [i_12] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_21 [i_0] [i_0 + 1] [i_0 + 1] [i_13] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)32752)))));
                            arr_57 [i_0] [i_1] [i_9 - 1] [i_1] [i_13] = ((((/* implicit */_Bool) 12540189487725180380ULL)) ? (((/* implicit */int) arr_51 [i_12] [i_0] [i_9 + 1] [i_0 - 3])) : (((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_0 - 1])));
                            arr_58 [i_0] [i_0] [i_0] [i_9 + 1] [i_12] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                            arr_59 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_18 [i_0] [i_0] [i_9] [i_12] [i_9 + 2] [i_0 + 2]));
                            var_27 = ((/* implicit */unsigned short) var_5);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            arr_62 [i_14] [i_1] [i_0] [i_12] [i_12] = ((/* implicit */unsigned long long int) -1024336114012605518LL);
                            arr_63 [i_0] [i_1] [i_9] [i_0] [i_14] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_45 [i_0])))) : (((/* implicit */int) arr_55 [i_9 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 3]))));
                        }
                    }
                }
            }
        } 
    } 
}
