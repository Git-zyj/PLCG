/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107237
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned short) ((signed char) 131071U))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((signed char) (-((+(var_6)))))))));
            arr_7 [i_0] [i_1] [(_Bool)1] = var_0;
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_1 [i_1])) % (arr_4 [i_1])));
        }
        for (short i_2 = 4; i_2 < 18; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 3; i_5 < 18; i_5 += 1) 
                        {
                            arr_24 [i_3] [i_5] [i_4] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) 8066735336820727118ULL);
                            var_22 = ((/* implicit */long long int) ((((arr_20 [i_4] [i_3] [i_4] [i_3 + 1] [i_3 + 1] [i_3] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 4] [i_5] [(signed char)12]))))) && (arr_13 [i_0] [i_2 + 2] [i_3 + 1] [i_5 - 2])));
                        }
                        arr_25 [i_3] [i_2] [(signed char)11] [i_2] [i_2 + 2] [i_2 + 2] = 1956815410U;
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_19 [i_3] [i_2] [i_3] [i_3] [i_0])))))), (max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_1))))));
                        arr_26 [i_3] [i_4] [17] [i_2] [i_3] = ((2338151885U) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_13 [i_0] [i_2] [i_3] [i_4]))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) ((min((1956815410U), (1047681587U))) >= (min((((/* implicit */unsigned int) (~(352764393)))), (65535U)))));
            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (arr_3 [i_0] [i_2 - 1]))))));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((int) 1047681587U)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 1]))))))))));
        }
        for (short i_6 = 4; i_6 < 18; i_6 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                for (signed char i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    {
                        var_27 = var_3;
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_22 [i_9] [i_0] [i_7] [i_6] [i_0])))) > (((/* implicit */int) var_0)))))));
                            var_29 = ((/* implicit */signed char) (+(((((/* implicit */long long int) 868905935U)) | (8343457042658889403LL)))));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_16 [i_8 + 1] [i_7 - 1] [i_0] [i_0] [i_8]), (arr_16 [i_0] [i_7 - 1] [i_7] [i_8 + 1] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) var_3)) != (var_15))))) : (var_6)));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) % (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_6] [i_7 + 1] [i_7 + 1] [i_6]))) - (((long long int) var_17)))))))));
                            var_32 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) (_Bool)0)));
                        }
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_33 = ((/* implicit */_Bool) max((var_33), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (arr_14 [i_7 - 1] [i_7 - 1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                            var_34 = ((((/* implicit */_Bool) (unsigned char)110)) ? (1956815410U) : (4294967295U));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_48 [i_12] [i_11] [i_11] [i_11] [i_0] [i_0] = ((/* implicit */unsigned int) -2948546663878990321LL);
                    var_35 += max((var_9), ((~(max((((/* implicit */unsigned int) (signed char)119)), (2512412635U))))));
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) var_11)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0]))))))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_30 [i_11] [(unsigned char)13] [i_0] [i_6])))), (((((-1) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_6])) - (222)))))))) : (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (1032911589U)))))))));
                }
                for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        arr_56 [i_0] [i_6 - 3] [i_11] [i_13] [i_11] [i_6] = ((/* implicit */unsigned short) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(1956815410U))))))));
                        arr_57 [i_0] [i_6] [i_11] [i_11] [i_14] = ((/* implicit */int) ((unsigned int) ((3426061361U) >> (((-188135311) + (188135328))))));
                        arr_58 [17] [i_11] = ((/* implicit */int) min((max((arr_3 [i_6] [i_14]), (((/* implicit */long long int) 0U)))), (min((arr_3 [i_0] [i_14]), (((/* implicit */long long int) arr_22 [3U] [i_13] [i_14] [i_0] [i_14]))))));
                    }
                    var_37 *= ((short) ((2948546663878990320LL) / (((/* implicit */long long int) arr_1 [i_6 - 2]))));
                    arr_59 [i_0] [i_11] [4U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_13 [i_6 + 2] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_13 [i_6 + 2] [i_6 - 4] [i_6 + 2] [i_0])) : (((/* implicit */int) arr_13 [i_6 - 4] [i_6] [i_6] [i_6])))) * ((-(((/* implicit */int) arr_13 [i_6 - 2] [(signed char)1] [i_6] [i_0]))))));
                }
                /* LoopNest 2 */
                for (signed char i_15 = 3; i_15 < 17; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) (~(((((/* implicit */int) ((arr_17 [i_11] [i_15] [i_16]) <= (((/* implicit */int) arr_21 [(unsigned char)4] [i_6] [i_11] [i_15] [i_16]))))) % (((/* implicit */int) ((signed char) var_16)))))));
                            arr_65 [i_0] [i_11] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) -674748802)) : (-5055887110883298687LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_6 - 2])))))) : (arr_55 [i_0] [i_0] [i_0] [13LL] [i_0])));
                            arr_66 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] &= ((/* implicit */long long int) ((max((((/* implicit */long long int) ((1352273269) > (((/* implicit */int) arr_12 [i_0] [i_6] [6LL]))))), (((long long int) -2845973085248227830LL)))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                            arr_67 [i_11] = var_7;
                        }
                    } 
                } 
            }
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) /* same iter space */
            {
                var_39 = (+(((((/* implicit */_Bool) 674748802)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5828))) : (9223372036854775807LL))));
                var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) arr_27 [i_6] [i_6]))));
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)723))) >= (max((arr_33 [i_0] [i_6] [i_17] [i_17]), (((/* implicit */long long int) var_1)))))))) : (((((/* implicit */long long int) 674748802)) % (2845973085248227829LL)))));
            }
            arr_71 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) ((-1101062955) % (((/* implicit */int) (short)-19440))))), (1047681587U))));
        }
        var_42 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */short) ((_Bool) arr_35 [0U] [i_0] [i_0] [i_0] [4LL] [i_0] [0U])))));
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            for (int i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        var_43 = ((/* implicit */long long int) ((int) min((var_10), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_18] [i_19])))));
                        var_44 |= var_15;
                    }
                    var_45 = 907542188086287399LL;
                    arr_81 [13LL] [i_18] [i_0] = ((/* implicit */unsigned short) (short)0);
                    arr_82 [i_0] [i_0] [i_18] [16ULL] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_16))))) ? (((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */unsigned long long int) arr_45 [i_18])) : (70368744169472ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_11)))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) 
        {
            var_46 *= ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])))));
            /* LoopNest 3 */
            for (long long int i_22 = 0; i_22 < 20; i_22 += 1) 
            {
                for (unsigned int i_23 = 0; i_23 < 20; i_23 += 2) 
                {
                    for (long long int i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        {
                            var_47 = arr_79 [i_0] [i_21] [i_22] [(_Bool)1] [i_24];
                            arr_96 [i_0] [i_21] [i_0] [i_23] [i_21] [i_24] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (unsigned char)255)), (0U)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_25 = 4; i_25 < 19; i_25 += 3) 
        {
            arr_101 [i_0] [i_0] [i_25] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
            arr_102 [i_0] = ((/* implicit */short) arr_39 [i_25] [i_0] [i_0] [i_25]);
            arr_103 [i_25] [6LL] [i_0] = ((/* implicit */long long int) min((max((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_18)))), (((((/* implicit */int) var_19)) * (0))))), ((~(((/* implicit */int) min(((unsigned char)43), (((/* implicit */unsigned char) (signed char)34)))))))));
            var_48 = ((/* implicit */_Bool) var_2);
        }
        for (short i_26 = 0; i_26 < 20; i_26 += 1) 
        {
            var_49 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((1502004099U), (((/* implicit */unsigned int) (+(arr_91 [i_0] [i_26] [i_26] [5LL])))))))));
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (2850651980U) : (2850651980U))))));
            /* LoopNest 2 */
            for (long long int i_27 = 0; i_27 < 20; i_27 += 2) 
            {
                for (signed char i_28 = 0; i_28 < 20; i_28 += 2) 
                {
                    {
                        var_51 = ((/* implicit */unsigned int) var_17);
                        var_52 -= ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_26]);
                        var_53 = ((/* implicit */signed char) ((4294967295U) < (((/* implicit */unsigned int) 244874413))));
                        arr_112 [i_27] [i_28] [i_28] [i_28] [i_0] [i_26] = ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5828)))));
                    }
                } 
            } 
        }
        arr_113 [i_0] = ((/* implicit */signed char) arr_16 [i_0] [i_0] [16U] [i_0] [(signed char)6]);
    }
    var_54 = ((/* implicit */short) max((var_4), (((/* implicit */unsigned long long int) var_1))));
}
