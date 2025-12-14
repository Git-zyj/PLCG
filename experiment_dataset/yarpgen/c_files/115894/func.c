/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115894
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
    var_16 = ((/* implicit */short) ((((var_8) / (((/* implicit */long long int) var_2)))) % (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_17 = 434667704;
            var_18 = ((/* implicit */unsigned int) arr_2 [i_1 - 2] [i_0] [i_0]);
        }
        for (int i_2 = 2; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) || (((/* implicit */_Bool) ((var_6) >> (((var_9) + (542625754))))))));
            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) ((short) 834848183U))) + (14934)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)27437)) != (-1)))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_2 - 1])) ? (arr_7 [i_0] [i_2 + 1] [i_2]) : (arr_7 [10LL] [i_0] [i_0 + 3])))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 11; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((unsigned short) ((long long int) var_6)));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_4 [i_0 - 2])));
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_0 + 2])) % (arr_0 [i_3 - 2])));
        }
        /* LoopSeq 2 */
        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            arr_15 [i_0 - 3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -434667705)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1746342734U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))))) >> (((((int) arr_12 [i_4 + 2])) - (54897)))));
            /* LoopSeq 2 */
            for (int i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((short) var_0)))));
                var_25 = ((/* implicit */short) ((unsigned short) var_9));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((short) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) == (((/* implicit */long long int) arr_7 [i_0] [(short)2] [i_5])))))) > (((((/* implicit */_Bool) 36028522141057024LL)) ? (-942237734376418879LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1])))))))))));
                var_27 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13)))) % (var_14)));
                arr_18 [i_0] [i_4] [i_0] [i_0] |= ((/* implicit */short) ((long long int) ((3621921484U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 - 1] [i_5 + 1]))))));
            }
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                var_28 = max((((long long int) arr_4 [i_0])), (((/* implicit */long long int) arr_13 [(unsigned short)3] [i_4] [i_6])));
                var_29 = ((/* implicit */short) ((-434667705) ^ (((var_2) & (((/* implicit */int) arr_1 [i_0 - 1]))))));
                var_30 += ((/* implicit */int) ((short) arr_10 [i_4 + 1] [i_4 + 1]));
            }
        }
        for (short i_7 = 2; i_7 < 11; i_7 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) min((((var_6) & (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0])))), (-26LL)));
            arr_23 [i_7] = (short)0;
        }
    }
    for (short i_8 = 4; i_8 < 19; i_8 += 1) 
    {
        var_32 = ((/* implicit */short) ((unsigned short) ((unsigned int) (short)26)));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((unsigned int) ((unsigned int) 942237734376418878LL))))));
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) 503316480)) ? (((var_4) << (((((/* implicit */int) (unsigned short)58858)) - (58858))))) : (((/* implicit */long long int) ((/* implicit */int) (short)2047))))))));
    }
    for (short i_9 = 2; i_9 < 22; i_9 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */short) var_10);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_10 = 4; i_10 < 23; i_10 += 1) 
        {
            arr_33 [i_9] [i_9 - 2] [i_9] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_12)) ? (arr_28 [i_9] [i_10]) : (arr_28 [i_9] [i_10 - 2]))));
            var_36 = ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_30 [i_10 - 4] [i_10 - 4] [i_9 + 2]))));
        }
    }
    /* vectorizable */
    for (short i_11 = 2; i_11 < 22; i_11 += 4) /* same iter space */
    {
        var_37 = ((((/* implicit */_Bool) (short)-28324)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_36 [i_11 - 2])));
        var_38 &= ((/* implicit */short) 929592890);
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            arr_39 [i_12] = arr_28 [i_11 + 1] [i_11 + 1];
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) -942237734376418879LL))));
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) arr_34 [(unsigned short)7] [i_12]))));
        }
        for (unsigned int i_13 = 2; i_13 < 22; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_14 = 3; i_14 < 23; i_14 += 3) 
            {
                arr_45 [i_11] [i_13] [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_42 [i_13 - 1])) : (((/* implicit */int) arr_42 [i_13 - 1]))));
                /* LoopSeq 4 */
                for (unsigned short i_15 = 1; i_15 < 21; i_15 += 4) 
                {
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) 434667704)) ? (arr_38 [i_11 - 2] [i_15]) : (((/* implicit */int) ((67108863U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-13)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 3; i_16 < 21; i_16 += 4) 
                    {
                        var_42 ^= ((/* implicit */int) ((short) arr_38 [i_11 + 2] [i_16 + 1]));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6686)) && (((/* implicit */_Bool) 2935458865575485559LL))))) != (((/* implicit */int) ((unsigned short) var_6)))));
                    }
                    var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_40 [i_15] [i_13] [i_11 - 2]))) < (((/* implicit */int) arr_36 [i_14])))))));
                    var_45 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_14)));
                    var_46 = ((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_11 - 1] [i_11 - 2])) != (((/* implicit */int) arr_34 [i_11 - 1] [i_11 + 2]))));
                }
                for (long long int i_17 = 2; i_17 < 22; i_17 += 4) 
                {
                    var_47 &= ((/* implicit */short) var_13);
                    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_14 + 1] [i_11 + 1])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_32 [(unsigned short)13] [i_14])) | (((/* implicit */int) arr_48 [(short)8] [(short)8] [i_11] [i_11] [i_11]))))))))));
                    arr_53 [i_11] [i_13] [i_13] [i_11] = ((/* implicit */short) arr_49 [i_17 + 1] [i_13] [i_13] [i_11] [i_13] [i_11] [i_11]);
                    /* LoopSeq 3 */
                    for (short i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned short) ((int) (unsigned short)6));
                        var_50 = ((/* implicit */unsigned short) ((short) ((unsigned int) var_12)));
                        var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_51 [(short)0] [i_13] [i_14] [i_13] [i_18] [i_13]))) * (((/* implicit */int) ((((/* implicit */int) arr_31 [i_13])) < (((/* implicit */int) arr_35 [i_11 - 2]))))))))));
                        var_52 = ((/* implicit */unsigned short) ((arr_52 [i_13] [i_14 - 2]) % (arr_52 [i_13] [i_14 - 3])));
                    }
                    for (unsigned int i_19 = 3; i_19 < 22; i_19 += 1) 
                    {
                        arr_58 [i_11] [i_11] &= ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (-942237734376418879LL) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_11] [(short)6] [7] [(short)6] [i_11]))))) % (((/* implicit */long long int) var_14))));
                        var_53 = ((/* implicit */unsigned int) arr_47 [i_13] [i_13 - 1] [i_14 - 2] [i_17 + 1]);
                    }
                    for (unsigned short i_20 = 4; i_20 < 22; i_20 += 3) 
                    {
                        var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) var_1))));
                        var_55 = ((/* implicit */unsigned short) ((long long int) var_3));
                        arr_61 [i_13] [i_17] [i_14] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */int) (short)2272)) > (((/* implicit */int) (short)22730))));
                    }
                }
                for (short i_21 = 1; i_21 < 23; i_21 += 1) 
                {
                    arr_66 [23] [i_11] [i_13] [i_13] [i_21] [i_13] = ((/* implicit */short) ((((((-3871683209073168654LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-32178)) + (32230))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_13] [i_13] [i_14] [i_14])))));
                    /* LoopSeq 4 */
                    for (int i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_44 [i_13] [i_13] [i_13])) & (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned short) var_10)))));
                        var_57 *= var_0;
                        arr_69 [i_14] [i_13] [(unsigned short)16] [(unsigned short)14] [i_22] [i_14 - 3] = ((/* implicit */int) 133955584U);
                        arr_70 [i_13] [i_11] [i_13] [(unsigned short)18] [i_13] [i_21] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */int) arr_34 [i_11 - 2] [i_11])) : (((/* implicit */int) var_7))));
                        var_58 = ((/* implicit */int) max((var_58), (((int) arr_37 [i_11] [i_11] [i_11]))));
                    }
                    for (short i_23 = 3; i_23 < 22; i_23 += 1) 
                    {
                        var_59 = ((((/* implicit */int) ((unsigned short) var_3))) * (((/* implicit */int) arr_47 [i_11] [i_11 + 2] [i_14 - 3] [i_21 - 1])));
                        var_60 = ((/* implicit */unsigned short) ((((arr_40 [10U] [i_13] [i_13]) + (2147483647))) << (((((((((/* implicit */_Bool) arr_55 [i_14])) ? (((/* implicit */int) arr_68 [i_21 + 1] [i_21 + 1] [i_21] [(unsigned short)18] [i_21 - 1] [i_21] [i_21])) : (var_9))) + (14519))) - (4)))));
                    }
                    for (short i_24 = 2; i_24 < 23; i_24 += 2) 
                    {
                        var_61 ^= ((/* implicit */short) ((arr_38 [i_11 + 1] [i_13 - 1]) > (((((/* implicit */int) arr_51 [5U] [(unsigned short)6] [i_14] [i_14] [i_14] [i_14])) | (((/* implicit */int) var_15))))));
                        var_62 = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (arr_73 [i_14 + 1])));
                        arr_76 [i_24] [i_21] [i_24] [i_24] [(short)14] [(short)14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_24 + 1] [i_24 + 1])) && (((/* implicit */_Bool) arr_50 [i_13 + 1]))));
                    }
                    for (short i_25 = 4; i_25 < 22; i_25 += 2) 
                    {
                        arr_79 [i_13] [i_13] [i_14] [i_13] [i_13] = ((unsigned short) arr_73 [i_25]);
                        var_63 = ((/* implicit */long long int) arr_63 [i_11 - 1] [i_13] [(short)14] [i_11 - 1]);
                    }
                }
                for (int i_26 = 1; i_26 < 23; i_26 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        var_64 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) (short)6965)) : (((/* implicit */int) (unsigned short)0))))) * (var_14)));
                        var_65 = arr_81 [i_11] [i_13 - 1] [i_14] [22] [i_27];
                        var_66 = ((/* implicit */unsigned short) min((var_66), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 434667710)) ? (268435455U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1220))))))));
                        var_67 = ((long long int) arr_46 [i_13]);
                    }
                    for (int i_28 = 0; i_28 < 24; i_28 += 4) 
                    {
                        var_68 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) << (((var_14) - (1091026226U)))))) ? (((/* implicit */long long int) 1577154399)) : (var_1)));
                        var_69 = ((/* implicit */unsigned short) ((unsigned int) arr_77 [i_11] [i_13] [i_13] [i_26] [i_28]));
                    }
                    for (short i_29 = 0; i_29 < 24; i_29 += 1) 
                    {
                        arr_88 [(unsigned short)2] [(unsigned short)2] [i_13] [i_13] [i_14] [(unsigned short)6] [i_29] = ((/* implicit */long long int) arr_40 [i_26] [i_14] [i_11]);
                        var_70 = ((/* implicit */short) arr_27 [i_13] [i_11]);
                    }
                    for (long long int i_30 = 0; i_30 < 24; i_30 += 1) 
                    {
                        arr_91 [(unsigned short)21] [i_13] [(unsigned short)21] [(unsigned short)21] [(unsigned short)21] [i_13] [i_30] = ((/* implicit */unsigned short) ((((int) 642067103451623049LL)) > (((((/* implicit */_Bool) -942237734376418879LL)) ? (2147483647) : (((/* implicit */int) (short)4106))))));
                        arr_92 [i_11] [i_11 + 2] [i_11] [1] [i_11] [i_13] = ((/* implicit */short) arr_38 [i_11] [i_11]);
                    }
                    var_71 = ((/* implicit */unsigned int) var_9);
                    var_72 = ((unsigned int) arr_81 [(unsigned short)18] [i_14] [i_13 + 2] [i_13 + 2] [i_11 + 1]);
                }
            }
            for (short i_31 = 4; i_31 < 22; i_31 += 2) 
            {
                var_73 = ((short) var_2);
                arr_96 [i_13] [i_31 - 2] [(short)23] [i_13] = ((unsigned short) (short)2);
                var_74 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_11 + 2] [i_11 - 1])) << (((((((/* implicit */int) var_7)) + (2059))) - (9)))));
                var_75 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_11 - 1])) ? (((/* implicit */int) arr_36 [i_11 + 2])) : (((/* implicit */int) (unsigned short)32766))));
            }
            var_76 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((long long int) arr_50 [i_13])))));
            var_77 = ((/* implicit */short) arr_65 [i_13] [i_13] [i_13] [i_11]);
        }
        var_78 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)24)) : (var_2))) | (((/* implicit */int) var_10))));
    }
    var_79 = var_15;
    var_80 = ((/* implicit */unsigned int) var_8);
}
