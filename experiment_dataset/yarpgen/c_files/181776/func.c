/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181776
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-6)) < (((/* implicit */int) (unsigned char)12))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((max((arr_2 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0])))), (min((((/* implicit */unsigned short) arr_1 [i_0])), (var_3))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_11 -= ((/* implicit */int) min((min((max((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max(((signed char)-6), ((signed char)64)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), ((~(((/* implicit */int) (unsigned char)173)))))))));
            arr_6 [i_0] [i_1] [22LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0]))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                var_12 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-82))));
                var_13 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_8 [i_2] [i_1] [i_0] [i_0])))) >> (((((/* implicit */int) (unsigned char)243)) - (214)))));
                arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) (signed char)-78);
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)7))));
                arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0]))));
            }
            for (short i_3 = 1; i_3 < 24; i_3 += 3) 
            {
                var_15 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)243)), (min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [i_1])), (arr_5 [i_0] [i_0] [(short)0])))));
                /* LoopSeq 4 */
                for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    arr_15 [i_0] = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [8LL] [i_0] [i_3 + 1] [i_3])), (arr_0 [i_0]))))));
                    var_16 ^= ((/* implicit */long long int) arr_11 [i_0] [i_1] [(short)5] [i_4]);
                    var_17 |= (-(-2354607119639324009LL));
                }
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_18 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) (short)1166))))), (max((((/* implicit */long long int) ((2354607119639324008LL) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (max((var_6), (2354607119639324008LL)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_19 = min((((/* implicit */short) (!(((/* implicit */_Bool) 215914401))))), (var_9));
                        arr_21 [i_0] [7ULL] [i_0] = ((/* implicit */long long int) (-((~(-569737104)))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (unsigned short)33386))));
                        arr_22 [i_0] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_8 [i_0] [(short)6] [21ULL] [i_3 - 1])))), (min((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_14 [(signed char)22])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_3] [i_3] [i_6] [i_3 - 1])))), (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_18 [(signed char)5] [i_5] [i_3] [i_0] [i_0] [6LL]))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */int) min((arr_1 [i_0]), (max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-46))))), ((short)-3518)))));
                        arr_26 [(short)14] [i_1] [i_5] [(_Bool)1] [(unsigned char)14] |= ((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_3] [i_3] [(signed char)19] [i_1])) < (((/* implicit */int) max((arr_8 [(_Bool)1] [i_1] [i_1] [i_1]), (arr_8 [i_1] [i_3 + 1] [i_5] [i_7]))))));
                    }
                    for (long long int i_8 = 1; i_8 < 24; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */int) ((var_1) << (((((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8] [15ULL] [i_8] [i_5])) ? (((/* implicit */int) arr_25 [i_3] [i_3] [(short)16] [3] [(unsigned short)14])) : (arr_20 [i_8 + 1] [18LL] [i_8] [(signed char)11] [i_8] [i_8]))) - (69)))));
                        arr_31 [i_0] [(short)18] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */short) (+(((/* implicit */int) min((arr_25 [i_5] [i_8] [i_5] [i_8 + 1] [i_5]), (arr_25 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_5]))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_18 [i_0] [9LL] [9LL] [i_3] [i_5] [i_8]), (arr_28 [i_0] [i_0] [i_3] [i_0]))))) <= (min((((/* implicit */unsigned long long int) arr_25 [i_5] [i_5] [i_5] [i_5] [i_5])), (arr_5 [i_0] [i_1] [10U])))))));
                        arr_32 [i_0] [i_0] [17ULL] [i_5] [i_8] = ((/* implicit */unsigned char) arr_8 [i_0] [i_8 - 1] [i_3 - 1] [18U]);
                    }
                    arr_33 [8] [i_0] [i_1] [i_0] [i_5] = ((/* implicit */signed char) var_4);
                }
                for (short i_9 = 4; i_9 < 23; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 3; i_10 < 24; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) (short)-2560);
                        var_25 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1] [i_3 - 1] [i_9] [23LL])) ? (((/* implicit */int) (_Bool)1)) : (569737111)))) < (min((((/* implicit */unsigned int) arr_27 [i_10 + 1] [i_9 + 2] [i_9] [i_3] [i_1] [i_1] [i_0])), (var_1))))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_19 [i_0] [i_0] [i_3 + 1] [i_10 - 1] [i_10] [i_10 - 1])), (((var_5) << (((((((/* implicit */int) var_9)) + (32023))) - (12))))))))));
                    }
                    for (short i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        arr_40 [i_0] [i_0] = ((/* implicit */short) min((min((9223372036854775807LL), (((/* implicit */long long int) arr_36 [i_0] [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_9 + 2] [i_3 + 1] [i_9 + 2] [i_11])))))));
                        arr_41 [(unsigned char)4] [i_1] [i_3] [i_0] [i_11] [i_9] = ((/* implicit */short) (~((~(((/* implicit */int) arr_37 [(short)17] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    arr_42 [i_9] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_14 [i_0]);
                }
                for (int i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) 569737127);
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1158)))))));
                        var_28 = ((/* implicit */signed char) (_Bool)1);
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_13 [i_3 - 1] [(unsigned short)20]), (arr_13 [i_3 + 1] [i_1])))) ? ((~((~(arr_35 [i_0] [i_0] [i_3] [i_12]))))) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_0]))))) ? (min((arr_34 [i_0] [(_Bool)1] [i_3] [(unsigned short)9] [6U]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [11U] [11U] [i_1] [8LL] [i_3 + 1]))))))))));
                        arr_50 [14] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) max((arr_18 [i_0] [i_1] [i_1] [i_3] [i_12] [i_13]), (((/* implicit */short) arr_25 [i_13] [i_1] [i_3] [i_1] [8]))))), (min((var_3), (((/* implicit */unsigned short) arr_11 [23U] [i_12] [i_3] [i_0])))))))));
                    }
                    for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_4))));
                        var_31 = ((/* implicit */signed char) min(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_4 [i_0] [i_0] [(unsigned short)15]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_0)))) * (min((((/* implicit */int) arr_8 [22] [i_1] [i_1] [(short)16])), (arr_51 [i_0]))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 1; i_15 < 23; i_15 += 1) /* same iter space */
                    {
                        arr_57 [i_15] [i_12] [i_0] [8] [i_0] = ((/* implicit */unsigned int) 1364239884968402826LL);
                        arr_58 [(_Bool)1] [i_0] [i_3] = ((/* implicit */long long int) arr_34 [i_0] [(unsigned short)16] [(unsigned short)16] [i_1] [i_1]);
                        arr_59 [i_0] [i_1] [4ULL] [13LL] [i_15 + 1] [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) arr_16 [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_0])), (arr_17 [i_15 - 1] [9] [i_0]))))));
                        var_32 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_18 [i_12] [21U] [i_12] [i_12] [(signed char)16] [i_15 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_30 [i_0] [i_1] [i_3])), (arr_45 [i_15 + 1] [i_12] [(unsigned short)11] [i_0])))))))));
                        arr_60 [i_0] [i_12] [15] [(short)20] [i_1] [i_1] [i_0] = min((min((arr_37 [i_0] [i_0] [i_12] [i_15 + 2] [i_15 + 2] [15U] [2U]), (arr_37 [i_15 + 1] [i_15] [i_15] [i_15 + 1] [i_15 + 1] [16LL] [16LL]))), (min((arr_37 [(_Bool)1] [i_1] [i_3] [i_15 + 2] [i_1] [12ULL] [i_15 + 1]), (arr_37 [i_15] [(short)20] [(unsigned char)20] [i_15 - 1] [(short)20] [i_15 - 1] [i_15]))));
                    }
                    for (unsigned short i_16 = 1; i_16 < 23; i_16 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (min(((~(max((((/* implicit */unsigned long long int) arr_19 [i_16] [i_12] [i_3] [i_3] [i_0] [i_0])), (arr_4 [i_0] [i_3] [i_12]))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [(short)24] [i_1] [(short)2] [i_16])), (var_1)))), (arr_43 [(signed char)21] [i_16 - 1] [24ULL] [(signed char)21] [i_16])))))));
                        var_34 ^= max((((/* implicit */int) (!(((/* implicit */_Bool) -5971469709595614001LL))))), (min((((((/* implicit */int) var_3)) >> (((1610612736) - (1610612726))))), (((/* implicit */int) (signed char)-86)))));
                        var_35 = ((/* implicit */unsigned int) (+((-(arr_20 [i_1] [14] [i_3 + 1] [i_16] [(short)1] [i_16])))));
                        arr_63 [i_0] [i_0] [i_3] [20ULL] [(unsigned short)19] = ((/* implicit */signed char) min((((/* implicit */long long int) (short)-15628)), (min((var_6), (((/* implicit */long long int) arr_14 [i_3 + 1]))))));
                    }
                    for (unsigned short i_17 = 1; i_17 < 23; i_17 += 1) /* same iter space */
                    {
                        arr_67 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_44 [i_3 + 1] [(unsigned char)23] [i_17 + 2]), (arr_44 [i_3 - 1] [23ULL] [i_17 + 1])))) + (min((var_2), (((/* implicit */int) arr_25 [i_3 + 1] [(signed char)15] [i_3] [i_17 - 1] [i_3 + 1]))))));
                        arr_68 [i_0] [12LL] [1ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)-123);
                        arr_69 [i_0] [(short)16] [(short)4] [i_0] [i_0] |= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [(signed char)22] [i_17 - 1] [i_3 + 1] [i_3] [i_3 + 1]))))), (((((/* implicit */int) arr_25 [i_17 - 1] [i_17 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])) >> (((((/* implicit */int) arr_25 [i_3 + 1] [i_17 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 1])) - (96)))))));
                    }
                    var_36 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3])) <= (min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_3 + 1] [i_3 + 1])), (-2354607119639324009LL))))))));
                }
            }
            for (long long int i_18 = 1; i_18 < 22; i_18 += 2) 
            {
                arr_72 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(var_5)));
                var_37 |= ((/* implicit */signed char) (+(max(((~(arr_5 [(short)24] [(short)24] [(unsigned char)21]))), (((/* implicit */unsigned long long int) arr_12 [i_18] [i_18] [i_18 + 2]))))));
                var_38 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((((var_2) + (2147483647))) >> (((arr_45 [i_0] [(unsigned short)12] [(unsigned short)12] [i_18 + 3]) - (2967573339779211152LL))))) != (((/* implicit */int) min((var_0), (arr_44 [i_18] [20ULL] [i_0]))))))), (min((arr_17 [i_1] [i_18 + 3] [i_18]), (arr_17 [i_0] [i_18 + 2] [i_18 + 2])))));
                /* LoopSeq 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        arr_79 [i_0] [11ULL] [i_0] [15LL] [i_20] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_52 [i_0] [i_1] [i_18] [i_19] [i_19] [i_20])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0]))))));
                        arr_80 [i_0] [i_1] [i_18] [i_19] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_4 [i_1] [(unsigned short)9] [i_1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [i_18 + 2] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18 + 2])))))));
                        var_39 = max((((((((/* implicit */int) arr_18 [i_0] [i_1] [i_18] [i_18] [i_20] [22])) + (2147483647))) << (((arr_55 [18] [18] [i_18] [i_0] [i_0]) - (2268205732U))))), ((+(min((var_8), (var_2))))));
                    }
                    for (int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        var_40 = ((/* implicit */short) (-((-(((/* implicit */int) ((((/* implicit */int) (short)-1)) > (-499701199))))))));
                        var_41 = ((/* implicit */unsigned short) arr_34 [8ULL] [i_1] [(_Bool)1] [(unsigned short)6] [i_21]);
                        arr_84 [i_21] [i_19] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22143)))))));
                    }
                    arr_85 [i_0] [i_0] [(signed char)18] [i_19] = ((((((/* implicit */int) arr_19 [i_0] [i_18] [i_0] [(short)18] [i_0] [(short)18])) + (max((((/* implicit */int) arr_62 [i_0] [i_18 + 1] [i_18 + 1] [(unsigned char)6] [i_0] [(_Bool)1] [i_0])), (arr_20 [2ULL] [6U] [i_1] [1] [1] [i_19]))))) * (((/* implicit */int) max((var_9), (max(((short)6865), (((/* implicit */short) arr_44 [(signed char)20] [1ULL] [1ULL]))))))));
                    arr_86 [2U] [i_0] [18U] [(short)19] = ((/* implicit */int) min((arr_12 [i_0] [i_1] [i_0]), ((unsigned short)0)));
                    var_42 -= ((/* implicit */unsigned int) ((min((-9223127451570896436LL), (((/* implicit */long long int) arr_47 [(short)12] [i_19] [i_19] [i_18 + 1] [(short)12] [i_18])))) >= (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)8512)) : (((/* implicit */int) arr_49 [i_19] [i_18] [i_1])))))))));
                }
                /* vectorizable */
                for (long long int i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        var_43 = ((/* implicit */signed char) -1886044820);
                        arr_91 [i_0] [i_0] [i_1] [i_1] [i_18] [11ULL] [(unsigned short)4] = ((/* implicit */unsigned short) (-(arr_70 [i_1] [i_18] [i_22])));
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) arr_44 [3U] [i_22] [(unsigned char)24]))));
                        var_45 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)2596)))) > (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_89 [(signed char)21] [i_1])))))));
                    }
                    arr_92 [i_0] [(short)20] [i_0] = ((/* implicit */unsigned short) arr_28 [i_18 + 3] [i_18 + 2] [i_18 + 2] [i_18 + 2]);
                }
            }
            var_46 = ((/* implicit */int) max((min(((short)7680), ((short)32256))), (((/* implicit */short) arr_71 [i_0] [i_0]))));
        }
    }
}
