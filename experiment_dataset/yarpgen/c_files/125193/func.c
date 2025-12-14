/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125193
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) 8942752649492626904LL);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) -8942752649492626878LL);
            var_19 = ((/* implicit */unsigned short) ((min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 + 1] [i_1]))) * (((/* implicit */unsigned long long int) ((8942752649492626872LL) / (-8942752649492626872LL))))));
            var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (2418031710564602127ULL) : (2418031710564602118ULL)))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 8942752649492626927LL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) >= (min((2452370908U), (((/* implicit */unsigned int) (_Bool)1)))));
            var_21 *= ((/* implicit */unsigned char) (-(((((-8942752649492626894LL) + (9223372036854775807LL))) >> (((10564818636234091652ULL) - (10564818636234091650ULL)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_12 [i_0] [16U] [16U] = ((/* implicit */short) ((unsigned short) 2452370907U));
            var_22 = ((/* implicit */int) ((((arr_0 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((16028712363144949464ULL) == (((/* implicit */unsigned long long int) var_4)))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24900)))));
            var_23 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)78)))) | (7881925437475459969ULL));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (((~(4294967285U))) >> ((((+(814095298388458273ULL))) - (814095298388458244ULL))))))));
        }
        arr_13 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [i_0] [10]))))))) ? (16028712363144949506ULL) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_5)))))))));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)35);
    }
    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) min((min((4471357683453869641ULL), (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4 + 1] [i_4 + 1])))), (((((/* implicit */unsigned long long int) arr_16 [i_4 + 1])) * (16028712363144949471ULL)))));
        var_26 = ((/* implicit */short) ((long long int) ((int) 1773037061)));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                {
                    var_27 = ((/* implicit */int) ((short) arr_21 [i_4] [i_6] [i_6]));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_25 [i_4 - 1] [(unsigned char)14] [i_4] [i_4 - 1] [i_6] = ((16028712363144949496ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18509))));
                        arr_26 [i_6] [i_5] [i_6] = ((/* implicit */short) 4180457381U);
                        var_28 = ((/* implicit */int) arr_17 [i_7]);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) ((_Bool) (short)-28666));
                        arr_29 [i_4] [i_5] [i_5] [i_8] &= ((/* implicit */int) ((((/* implicit */_Bool) -8942752649492626906LL)) ? (2252233398U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38)))));
                    }
                }
            } 
        } 
        arr_30 [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4 + 1])) << (((arr_28 [i_4] [i_4] [10LL] [10LL] [i_4]) - (2012115345)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | ((~(81219028)))))) : (((arr_1 [i_4] [i_4]) | (((/* implicit */unsigned long long int) var_9))))));
        var_30 = ((/* implicit */unsigned int) (((+(81219020))) << (((((((/* implicit */_Bool) 193917095)) ? (12807540236763939744ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_4] [i_4] [6] [i_4] [i_4])) ? (((/* implicit */int) arr_8 [(_Bool)1])) : (8)))))) - (12807540236763939743ULL)))));
    }
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 1; i_12 < 16; i_12 += 3) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28662))) | (min((((/* implicit */unsigned long long int) (unsigned short)17035)), (8985643558691686240ULL)))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)28660)) < (((((/* implicit */int) var_16)) | (((/* implicit */int) (unsigned char)224))))))) << (((/* implicit */int) (_Bool)1))));
                        var_33 = ((/* implicit */int) ((_Bool) -193917095));
                    }
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        var_34 = ((/* implicit */int) 7881925437475459955ULL);
                        var_35 = ((/* implicit */signed char) (((+((-2147483647 - 1)))) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44137)) && (((/* implicit */_Bool) 4180457399U)))))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1728108044)) ? (-495524772) : (((/* implicit */int) (short)-13589))));
                        var_37 = ((((/* implicit */_Bool) -2098189839)) && (((/* implicit */_Bool) 10564818636234091637ULL)));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_14 = 3; i_14 < 15; i_14 += 4) 
                    {
                        var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (-1522716885) : (((/* implicit */int) arr_7 [i_10] [i_10] [i_10]))))) ? (((-81218997) | (((/* implicit */int) arr_27 [i_9])))) : (((/* implicit */int) (unsigned short)30))));
                        var_39 = ((/* implicit */unsigned short) (signed char)-7);
                    }
                    var_40 |= ((/* implicit */short) ((((/* implicit */int) (short)-408)) >= (((/* implicit */int) (unsigned char)255))));
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        var_41 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_17 [i_9]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 81219005))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (193917092) : (((/* implicit */int) (unsigned short)32768))))))) || (((2137724436) >= (642832435)))));
                        var_42 = (unsigned short)56552;
                        arr_50 [i_9] [i_10] [i_10] [i_11] [i_9] = ((/* implicit */unsigned short) -81219021);
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 1; i_16 < 16; i_16 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned int) (_Bool)1);
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)14)) | (((/* implicit */int) arr_32 [i_16 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_9] [i_16 - 1] [i_15] [(signed char)2] [2] [(signed char)14])) / (-193917095)))) : (10564818636234091642ULL)));
                            var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) arr_20 [(short)18] [(short)18] [i_16]))));
                        }
                        var_46 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_32 [i_11])) ? (-642832410) : (((/* implicit */int) arr_32 [i_10])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned int) ((-407344517) < (((/* implicit */int) arr_17 [i_9]))));
                        var_48 = ((/* implicit */unsigned char) ((arr_1 [i_17] [i_10]) / (arr_1 [i_10] [i_11])));
                        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9]))));
                        var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)195)))))));
                        /* LoopSeq 2 */
                        for (int i_18 = 3; i_18 < 16; i_18 += 3) 
                        {
                            var_51 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_52 *= ((((/* implicit */int) var_14)) < (((/* implicit */int) arr_27 [i_18 + 1])));
                            var_53 += ((/* implicit */unsigned char) ((unsigned short) (unsigned short)32757));
                        }
                        for (unsigned short i_19 = 0; i_19 < 17; i_19 += 3) 
                        {
                            arr_61 [i_17] [i_10] |= (-(642832424));
                            var_54 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) <= (arr_28 [i_9] [(unsigned short)2] [i_9] [i_17] [i_19])));
                        }
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 2) 
                    {
                        var_55 = ((((((/* implicit */int) ((short) arr_52 [i_9] [i_9] [i_9]))) + (2147483647))) << (((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_12)))) - (1))));
                        var_56 = ((/* implicit */unsigned int) (unsigned char)204);
                    }
                }
                arr_65 [i_9] [i_9] = ((/* implicit */_Bool) arr_63 [i_9] [i_9] [i_9] [(short)14] [i_9]);
                var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)216)) - (((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */int) (unsigned char)252)) : (((((/* implicit */int) arr_36 [i_9] [i_9] [i_9] [i_10])) | (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_58 &= ((/* implicit */int) ((min((((int) var_17)), (((((/* implicit */_Bool) 4847584940959808029ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))))) >= (((((/* implicit */int) (signed char)64)) * (((/* implicit */int) (unsigned char)46))))));
}
