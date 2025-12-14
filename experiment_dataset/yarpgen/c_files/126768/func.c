/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126768
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) != (var_5)));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))) : ((+(var_5)))))) : (var_9)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 18446744073709551600ULL)) ? (16ULL) : (((/* implicit */unsigned long long int) -64)))), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned int) var_5)), (1342408561U)))))) : (var_9)));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_1 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 18446744073709551610ULL)))) || (((((((/* implicit */_Bool) -83)) || (((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        arr_5 [i_1 - 1] = ((/* implicit */unsigned int) (unsigned short)65532);
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_16 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 1] [i_1 - 2])) ? (((/* implicit */int) arr_10 [i_1 + 3] [i_3 - 1] [i_1 + 3])) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_1 - 1])))) * (((/* implicit */int) max((arr_8 [i_2 - 1] [i_2 - 1]), (((/* implicit */short) (_Bool)0)))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!((!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                        arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_4])) ? (((/* implicit */unsigned int) 2147483647)) : (arr_14 [i_4] [i_3] [i_2] [i_1])))))) / ((-(4892710526075537007LL)))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 1])) >> (((((/* implicit */int) arr_2 [i_1 - 1])) - (25760)))))) ? ((-(((/* implicit */int) arr_2 [i_1 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 23; i_6 += 3) 
        {
            for (unsigned int i_7 = 4; i_7 < 23; i_7 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            arr_34 [i_5] [i_5] [i_7] [i_5] [i_6] [i_5] = ((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) (+(((/* implicit */int) ((-1868607202) <= (arr_25 [i_5] [i_6 - 1] [i_5] [i_8])))))))));
                            arr_35 [i_5] [i_6 + 1] [i_5] [i_8] [i_9] [(unsigned short)7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_25 [i_6] [i_6 + 1] [i_5] [i_7 + 1]) > (arr_25 [i_5] [i_6 + 1] [i_5] [i_7 - 3]))))));
                            var_22 ^= arr_26 [i_6 + 1] [i_6 - 1] [i_7];
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_7 - 3] [i_5]))));
                            arr_39 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (+(max((arr_22 [i_5]), (((/* implicit */long long int) (unsigned short)0))))));
                            var_24 -= var_14;
                        }
                        var_25 = ((/* implicit */unsigned long long int) (unsigned short)25497);
                        arr_40 [i_6 - 2] [(short)21] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned char)5)), (arr_32 [i_7] [i_7] [i_5] [i_7]))) << (((((/* implicit */int) var_8)) - (6734)))))) != ((-(((((/* implicit */unsigned long long int) arr_24 [i_5])) * (var_0)))))));
                    }
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        arr_44 [i_5] = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) var_10)))));
                        arr_45 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) arr_36 [i_5] [i_5] [i_5] [(unsigned char)5] [(short)0] [i_5]);
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            var_26 += ((/* implicit */long long int) arr_20 [23] [23]);
                            var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_11] [i_11] [i_5] [i_7 - 2])) ? (((/* implicit */int) arr_23 [i_5] [i_7 - 3])) : (((/* implicit */int) arr_23 [i_5] [i_7 - 1]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (arr_21 [i_5]) : (1868607219)))), (((arr_19 [i_5] [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_49 [i_5] [i_11] [i_5] [22ULL] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_30 [i_5] [i_5] [i_11] [11LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_5] [i_5]))))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_48 [i_5] [i_6 - 2])), (arr_22 [i_5])))) ? (((((/* implicit */_Bool) arr_33 [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                            var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) min((arr_33 [i_5]), (((/* implicit */unsigned char) var_2)))))), (((max((((/* implicit */unsigned long long int) arr_43 [i_5] [i_5] [0LL] [0LL] [i_11] [i_12])), (var_0))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_5] [(unsigned char)23] [(unsigned char)23] [i_5] [i_5])))))));
                        }
                        for (int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            var_29 ^= ((/* implicit */unsigned short) arr_50 [i_5] [i_5] [(_Bool)1] [i_5] [i_5] [20LL] [i_5]);
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~(arr_19 [i_6 - 2] [i_13]))))));
                            var_31 += ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_5] [5LL] [i_7] [i_11] [i_7] [i_11])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_43 [i_5] [i_7] [i_13] [i_7] [i_13] [i_7]), (arr_38 [i_13] [i_13] [i_7 - 4] [i_13] [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_19 [i_5] [i_13]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_7] [i_13])))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-101)) % (((/* implicit */int) arr_36 [i_13] [i_5] [i_5] [i_6] [i_5] [i_5]))))), (arr_32 [i_6] [i_6] [i_13] [i_6 - 1])))));
                        }
                        /* vectorizable */
                        for (short i_14 = 1; i_14 < 22; i_14 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((arr_38 [i_7] [i_7] [i_7 + 1] [i_7] [i_7 - 3]) ^ (((/* implicit */int) var_13))));
                            arr_54 [i_5] [i_5] [16LL] [16LL] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_6] [i_6 - 1] [i_7 - 3] [i_11] [i_14] [i_14 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32512))) < (560750930165760ULL))))));
                            var_33 = ((/* implicit */unsigned short) ((short) arr_50 [i_7 - 3] [i_7 + 1] [i_7 - 3] [i_7 + 1] [i_7] [(signed char)15] [i_7]));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            {
                                arr_59 [21ULL] [i_5] [21ULL] [9] [i_15] [21ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1868607202)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)187))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (-8307015453922564LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534)))));
                                arr_60 [i_5] [i_5] [i_7] [i_15] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((470881841) >> (((/* implicit */int) (unsigned short)4))))))), ((+(max((var_9), (((/* implicit */long long int) 1395944258U))))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_33 [i_5]))))) == (((((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_7 - 4] [i_7 - 3] [i_6 + 1] [i_7 - 1])) ? (((((/* implicit */_Bool) arr_42 [(unsigned char)22] [7ULL] [7ULL] [i_6] [i_5] [7ULL])) ? (((/* implicit */unsigned long long int) arr_51 [i_5] [i_7 - 4])) : (arr_26 [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_5])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49758)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_36 -= min((((/* implicit */long long int) ((((/* implicit */int) max((arr_50 [i_5] [i_5] [i_5] [(unsigned short)5] [i_5] [i_5] [i_5]), (((/* implicit */short) var_10))))) >> (((((/* implicit */int) (unsigned char)161)) - (139)))))), (max((((/* implicit */long long int) max(((unsigned short)18), (((/* implicit */unsigned short) (short)30891))))), ((+(8009228776767246197LL))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 3; i_19 < 23; i_19 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) (~((~(arr_21 [i_5])))));
                            var_38 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-3)), (arr_24 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))) : (((((/* implicit */unsigned long long int) arr_57 [i_6] [i_6 + 1] [i_5] [i_6] [i_19])) ^ (arr_65 [i_6] [i_6] [i_6] [16LL])))))));
                            arr_70 [i_18] [i_18] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((-8829896278890475626LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519)))));
                            arr_71 [i_5] [i_19] [i_6 + 1] [i_6 + 1] [i_5] [i_6 + 1] [i_5] = ((/* implicit */long long int) 1073741312);
                        }
                        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_10))));
                        arr_72 [i_5] [i_6 - 1] [i_7 - 4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_57 [i_5] [i_6] [i_5] [i_6 + 1] [i_5])), (min((((/* implicit */unsigned long long int) arr_62 [i_5] [i_5] [i_5] [i_6] [i_5] [i_18])), (arr_19 [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7])))))))) : (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_52 [i_6 - 2] [i_5] [i_7] [i_6 - 2] [i_5] [i_5] [i_5])) : (var_0))), (arr_28 [8U] [i_5] [i_18] [i_7 - 1] [i_5] [i_5])))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            for (int i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                for (unsigned short i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_5] [i_20] [i_5] [i_21] [i_21] [i_22]))))) * (((/* implicit */int) arr_75 [i_5] [i_5] [i_22]))));
                        var_41 = ((((/* implicit */_Bool) max((arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_21]), (arr_28 [17ULL] [i_5] [17ULL] [i_22] [17ULL] [i_21])))) ? (((((/* implicit */_Bool) arr_28 [i_22] [i_5] [i_5] [i_20] [i_5] [i_5])) ? (arr_28 [i_20] [i_5] [i_20] [i_20] [i_20] [23LL]) : (arr_28 [i_5] [i_5] [i_20] [i_21] [i_21] [i_22]))) : (((arr_28 [i_5] [i_5] [i_5] [i_5] [i_22] [i_22]) / (arr_28 [i_5] [i_5] [i_5] [(unsigned short)9] [i_20] [i_5]))));
                        var_42 += ((/* implicit */signed char) (unsigned short)65508);
                    }
                } 
            } 
        } 
        arr_81 [i_5] [i_5] = ((/* implicit */unsigned long long int) (short)-30891);
    }
    /* vectorizable */
    for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 1) 
    {
        var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_50 [13] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))));
        arr_84 [i_23] = ((/* implicit */unsigned int) arr_43 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]);
        /* LoopNest 3 */
        for (unsigned int i_24 = 0; i_24 < 18; i_24 += 4) 
        {
            for (unsigned char i_25 = 0; i_25 < 18; i_25 += 2) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 4) 
                {
                    {
                        arr_92 [i_23] [i_23] [i_25] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned short)33024)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_57 [i_23] [i_23] [i_23] [i_23] [i_26])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
                        arr_93 [i_23] [i_24] [i_25] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_87 [i_24] [(unsigned char)5] [(unsigned char)12])) == (-2101474602)));
                    }
                } 
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_14)))))) ? (((unsigned long long int) (~(var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
}
