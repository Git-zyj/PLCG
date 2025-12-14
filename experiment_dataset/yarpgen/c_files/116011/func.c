/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116011
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_5 [i_1] [i_2]);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */long long int) -419371760)) : (9223372036854775807LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775807LL))))) >= (((/* implicit */int) var_13))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_11 [i_3 - 2] [i_4 + 2])))) * (((unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1])) <= (87715539))))));
                                arr_17 [i_0] [i_1] [i_3 + 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -948586181)) >= (-9223372036854775807LL)));
                                var_22 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) (-(arr_14 [i_2] [i_2] [i_3] [i_2] [i_2] [i_1] [i_0])))) ? (var_15) : (((/* implicit */int) min((var_2), (((/* implicit */short) (_Bool)1))))))) : (((((/* implicit */int) ((_Bool) -9223372036854775807LL))) << (5ULL)))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] [7] = ((/* implicit */unsigned short) (-(-1)));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_2] [i_0] [i_5] [i_1] = ((/* implicit */unsigned short) (~(((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_21 [i_0] [i_1] [i_5] [i_1] [i_6])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_5] [i_6]))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned short)7]))) | (arr_2 [i_1] [i_6])))));
                                var_24 = ((/* implicit */long long int) -87715554);
                                arr_27 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = ((((int) (short)(-32767 - 1))) % (((int) (short)-21853)));
                                arr_28 [i_0] [i_1] [i_1] = 0ULL;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
    {
        arr_33 [i_7] = ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) arr_12 [i_7] [i_7])))));
        /* LoopSeq 1 */
        for (short i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            var_25 ^= ((/* implicit */signed char) arr_31 [i_7]);
            arr_38 [i_7] [i_8] = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) var_8))) == (9223372036854775807LL))) ? (((/* implicit */unsigned long long int) (+(9223372036854775788LL)))) : (((((/* implicit */_Bool) -9223372036854775783LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_7]))) : (17964606225457724530ULL))))) - (17964606225457724538ULL)));
            var_26 ^= ((/* implicit */unsigned long long int) ((min((((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7] [i_8])) - (((/* implicit */int) (short)21362))))))) >> (((((/* implicit */int) arr_0 [i_8])) + (41)))));
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (short i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        {
                            arr_47 [i_7] [i_8] [i_7] [i_7] [6U] [3ULL] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 772201851271220023ULL)) || (((/* implicit */_Bool) (short)-30512))))), (((arr_32 [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                            var_27 = ((/* implicit */long long int) ((var_19) >> (((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_7] [i_7])) ? (1606182999) : (var_16))))) - (26651)))));
                            var_28 = (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_7] [i_7])))))));
                            arr_48 [i_8] = (+(min((((/* implicit */unsigned long long int) (short)32767)), (16ULL))));
                            arr_49 [i_11] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25609)) ? (((/* implicit */long long int) 3741345714U)) : (9223372036854775806LL)));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))))), (((((/* implicit */int) var_1)) - (((/* implicit */int) var_4))))));
            }
            for (short i_12 = 2; i_12 < 23; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((167360739U) ^ (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7] [i_7]))) : (402653184U))))) % (((/* implicit */unsigned int) ((((/* implicit */int) (short)-10134)) * (((/* implicit */int) arr_43 [i_8] [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 2] [i_8])))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (+(5624920062756319399LL))))));
                            var_32 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2748358556435477362LL)) % (((((/* implicit */_Bool) 5604875227931687184ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32756))) : (12841868845777864421ULL)))));
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_55 [i_8 + 1] [i_12] [i_12] [i_12 + 1] [i_12 - 1])))))))));
                            arr_56 [i_7] [i_13] [i_12] [i_8] [i_14] = ((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_14] [i_13] [i_12] [i_8] [i_7]))))), ((-(((/* implicit */int) var_12))))))) <= (var_10));
                        }
                    } 
                } 
                var_34 = ((((/* implicit */int) (short)-32745)) + (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_34 [i_8] [i_8 + 3] [i_8]))))) || (((/* implicit */_Bool) 13346241717857746605ULL))))));
            }
            for (short i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                var_35 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (((+(((/* implicit */int) var_5)))) - (((/* implicit */int) (!(((/* implicit */_Bool) 11078117836913302278ULL)))))))), (((((/* implicit */_Bool) 9005000231485440ULL)) ? (14LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)384)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 2) 
                {
                    for (long long int i_17 = 2; i_17 < 23; i_17 += 2) 
                    {
                        {
                            var_36 += ((/* implicit */short) (((!(((arr_2 [i_8] [i_15]) != (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7] [i_7]))))))) ? (((unsigned int) 5100502355851805008ULL)) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_16))))))))));
                            var_37 = ((/* implicit */short) 5100502355851804991ULL);
                            var_38 = ((/* implicit */int) max((((((/* implicit */_Bool) max(((short)-16779), (((/* implicit */short) arr_44 [i_7] [i_7] [11LL] [i_7] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) : (((((/* implicit */_Bool) 18446744073709551589ULL)) ? (18446744073709551579ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) arr_55 [i_17 + 1] [i_8] [i_17 + 1] [i_17 + 1] [i_17]))));
                            var_39 = ((/* implicit */short) (~(14ULL)));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        var_40 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_7] [i_18] [i_18] [i_7] [i_20])) ? (12841868845777864417ULL) : (13098025262195616411ULL)))) ? (var_19) : (((/* implicit */unsigned long long int) ((unsigned int) (short)9218)))))));
                        var_41 -= ((/* implicit */_Bool) arr_7 [i_7] [i_18] [i_19]);
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        var_42 = ((/* implicit */int) ((((/* implicit */long long int) 2982318997U)) * (((arr_53 [i_7] [i_18] [i_19] [i_7]) / (arr_53 [i_7] [i_7] [i_7] [i_7])))));
                        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_30 [i_21]), (arr_3 [i_7] [i_18])))) ? ((-(-1841210102))) : (((((/* implicit */int) var_14)) / (((/* implicit */int) arr_30 [i_21])))))))));
                    }
                    for (unsigned int i_22 = 1; i_22 < 22; i_22 += 4) 
                    {
                        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */unsigned int) -1)) / (3089588164U))))));
                        arr_79 [i_19] [(short)21] [i_19] = ((((arr_61 [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */int) arr_61 [i_22 + 2] [i_7] [i_18] [i_7])) : (((/* implicit */int) arr_61 [i_7] [i_7] [i_7] [i_7])))) >= ((+(((/* implicit */int) var_12)))));
                    }
                    arr_80 [i_7] [i_18] [i_7] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (6746668663660282628LL))))) ? (((/* implicit */unsigned long long int) arr_65 [i_7] [i_7] [i_7] [i_7])) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_7] [i_18] [i_19] [i_19]))) ^ (13098025262195616417ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36435)) ? (((/* implicit */int) arr_77 [i_7] [i_7])) : (((/* implicit */int) arr_10 [i_7] [i_7] [i_19])))))))));
                    /* LoopSeq 3 */
                    for (signed char i_23 = 2; i_23 < 20; i_23 += 2) 
                    {
                        var_45 ^= ((/* implicit */_Bool) ((unsigned long long int) 1178602499868022882ULL));
                        var_46 = ((/* implicit */long long int) (short)-22227);
                    }
                    /* vectorizable */
                    for (unsigned int i_24 = 3; i_24 < 23; i_24 += 2) 
                    {
                        arr_88 [i_7] [i_18] [i_19] [(_Bool)1] [i_24 - 3] = ((/* implicit */unsigned short) ((arr_22 [i_24] [i_24 + 1] [i_24 + 1] [i_24 - 3] [i_24 + 1] [i_24]) - (arr_22 [i_24] [i_24] [i_24] [i_24 - 3] [i_24 - 1] [i_24 + 1])));
                        var_47 = arr_58 [i_7];
                        arr_89 [i_24 - 3] [i_7] [i_19] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (arr_60 [i_24 - 3])));
                    }
                    /* vectorizable */
                    for (short i_25 = 1; i_25 < 23; i_25 += 2) 
                    {
                        arr_92 [i_7] [i_19] [i_7] [i_25 + 1] [i_19] = ((/* implicit */short) (!(((((/* implicit */int) var_6)) < (arr_65 [i_7] [i_7] [i_7] [i_25])))));
                        var_48 = (((!(((/* implicit */_Bool) (signed char)55)))) ? (((/* implicit */int) arr_5 [i_19] [i_18])) : (((/* implicit */int) arr_52 [i_25 + 1] [i_25 - 1] [i_25 - 1] [i_7])));
                        arr_93 [i_7] [i_18] [i_7] [(unsigned short)3] [i_19] [i_25] = ((18415598434611072943ULL) >= (((/* implicit */unsigned long long int) 3089588164U)));
                    }
                }
            } 
        } 
    }
    var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) var_2))));
    var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 793938076)) : (10ULL))))) ? (min((1759949164520074015ULL), (((/* implicit */unsigned long long int) 3089588165U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (_Bool)0)))))));
}
