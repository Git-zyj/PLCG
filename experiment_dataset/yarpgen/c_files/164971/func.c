/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164971
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
    var_13 = min((max((((/* implicit */unsigned long long int) max(((unsigned char)255), (((/* implicit */unsigned char) var_8))))), (8933099076638144308ULL))), (((/* implicit */unsigned long long int) var_7)));
    var_14 = ((/* implicit */unsigned char) ((((long long int) max((((/* implicit */unsigned long long int) var_7)), (var_12)))) + (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [5ULL] [i_1] = ((/* implicit */_Bool) min(((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))))), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)243)))))));
                var_15 = ((/* implicit */_Bool) ((min((var_10), (((/* implicit */unsigned int) ((int) var_2))))) >> (((((/* implicit */int) arr_0 [5] [5])) + (112)))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) min((var_4), (min((((/* implicit */unsigned long long int) arr_0 [i_1 + 4] [i_1 - 2])), (var_4)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned char) (~((-(((var_1) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2])))))))));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_2]))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (arr_10 [i_2] [i_5]))))));
                    var_18 = ((/* implicit */_Bool) arr_7 [i_2]);
                }
                for (short i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) ((short) (_Bool)1));
                        var_20 += ((((/* implicit */int) ((short) (-(((/* implicit */int) (short)32753)))))) / (((/* implicit */int) max(((unsigned char)14), (((/* implicit */unsigned char) (_Bool)1))))));
                        arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)61)), (152965986)));
                        arr_25 [i_4] [i_4] [i_2] [i_4] = ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        arr_28 [i_2] [i_2] = ((/* implicit */unsigned char) var_1);
                        arr_29 [i_2] [i_2] [(short)15] [i_2] [i_2] = ((/* implicit */long long int) max(((_Bool)0), (var_8)));
                        arr_30 [i_2] [i_3] [i_2] [i_4] [i_8] [i_2] [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_26 [i_2] [2LL] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12))));
                        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) ? (((/* implicit */int) (((~(((/* implicit */int) var_2)))) < (((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */int) var_9))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)250)))))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6 - 1] [i_4] [i_6] [i_4] [7])) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) : (var_4))) : (((/* implicit */unsigned long long int) var_10))));
                    }
                    arr_33 [i_2] [i_2] [i_2] [i_2] = max(((!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)236)), ((short)32762)))))), (((var_10) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))));
                    var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (((unsigned int) var_0))));
                }
                var_26 = ((/* implicit */short) (unsigned char)244);
                var_27 = ((/* implicit */_Bool) min((var_27), ((!(((/* implicit */_Bool) ((long long int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))));
                arr_34 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) (_Bool)1))))) ? (min((arr_16 [i_2] [i_2] [i_2]), (((/* implicit */long long int) arr_23 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [(unsigned short)12] [(unsigned short)12] [i_4] [i_4] [i_4] [i_4]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_4]))) : (arr_14 [i_2] [i_3] [i_2] [i_2]))))));
            }
            for (unsigned int i_10 = 3; i_10 < 17; i_10 += 3) 
            {
                arr_38 [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (arr_17 [i_10] [i_10] [i_2]))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_31 [i_2] [i_3] [i_10] [i_2] [i_3])) ? (2147887754988771134LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                arr_39 [i_2] [i_2] [i_10] [i_2] = ((/* implicit */unsigned int) arr_13 [i_3]);
                arr_40 [i_10] [i_3] [i_2] [i_3] = ((/* implicit */short) min((18025367716633719187ULL), (((/* implicit */unsigned long long int) (short)-32742))));
                var_28 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((711867719U) + (var_5)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2711729855U)) ? (((((/* implicit */_Bool) 1536407792U)) ? (2664838735U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))))) : (((/* implicit */unsigned int) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                arr_41 [i_2] = ((/* implicit */short) ((arr_11 [i_10 - 1] [i_10] [i_10 + 1]) & (((/* implicit */unsigned long long int) -2147887754988771140LL))));
            }
        }
        /* LoopSeq 1 */
        for (int i_11 = 3; i_11 < 15; i_11 += 4) 
        {
            arr_45 [i_2] [i_11] [i_2] = ((/* implicit */int) (unsigned short)3591);
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                arr_49 [i_2] [i_2] [i_2] [i_12] = var_1;
                var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_48 [i_11] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-5972661085429127269LL)))) : (min((((/* implicit */unsigned long long int) var_11)), (18446744073709551606ULL))))))));
                arr_50 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_3))))))));
            }
        }
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) ^ (((((/* implicit */_Bool) var_4)) ? (81795483U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) : (((((arr_16 [(unsigned short)2] [i_2] [i_2]) >> (((var_6) - (1793002429))))) * (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_5))))))));
    }
    for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 3) 
    {
        var_31 |= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_52 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (5ULL)))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_11)))))));
        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (-(var_7))))));
        arr_54 [i_13] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) ((_Bool) var_2))) << (((var_0) - (3252411371700750753ULL)))))));
    }
    for (int i_14 = 0; i_14 < 12; i_14 += 3) 
    {
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)10088)) << (((min(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (short)-20462)) ? (2147483641) : (((/* implicit */int) (_Bool)1)))))) + (62596)))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            for (unsigned char i_16 = 1; i_16 < 11; i_16 += 3) 
            {
                {
                    var_34 = ((/* implicit */_Bool) max((((/* implicit */int) arr_61 [i_14] [i_15])), (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) (unsigned short)24978)) : (((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (short i_18 = 2; i_18 < 11; i_18 += 4) 
                        {
                            {
                                arr_70 [i_14] [i_15] [i_16 - 1] [(short)7] [i_18] [i_16] [i_15] = max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-19463)) / (((/* implicit */int) (signed char)-22)))) <= (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)56)))))))), (var_12));
                                var_35 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) arr_19 [i_14] [i_14])) ? (1138040087947770015LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46031))))), (((/* implicit */long long int) (-(1580472062))))))));
                                var_36 = ((/* implicit */long long int) ((-540088532) / ((~(((/* implicit */int) var_9))))));
                                var_37 = ((/* implicit */unsigned char) (((~(3034846769061467573ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
