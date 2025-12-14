/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188867
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(signed char)0] [i_0])) - (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_16)))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_10))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            arr_5 [(unsigned short)12] [i_1] |= ((/* implicit */signed char) (~(((((((/* implicit */int) arr_3 [i_1] [(_Bool)1] [i_0 - 1])) | (((/* implicit */int) arr_4 [(_Bool)1])))) & (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_1] [i_0 - 1]))))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32199))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (arr_0 [i_1])))) : (min((((/* implicit */unsigned long long int) var_12)), (arr_12 [i_4] [i_0] [i_2] [i_0] [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), ((signed char)63)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_1))))) : (arr_6 [i_0] [i_0] [i_2 - 1])))));
                            arr_14 [i_1] [(signed char)0] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_2])), (arr_13 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((arr_12 [i_4] [i_3] [i_2] [(_Bool)1] [8] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18)))))));
                        }
                    } 
                } 
            } 
        }
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_4 [6ULL])) && (arr_3 [i_0 - 1] [10ULL] [10ULL])))), (var_10)));
    }
    for (signed char i_5 = 3; i_5 < 22; i_5 += 3) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_18 [i_5]))));
        arr_19 [i_5] = ((/* implicit */_Bool) arr_17 [i_5]);
    }
    var_22 = ((/* implicit */signed char) var_19);
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 2; i_9 < 16; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((var_8) - (6679626858537107701ULL)))))) && (((var_5) || (((/* implicit */_Bool) arr_6 [(_Bool)1] [i_8] [i_9]))))))) + (((arr_0 [i_6]) * (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))))));
                        var_24 = (i_8 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) arr_10 [i_9] [i_8] [i_7] [i_6])) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_7] [(signed char)7])) << (((arr_27 [i_9 - 1] [i_8] [i_8] [i_6]) - (4047011973112840328ULL)))))))))))) : (((/* implicit */short) ((((/* implicit */int) arr_10 [i_9] [i_8] [i_7] [i_6])) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_7] [(signed char)7])) << (((((arr_27 [i_9 - 1] [i_8] [i_8] [i_6]) - (4047011973112840328ULL))) - (1467703392804677985ULL))))))))))));
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_32 [i_6] [i_7] [i_8] [i_8] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_15)))));
                            arr_33 [i_8] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_2)), (arr_29 [i_7] [i_9] [i_6] [i_7] [i_7] [i_7] [i_6])))), (max((arr_12 [i_6] [16U] [i_8] [i_9] [i_10] [i_10] [i_8]), (((/* implicit */unsigned long long int) arr_6 [i_10] [i_7] [i_7]))))))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) 
                        {
                            var_25 -= ((/* implicit */short) ((((((/* implicit */int) arr_34 [i_9] [i_11] [i_9] [i_11 + 2] [i_11] [i_7])) != (((/* implicit */int) arr_35 [i_8] [i_8] [(unsigned char)16] [i_11 + 1] [i_11] [i_11] [(unsigned char)16])))) ? (((((/* implicit */_Bool) arr_29 [i_8] [(unsigned char)7] [i_9] [i_11 + 2] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_29 [i_8] [i_8] [i_11] [i_11 + 2] [i_11] [i_11] [i_8])) : (((/* implicit */int) arr_29 [i_7] [i_7] [i_7] [i_11 + 1] [i_11] [(_Bool)1] [i_11])))) : (((/* implicit */int) ((((/* implicit */int) arr_34 [i_9 + 2] [i_11] [i_11] [i_11 + 2] [i_11] [i_6])) >= (((/* implicit */int) arr_35 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_11 + 1] [18U] [i_11] [i_11])))))));
                            arr_37 [i_6] [i_7] [i_8] [i_8 - 1] [i_9] [i_8 - 1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_12))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6]))) / (arr_36 [i_11] [i_7] [i_11] [i_9] [i_11])))) ? (((((/* implicit */int) arr_11 [i_6] [i_7] [i_8] [i_9])) * (((/* implicit */int) var_19)))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_29 [i_8] [i_6] [i_8] [i_8] [i_7] [i_6] [i_6])))))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            arr_41 [i_6] [2] [i_8] [i_9] = ((/* implicit */_Bool) var_9);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) -5408981582026852635LL)) ? (401881659) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_27 [i_6] [i_7] [i_8 - 1] [i_9]))) * (((/* implicit */int) max(((signed char)63), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_39 [i_6] [i_7] [i_6] [i_9] [i_7] [i_9])))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 3; i_14 < 19; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((_Bool) arr_8 [i_6] [i_13] [i_8] [i_14])))));
                            var_30 = ((/* implicit */signed char) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) 3323824015U))));
                            var_31 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_6] [i_6] [i_8] [i_13] [i_14] [i_14])) & (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_24 [i_8 - 1])))) >= (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_8] [i_8])), (281474976710592LL)))) ? (((/* implicit */int) arr_43 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) : (arr_13 [i_8 - 1] [i_8 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 3] [i_14 - 2])))));
                            arr_46 [i_6] [i_7] [i_8] [i_13] [i_8] = ((/* implicit */signed char) ((((arr_1 [i_13] [i_8]) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))) >> (((((/* implicit */int) var_15)) - (5911)))));
                            arr_47 [i_6] [i_7] [i_6] [i_13] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4095))));
                        }
                        /* vectorizable */
                        for (signed char i_15 = 3; i_15 < 18; i_15 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) var_8);
                            var_33 = ((/* implicit */short) var_5);
                            var_34 = ((/* implicit */signed char) max((var_34), ((signed char)0)));
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) arr_1 [i_15 - 1] [i_8 - 1]))));
                            var_36 &= ((/* implicit */int) var_13);
                        }
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (max((((((/* implicit */_Bool) (signed char)125)) ? (4250145594448323944ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) 7915859057914874670LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            arr_54 [i_6] [i_16] [i_6] [i_8] [i_16] [i_8] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_8] [i_8] [i_7])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_44 [i_8] [(signed char)2] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8]))));
                            arr_55 [i_6] [i_8] [i_8] [i_13] [i_16] = ((signed char) arr_13 [i_6] [i_7] [i_6] [i_13] [i_16] [i_8 - 1]);
                            var_39 = ((/* implicit */unsigned char) var_10);
                        }
                        for (int i_17 = 2; i_17 < 17; i_17 += 1) 
                        {
                            var_40 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8 - 1] [i_7] [i_6]))) : (((((/* implicit */_Bool) arr_38 [i_17] [i_13] [i_8] [i_7] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_17 + 2] [i_6] [i_8 - 1] [i_13] [i_17]))) : (var_8)))));
                            arr_58 [i_6] [i_8] [i_8] [i_13] [i_17] [i_8] [i_8] = (i_8 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((((arr_35 [i_17 + 2] [i_13] [i_13] [i_8] [i_7] [i_7] [(short)12]) ? (((/* implicit */int) arr_9 [i_7] [i_8])) : (((/* implicit */int) var_16)))) + (2147483647))) >> (((((/* implicit */int) min((((/* implicit */short) arr_3 [i_6] [i_8] [i_8])), (arr_56 [i_6] [i_7] [i_8] [i_13] [i_17])))) + (24013)))))) * (max((((((/* implicit */_Bool) var_12)) ? (arr_53 [i_6] [i_7] [i_8] [i_8 - 1] [i_13] [i_17]) : (arr_36 [i_17] [i_13] [i_6] [i_7] [i_6]))), (((/* implicit */unsigned int) ((short) var_19)))))))) : (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((((((arr_35 [i_17 + 2] [i_13] [i_13] [i_8] [i_7] [i_7] [(short)12]) ? (((/* implicit */int) arr_9 [i_7] [i_8])) : (((/* implicit */int) var_16)))) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) min((((/* implicit */short) arr_3 [i_6] [i_8] [i_8])), (arr_56 [i_6] [i_7] [i_8] [i_13] [i_17])))) + (24013)))))) * (max((((((/* implicit */_Bool) var_12)) ? (arr_53 [i_6] [i_7] [i_8] [i_8 - 1] [i_13] [i_17]) : (arr_36 [i_17] [i_13] [i_6] [i_7] [i_6]))), (((/* implicit */unsigned int) ((short) var_19))))))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) /* same iter space */
                        {
                            arr_62 [i_6] [i_8] = ((/* implicit */short) min((arr_48 [i_8] [i_7] [19] [i_13]), (((/* implicit */int) (_Bool)1))));
                            arr_63 [i_8] [i_18] = ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_8)))) && (((/* implicit */_Bool) ((arr_51 [i_6] [i_7] [i_8 - 1] [i_8] [i_18]) ? (var_11) : (((/* implicit */unsigned long long int) arr_59 [i_6] [i_7] [i_8] [(_Bool)1] [i_13] [i_18])))))))), (max((((/* implicit */short) arr_57 [i_6] [i_7] [i_8 - 1] [i_8 - 1] [i_18] [i_18])), (arr_34 [i_6] [i_7] [i_8] [i_8] [i_18] [i_8])))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 1) /* same iter space */
                        {
                            arr_66 [i_6] [i_7] [i_6] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 3441376110U)) ? (((/* implicit */int) (unsigned short)28808)) : (((/* implicit */int) (unsigned char)53))));
                            arr_67 [i_6] [i_6] [i_6] [i_13] [i_8] [i_13] [i_6] = ((/* implicit */unsigned char) (+(arr_65 [i_7] [i_8] [i_8 - 1] [i_13] [i_19] [i_19])));
                            var_41 = ((/* implicit */unsigned char) ((arr_27 [i_19] [i_8] [i_8] [i_6]) & (arr_27 [i_6] [i_8] [i_13] [i_19])));
                            arr_68 [i_19] [i_7] [i_8] [i_7] [i_8] [(unsigned char)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
                        }
                        arr_69 [i_8] [i_13] = ((/* implicit */unsigned short) ((var_5) ? (((((/* implicit */_Bool) arr_18 [i_7])) ? (min((var_3), (((/* implicit */unsigned long long int) arr_0 [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (((/* implicit */short) arr_39 [(_Bool)1] [i_8] [i_8] [i_8] [i_6] [i_6])))))))) : (((var_11) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_17)))))))));
                        arr_70 [i_13] &= ((/* implicit */long long int) var_16);
                    }
                    arr_71 [i_6] [i_6] [i_7] |= ((/* implicit */unsigned char) arr_24 [i_8]);
                    var_42 ^= ((/* implicit */signed char) max((((var_19) ? (((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7])) : (((/* implicit */int) arr_30 [i_6] [i_7] [i_8] [i_8 - 1])))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (var_6)))));
                }
            } 
        } 
    } 
}
