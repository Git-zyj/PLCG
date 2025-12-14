/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148480
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
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) min((var_8), (-7704300846832670601LL)))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */short) (unsigned char)2)))))))));
    var_13 = 16668044382011063975ULL;
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2831917194287006931LL)) ? (-1816945657751561751LL) : (4883720399607756413LL)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 3; i_3 < 21; i_3 += 2) 
                {
                    arr_9 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-7704300846832670602LL) + (9223372036854775807LL))) >> (((3320143759071371821LL) - (3320143759071371774LL)))))) ? (((/* implicit */unsigned long long int) -4883720399607756417LL)) : (max((((/* implicit */unsigned long long int) max(((signed char)36), (((/* implicit */signed char) (_Bool)1))))), (min((((/* implicit */unsigned long long int) (short)-32756)), (1778699691698487622ULL)))))));
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */int) arr_5 [i_1 - 2] [i_2 + 1] [i_3 + 3] [i_3 + 3])) + (((/* implicit */int) arr_5 [i_1 - 3] [i_2 + 1] [i_3] [i_3 + 2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_1 - 1]))) : (((var_9) + (var_9)))));
                        var_17 = ((2LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))));
                        var_18 = ((/* implicit */_Bool) (signed char)-5);
                        var_19 -= ((/* implicit */long long int) ((short) 4883720399607756413LL));
                    }
                }
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 23; i_5 += 3) 
                {
                    var_20 *= ((((/* implicit */int) (_Bool)1)) >= (arr_8 [i_5] [(_Bool)1] [(_Bool)1] [i_0]));
                    arr_16 [i_0] [i_1 + 1] [i_5] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32756)))))) < (((long long int) (_Bool)1)));
                }
                arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19564))) : (10151355755788841900ULL)))))), (((_Bool) (_Bool)1))));
            }
            for (long long int i_6 = 4; i_6 < 22; i_6 += 4) 
            {
                var_21 -= ((/* implicit */short) (unsigned char)255);
                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_1 + 1] [i_0 + 1] [i_6 + 1] [i_6]))))));
                var_23 *= ((/* implicit */_Bool) (~(((unsigned long long int) max((1107239973), (((/* implicit */int) var_2)))))));
                arr_20 [i_0 + 1] [i_1 - 2] [i_0 + 1] = ((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned short)59398), (((/* implicit */unsigned short) (short)(-32767 - 1)))))), (max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_10)))), ((+(((/* implicit */int) arr_7 [i_6] [i_1] [(unsigned char)2] [i_6]))))))));
            }
            for (unsigned char i_7 = 2; i_7 < 21; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_24 |= ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) arr_22 [i_1 + 2] [i_7 + 1])), (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    var_25 = ((/* implicit */unsigned long long int) max((((arr_6 [i_7]) ? (7092155293236226285LL) : (-1816945657751561751LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_7])) / (((/* implicit */int) arr_6 [i_7])))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_26 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)39)))), ((+((-(((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_7] [(unsigned char)0] [i_9]))))))));
                    arr_29 [i_1 - 1] [3ULL] |= ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) -99552195591466249LL)), (min((((/* implicit */unsigned long long int) (unsigned char)143)), (arr_26 [i_0 + 1])))))));
                }
                for (unsigned char i_10 = 1; i_10 < 23; i_10 += 3) 
                {
                    arr_34 [i_10] [i_7] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (short)20322))))), (var_6)))) ? ((-(((/* implicit */int) arr_10 [6LL] [i_1 + 1] [i_7 - 1] [i_10 + 1] [i_10 - 1] [i_7])))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)19560)) * (((/* implicit */int) (unsigned char)85))))) ? (max((((/* implicit */int) (signed char)118)), (arr_11 [i_0] [12ULL] [i_7]))) : (((/* implicit */int) (signed char)0))))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) (+(max((((var_7) % (((/* implicit */int) var_10)))), (((/* implicit */int) (short)-32650))))));
                        var_28 = ((unsigned char) (~(((/* implicit */int) arr_1 [i_7 + 2] [i_1 + 2]))));
                        var_29 = (-(max((var_8), (-60583550394685054LL))));
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_7] [i_7] [i_10] [(unsigned char)22]))) / ((+(((((/* implicit */_Bool) 5411415101059400993ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10] [i_10] [(unsigned char)16] [i_7] [5ULL] [i_0]))) : (arr_26 [i_10])))))));
                    var_31 -= ((/* implicit */short) min((((/* implicit */int) max((arr_2 [i_0 + 1] [i_1 + 2]), (((/* implicit */unsigned char) var_0))))), (max((((((/* implicit */int) (_Bool)1)) / (var_7))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_10 - 1] [i_0]))))))));
                    var_32 *= (_Bool)1;
                }
                var_33 = ((/* implicit */_Bool) (~(min((var_9), (((/* implicit */unsigned long long int) arr_2 [i_7 + 3] [i_0 - 1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
                    var_35 = ((/* implicit */long long int) (-(arr_8 [i_0] [i_7] [i_0] [i_12])));
                }
                for (short i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((signed char)36), (((/* implicit */signed char) arr_31 [i_13] [i_13] [i_7] [i_1 - 3] [i_1 - 2] [i_0 + 1]))))) ? (((/* implicit */int) ((short) arr_40 [i_13] [i_0] [i_13] [i_1] [i_0]))) : (((2147483647) / (var_7)))));
                    var_37 &= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (98778659)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3078))) * (13961335590884465982ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (max((((/* implicit */long long int) arr_37 [i_0] [i_0 - 1] [i_1] [i_7 + 2] [i_13])), (arr_28 [i_7 + 2] [i_13] [i_7] [i_7 + 2]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)230)) * (((/* implicit */int) (_Bool)0))))))))));
                    arr_44 [i_7 + 1] [i_7] [i_7] [i_7] [i_13] = ((/* implicit */signed char) min((((arr_40 [i_13] [i_0] [i_13] [i_0 + 1] [i_0]) / (arr_40 [i_13] [i_0] [i_13] [i_0 - 1] [i_0]))), (((/* implicit */unsigned long long int) (short)17196))));
                    var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_7 [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_13])))));
                    var_39 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) max(((short)-32763), (((/* implicit */short) (signed char)-1))))))));
                }
            }
        }
        for (signed char i_14 = 2; i_14 < 22; i_14 += 4) 
        {
            var_40 &= ((/* implicit */unsigned char) (-(-2339233990461698764LL)));
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-7151327505203643655LL)))) ? (((/* implicit */int) arr_39 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_14 - 2])) : (((/* implicit */int) (unsigned char)105))));
                var_42 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((272785609) % (((/* implicit */int) var_5)))))));
                arr_50 [(_Bool)1] [i_14] [(unsigned short)13] [i_15] = ((/* implicit */unsigned char) (-(1713460286954554799ULL)));
            }
            for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                var_43 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14])) * (((/* implicit */int) var_5))))), (max((((/* implicit */unsigned long long int) arr_7 [i_14 + 2] [i_14] [i_14 + 2] [i_16])), (var_4)))));
                arr_54 [i_16] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)5))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_14 - 1] [i_16] [i_16] [i_16] [i_16]))) / (arr_46 [i_0 + 1]))) : (min((arr_46 [i_0 - 1]), (((/* implicit */long long int) arr_12 [i_0 - 1] [i_14 + 2] [i_16] [i_16] [(unsigned char)20] [i_0 - 1]))))));
                var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) var_2))));
            }
            for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 4) 
            {
                arr_59 [i_0] [i_14 - 2] [i_14 + 2] [4ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_39 [3LL] [i_14] [i_17] [i_14])), (18LL)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_17] [6ULL] [i_17] [i_17])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0))))), (max((var_6), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (17722152648510714412ULL)));
                var_45 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((3187240591366852380LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)151))))) : ((+(520970687444086102ULL))))), (13961335590884465981ULL)));
                var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((long long int) 4622937764056604969LL)))));
                /* LoopSeq 1 */
                for (unsigned char i_18 = 4; i_18 < 23; i_18 += 4) 
                {
                    var_47 = ((/* implicit */signed char) max((((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))), (((((/* implicit */int) (short)-27520)) * (((/* implicit */int) (unsigned char)0))))))));
                    var_48 |= ((/* implicit */unsigned char) (-(((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned char)237))))));
                    arr_63 [23ULL] [i_14] [6LL] [i_18] [i_18] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_36 [i_18] [i_17] [i_17] [i_17 - 2] [i_0]))))));
                }
            }
            for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                var_49 |= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_14] [(unsigned short)8] [i_14 + 1])))))));
                arr_68 [i_0] [i_14] [i_14] [i_19] = ((/* implicit */long long int) ((short) min(((!(((/* implicit */_Bool) 3892825743231750374LL)))), (arr_56 [i_0] [i_0] [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 24; i_20 += 3) 
                {
                    var_50 = ((/* implicit */unsigned long long int) (-(arr_55 [i_0 + 1])));
                    var_51 = ((((/* implicit */_Bool) arr_12 [i_14 - 2] [i_0 + 1] [i_20] [i_20] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_48 [i_19] [i_20] [i_0 - 1])))) : (var_6));
                }
            }
            arr_71 [i_0] = max((max((((/* implicit */short) max(((unsigned char)231), ((unsigned char)250)))), (arr_61 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_14]))), (var_2));
            var_52 = ((_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_14] [i_14] [i_14 - 1])) ? (-7671788247724582811LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
        }
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            arr_74 [(signed char)2] = ((/* implicit */short) (unsigned char)55);
            var_53 -= ((/* implicit */signed char) ((unsigned char) (unsigned char)255));
            arr_75 [i_0] [i_21] = ((/* implicit */short) (unsigned char)163);
            var_54 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12456710179363680686ULL));
            /* LoopSeq 1 */
            for (long long int i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                var_55 &= ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned char)172))))));
                var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_67 [i_0] [i_0] [i_0] [i_22])))))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_23 = 1; i_23 < 20; i_23 += 1) 
                {
                    var_57 = ((/* implicit */unsigned char) max((var_57), (((unsigned char) (unsigned char)255))));
                    arr_80 [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned char)0))) ? (((unsigned long long int) arr_51 [(unsigned char)7] [i_21])) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))) : (2447165233549433445ULL)))));
                }
                for (unsigned long long int i_24 = 1; i_24 < 22; i_24 += 4) 
                {
                    var_58 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */int) arr_25 [i_0] [i_22] [i_0] [i_21] [i_0] [i_0])) % (1984698883))) : (((/* implicit */int) (short)-28785))));
                    arr_84 [i_24] [i_24] [i_22] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_22] [i_21] [i_0]))) : (9120987184274492407ULL)));
                    var_59 = ((/* implicit */signed char) ((unsigned long long int) arr_31 [i_24 + 1] [i_22] [i_21] [i_0 + 1] [i_0] [i_0 + 1]));
                }
                for (short i_25 = 0; i_25 < 24; i_25 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 2) 
                    {
                        arr_91 [i_0] [i_21] [i_21] [i_22] [i_25] [(unsigned char)13] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_5 [i_26] [i_22] [i_21] [i_0]))))) ? (((/* implicit */unsigned long long int) -2147483636)) : (((((/* implicit */_Bool) (unsigned char)212)) ? (18446744073709551591ULL) : (var_9)))));
                        arr_92 [i_22] [i_25] |= (!(((/* implicit */_Bool) (short)-27520)));
                    }
                    for (unsigned char i_27 = 0; i_27 < 24; i_27 += 3) 
                    {
                        var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_26 [i_0])));
                        arr_95 [i_0] [i_21] [i_22] [i_25] [(short)13] [i_0] [i_27] = ((/* implicit */unsigned char) ((signed char) arr_39 [i_25] [i_21] [(unsigned char)1] [i_0 - 1]));
                    }
                    var_61 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_38 [i_0] [i_0 + 1] [i_21] [i_25] [i_25])) : (((/* implicit */int) arr_38 [i_0] [i_0 + 1] [i_22] [i_25] [i_25]))));
                }
                for (unsigned long long int i_28 = 0; i_28 < 24; i_28 += 4) 
                {
                    arr_98 [i_28] [i_22] [i_0] [i_0] = ((-3759139931759761795LL) < (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]))));
                    /* LoopSeq 3 */
                    for (short i_29 = 0; i_29 < 24; i_29 += 4) 
                    {
                        arr_101 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((arr_40 [i_0 + 1] [i_0 + 1] [i_22] [i_0] [i_0]) * (18446744073709551615ULL)));
                        arr_102 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_0] [i_21] [i_0 + 1] [(unsigned char)23] [i_29] [i_28])) & (((/* implicit */int) arr_25 [i_29] [i_29] [i_22] [i_0] [i_0] [i_0]))));
                        var_62 ^= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) : (9223372036854775807LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) arr_18 [i_29] [i_0 + 1] [i_0 + 1])))))));
                        var_63 = ((/* implicit */short) var_4);
                    }
                    for (unsigned long long int i_30 = 0; i_30 < 24; i_30 += 2) 
                    {
                        var_64 = ((/* implicit */_Bool) min((var_64), (((/* implicit */_Bool) ((unsigned char) arr_73 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
                        var_65 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */int) (_Bool)1)) * (var_7))) : ((-(((/* implicit */int) (unsigned char)142))))));
                    }
                    for (long long int i_31 = 0; i_31 < 24; i_31 += 3) 
                    {
                        var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_69 [i_22] [i_22] [i_22] [i_28]))) + ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [i_28] [i_28] [i_22] [i_28])) < (var_6)))) : (((/* implicit */int) (_Bool)1))));
                        var_67 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)108))));
                    }
                }
            }
        }
        var_68 = ((/* implicit */signed char) max((var_68), (((/* implicit */signed char) max((max((arr_81 [i_0 - 1] [(unsigned char)2] [i_0]), (arr_81 [i_0 + 1] [18ULL] [(unsigned char)6]))), (max((arr_81 [i_0 + 1] [(short)10] [i_0]), (arr_81 [i_0 + 1] [(signed char)0] [(_Bool)1]))))))));
    }
}
