/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126944
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_10 = ((/* implicit */unsigned int) arr_0 [i_0]);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    var_11 = ((/* implicit */unsigned int) ((72424613) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24948)))))));
                    arr_8 [i_3] [(short)17] [i_2] [i_1] [i_1] [i_0] = (_Bool)1;
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])), (var_6))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)73))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                }
                var_13 &= ((/* implicit */short) max(((-((+(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))))));
                var_14 = ((/* implicit */unsigned short) max((min((((unsigned long long int) (unsigned short)28734)), (((/* implicit */unsigned long long int) min(((short)15518), (((/* implicit */short) (unsigned char)235))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) (short)31744)))), (((/* implicit */int) ((signed char) arr_1 [i_1]))))))));
                var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)36)) ? (arr_5 [i_0]) : (arr_5 [i_2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
            }
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
            var_17 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_4])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) var_7))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_18 = (!(((/* implicit */_Bool) arr_3 [(unsigned char)19] [i_5])));
            var_19 = (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_6 [i_5] [i_5] [i_0] [i_0]) : (((/* implicit */int) var_9))))));
            arr_14 [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5])) && (((/* implicit */_Bool) 3324489788U)))) ? (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) arr_2 [i_0] [21U] [i_0])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_1))));
        }
        var_20 = ((/* implicit */unsigned short) 6198905231560879668ULL);
    }
    for (int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        arr_17 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (4198406706U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))), (arr_12 [5] [i_6] [i_6]))))));
        var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((arr_5 [i_6]) - (((/* implicit */unsigned int) arr_9 [i_6]))))) - (max((((/* implicit */long long int) 171502651)), (-9176463559273266943LL)))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            var_22 *= ((/* implicit */short) ((int) 1073741823U));
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        var_23 -= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_8]))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                        arr_29 [i_7] [i_8] [i_9] [i_7] [i_7] [i_8] = (signed char)70;
                    }
                    arr_30 [i_7] [i_7] [i_7] [i_9] [i_7] [i_10] = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) -1209914931)))) ? (((var_8) ? (((unsigned long long int) arr_27 [i_7] [i_9] [0ULL] [i_8] [i_7])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9]))))) : (((/* implicit */unsigned long long int) ((arr_6 [i_7] [i_7] [i_7] [i_7]) - (-1))))));
                }
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                {
                    arr_33 [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-69)) / (((/* implicit */int) (unsigned char)250)))) / (((/* implicit */int) ((arr_6 [i_7] [i_8] [i_9] [i_12]) >= (((/* implicit */int) arr_7 [i_7] [i_8] [i_8] [i_9] [i_12] [i_12]))))))) & (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_24 [i_7] [i_8] [i_7] [i_12]))))))));
                    arr_34 [i_7] [i_8] [i_7] [6LL] [11U] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_7] [i_7] [i_7]))) : (arr_31 [i_7] [i_7] [i_7])))))));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_7] [8ULL] [i_13] [i_7])) ? (arr_25 [i_13] [i_13] [i_13] [i_13] [(_Bool)1] [i_13]) : (((/* implicit */unsigned int) -783002157))))) ? (((/* implicit */int) arr_32 [i_7])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((int) arr_31 [(short)13] [i_8] [(short)13])) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (576460752303423487ULL)))))))));
                        var_25 = ((/* implicit */signed char) (unsigned short)25356);
                    }
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (short)13833);
                        arr_39 [i_7] [i_8] [4] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (_Bool)1))));
                        arr_40 [i_7] [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) 2710962419U));
                        var_27 = ((/* implicit */signed char) 9223372036854775807LL);
                    }
                }
                var_28 = ((/* implicit */int) min((min((((var_8) ? (arr_5 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7]))))), (((/* implicit */unsigned int) arr_22 [i_7] [i_8])))), (((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (signed char)0))))))));
                var_29 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_22 [i_9] [i_8])))) % (max((((/* implicit */unsigned int) var_5)), (2710962387U))))), (((/* implicit */unsigned int) arr_6 [i_7] [0ULL] [(signed char)16] [(unsigned short)8]))));
                var_30 -= ((/* implicit */short) min(((~(arr_31 [i_7] [i_8] [i_7]))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18923))) | (arr_31 [i_7] [i_8] [i_9])))));
            }
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                arr_45 [i_7] [i_7] = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) (signed char)-1)) + (10)))))) && (((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))))), (((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [18] [i_8] [i_8] [13U] [18] [i_8]))) == (arr_12 [i_7] [i_7] [i_7]))))));
                var_31 = ((/* implicit */unsigned long long int) ((short) min((arr_4 [i_15] [i_8] [i_7]), (arr_4 [i_8] [i_8] [i_8]))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                arr_49 [i_7] [(unsigned short)1] [i_8] [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_7])) ? (max((arr_22 [8U] [(unsigned char)3]), (arr_9 [i_8]))) : (((/* implicit */int) arr_26 [i_7] [5U] [i_8] [i_7]))))));
                var_32 = ((/* implicit */short) (unsigned short)65535);
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((unsigned int) ((var_4) ^ (arr_5 [i_7])))))));
            }
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_7])) <= (((/* implicit */int) min((arr_1 [i_7]), (arr_1 [i_8]))))));
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_35 = ((/* implicit */unsigned int) (~(((arr_21 [i_7]) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)46616)))))))));
                arr_54 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((arr_31 [i_7] [i_7] [i_7]), (((/* implicit */long long int) arr_25 [i_7] [i_7] [i_8] [i_8] [i_8] [i_7])))) - (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_7] [i_7] [i_17]), ((unsigned short)11326)))))))) ? (max((((/* implicit */long long int) max((((/* implicit */int) arr_18 [i_7])), (973467578)))), ((~(1684605345557415928LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)24348)) >> (((arr_6 [i_7] [i_7] [i_7] [i_7]) - (1042793975)))))) ? (((/* implicit */int) arr_35 [i_17] [i_7] [8LL] [i_8] [i_7] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) 479484622U))))))))));
                var_36 = arr_22 [i_8] [i_8];
            }
        }
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_7] [i_7] [i_7])), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-56))) / (var_6)))))) / (max((11874697847229801374ULL), (((/* implicit */unsigned long long int) arr_41 [i_7]))))));
        /* LoopSeq 1 */
        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            var_38 = (!(((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_7] [i_18])) && (((/* implicit */_Bool) var_6))))), (var_3)))));
            var_39 = ((/* implicit */long long int) arr_25 [i_7] [10LL] [i_7] [i_18] [i_18] [i_18]);
            var_40 = ((/* implicit */int) ((min((arr_31 [i_18] [i_7] [i_7]), (((/* implicit */long long int) -436957955)))) >= (arr_31 [i_7] [i_7] [i_7])));
        }
        arr_57 [i_7] = ((/* implicit */short) (unsigned char)201);
        arr_58 [i_7] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_37 [i_7] [i_7])) && (((/* implicit */_Bool) var_4))))));
    }
    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
        {
            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((unsigned int) 375279105U)))));
            /* LoopSeq 1 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                arr_67 [i_19] [i_20] = arr_11 [i_21] [(unsigned short)11] [(unsigned short)11];
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_22 = 0; i_22 < 18; i_22 += 3) 
                {
                    var_42 = ((/* implicit */short) (-(((/* implicit */int) (signed char)1))));
                    arr_72 [i_19] [i_20] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((-9223372036854775807LL - 1LL))));
                    var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_19] [3ULL] [i_22]))) / (((arr_12 [(signed char)14] [6LL] [i_20]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_19] [i_21] [i_19]))))))))));
                }
                var_44 = ((/* implicit */_Bool) (unsigned short)920);
            }
            arr_73 [i_20] = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */int) arr_11 [i_19] [i_19] [i_19])) % (((/* implicit */int) var_3)))) & (((((/* implicit */_Bool) (short)-26373)) ? (((/* implicit */int) arr_7 [(short)8] [i_19] [i_20] [i_20] [(_Bool)1] [(short)18])) : (var_5))))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_45 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3112))) : (arr_3 [i_19] [i_23])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)2))))) : (min((17812616799262775691ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            var_46 = ((/* implicit */int) arr_7 [15ULL] [10U] [i_19] [i_19] [i_19] [10U]);
        }
        for (short i_24 = 0; i_24 < 18; i_24 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                var_47 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_10 [i_19] [i_24] [18ULL])))), (((((/* implicit */int) var_3)) / (((/* implicit */int) var_3)))))), (((/* implicit */int) min((var_2), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >= (arr_59 [i_25])))))))));
                var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_61 [i_24]))))), (((unsigned short) var_1))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8431)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (0U)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_63 [2ULL])) : (((/* implicit */int) (signed char)29)))) : (((/* implicit */int) arr_10 [i_19] [i_19] [i_19]))))));
            }
            for (long long int i_26 = 0; i_26 < 18; i_26 += 1) /* same iter space */
            {
                var_49 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1423607471U)) ? (arr_66 [i_19] [i_19] [i_19]) : (arr_66 [i_19] [i_24] [i_24]))) - (((((/* implicit */_Bool) arr_66 [i_19] [i_24] [i_26])) ? (arr_66 [i_24] [i_24] [i_24]) : (((/* implicit */unsigned int) -1714896453))))));
                var_50 = ((/* implicit */unsigned char) arr_10 [i_26] [i_24] [i_19]);
                var_51 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (arr_59 [i_19])))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_74 [i_19] [i_26])) <= (5374457069540851127LL)))) : (((((/* implicit */int) arr_2 [17] [i_24] [i_26])) & (((/* implicit */int) arr_81 [i_19] [i_19] [i_26]))))))));
            }
            for (long long int i_27 = 0; i_27 < 18; i_27 += 1) /* same iter space */
            {
                arr_87 [i_27] [i_27] = ((/* implicit */short) (signed char)-56);
                var_52 -= (short)63;
                var_53 = ((/* implicit */long long int) 986407728U);
            }
            for (long long int i_28 = 0; i_28 < 18; i_28 += 1) /* same iter space */
            {
                arr_91 [i_28] [i_24] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                var_54 = ((((/* implicit */long long int) arr_82 [(short)4] [i_24] [i_28])) - (var_0));
                var_55 = ((/* implicit */unsigned char) 18173774294731168097ULL);
                var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_74 [i_24] [i_19])) ? (((/* implicit */int) arr_7 [i_28] [i_24] [i_19] [i_24] [i_24] [i_19])) : (((/* implicit */int) arr_13 [i_19] [i_19] [i_19]))));
            }
            var_57 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_24] [i_19] [i_19])) ? (((((/* implicit */_Bool) var_5)) ? (arr_90 [i_19]) : (arr_90 [i_19]))) : (min((arr_62 [i_24]), (((/* implicit */int) arr_13 [i_19] [(short)21] [i_24]))))));
            var_58 = ((/* implicit */unsigned int) 1833188955535151663ULL);
        }
        for (unsigned short i_29 = 0; i_29 < 18; i_29 += 3) 
        {
            var_59 = ((/* implicit */unsigned char) arr_59 [i_19]);
            arr_95 [i_19] [i_19] [i_19] = ((/* implicit */int) arr_0 [16]);
        }
        arr_96 [i_19] &= ((/* implicit */unsigned short) max((((unsigned long long int) max((((/* implicit */long long int) arr_1 [i_19])), (var_6)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_19] [i_19] [i_19]))) : (var_0))), (((/* implicit */long long int) arr_62 [4U])))))));
        var_60 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 634127274446775925ULL)) ? (5490887498063569277ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) -8077010641573234935LL))) ? (2871359823U) : (3888020676U)))) : (18173774294731168097ULL)));
    }
    var_61 = ((/* implicit */short) ((((/* implicit */int) (short)445)) <= (((((/* implicit */_Bool) max((3046214509U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (unsigned short)61142))))));
    var_62 = ((/* implicit */unsigned int) var_8);
}
