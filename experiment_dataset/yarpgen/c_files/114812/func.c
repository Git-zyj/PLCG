/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114812
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
    var_14 &= ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)49523)) : (((/* implicit */int) var_1))));
    var_15 |= var_9;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_1 [i_0])) - (39)))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 3) /* same iter space */
            {
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 = ((arr_5 [i_2 - 1]) > (arr_5 [i_2 - 2]));
                            var_19 = ((/* implicit */_Bool) ((arr_6 [i_0]) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_0] [(unsigned char)10] [i_2 - 2] [i_2 + 1] [0LL]));
                var_21 ^= ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_2 - 3] [i_2] [i_2 - 3]);
                var_22 = ((/* implicit */unsigned char) ((arr_7 [i_2 - 1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) (short)32053)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(_Bool)1] [i_1]))) : (arr_5 [i_1])))));
            }
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */int) (_Bool)1);
                arr_19 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)38)) > (((/* implicit */int) ((_Bool) -64506254)))));
            }
        }
        var_24 = max((((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) << (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), ((unsigned char)96))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_6 + 1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) arr_21 [i_0] [i_0]))));
            var_26 = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) arr_0 [i_6] [i_6])));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 4) 
                {
                    {
                        arr_29 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_8] &= ((/* implicit */signed char) arr_14 [i_0] [i_0] [i_8] [i_8] [i_8] [i_7 + 1]);
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-125))))))));
                        var_28 = ((/* implicit */short) ((int) -862633432408094332LL));
                        var_29 = ((/* implicit */int) ((unsigned short) 17609031349641539768ULL));
                        var_30 = ((/* implicit */_Bool) (unsigned char)176);
                    }
                } 
            } 
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_4 [i_0]))));
            var_32 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_6] [i_0] [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_6 - 1] [i_6 + 1]))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
        {
            arr_32 [(unsigned char)2] [i_0] [i_9] &= ((_Bool) ((((/* implicit */_Bool) ((int) arr_25 [i_0] [i_9] [i_9] [i_9 + 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)160)) : (1304354631))))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_36 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((arr_6 [i_9 - 1]) * (min((arr_6 [i_9 + 1]), (arr_6 [i_9 - 1])))));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 3; i_11 < 11; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 2; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        var_33 -= ((/* implicit */signed char) arr_10 [i_0] [i_10] [i_11] [i_12]);
                        arr_42 [i_0] [i_9] [i_0] [i_11 - 2] [(_Bool)1] = ((/* implicit */long long int) ((unsigned long long int) arr_39 [i_10] [i_0]));
                        var_34 = ((/* implicit */short) arr_25 [i_9 + 1] [i_11 - 2] [i_9 + 1] [i_12 + 1]);
                        var_35 = ((((arr_2 [i_9 + 1]) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_9])) ? (arr_0 [i_0] [i_0]) : (-1304354632))) : (((/* implicit */int) ((arr_13 [i_9 + 1] [i_9 - 1] [i_12] [i_0] [i_12 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79)))))))) >> (((arr_23 [i_11 - 3] [(_Bool)1] [i_11 - 3]) - (369523663))));
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 2; i_13 < 11; i_13 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */signed char) arr_22 [i_9 - 1]);
                        var_37 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_10] [i_9 + 1])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_9 - 1] [i_9 - 1] [(unsigned char)5])) >> (((((/* implicit */int) arr_24 [i_9 - 1] [i_9] [i_10])) - (58494)))));
                    }
                    for (unsigned short i_14 = 2; i_14 < 11; i_14 += 2) /* same iter space */
                    {
                        arr_47 [i_0] [i_9] [i_9] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((((/* implicit */_Bool) arr_44 [12] [i_10] [i_11 - 2])) ? (((/* implicit */int) (short)32162)) : (((((/* implicit */_Bool) arr_27 [i_0] [i_9 - 1] [i_9 - 1])) ? (-1304354631) : (((/* implicit */int) arr_4 [i_11])))))) : (((/* implicit */int) (_Bool)1))));
                        arr_48 [i_0] [i_9] [i_10] [i_10] [i_9] [i_14 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_41 [11ULL] [i_0] [i_9 - 1] [i_0] [i_11 + 1] [i_14 + 2]) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_41 [i_9] [i_9] [i_9 - 1] [i_10] [i_11 + 1] [i_14 + 2]))))) >= (max((((/* implicit */unsigned long long int) arr_41 [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_11 + 1] [i_14 + 2])), (6898975538597577018ULL)))));
                        var_39 = ((/* implicit */_Bool) min((var_39), (((((/* implicit */int) ((_Bool) -1304354629))) < (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-120)) || (((/* implicit */_Bool) -64506267)))))))));
                        arr_49 [i_9] = ((((/* implicit */_Bool) ((int) (unsigned short)58940))) ? (((/* implicit */unsigned long long int) ((int) arr_0 [i_14 + 1] [i_11 - 2]))) : (((unsigned long long int) arr_13 [i_14 + 1] [(_Bool)1] [i_14 + 1] [i_14 + 1] [i_14 - 2])));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 4; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (unsigned char)64))));
                        arr_53 [i_0] [i_9] [(unsigned char)2] [(unsigned char)2] [i_15 + 1] = ((/* implicit */signed char) ((unsigned short) min((arr_44 [i_0] [i_0] [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) 10353048188932194498ULL)) || (((/* implicit */_Bool) arr_28 [i_0]))))))));
                        var_41 += ((/* implicit */int) arr_3 [i_0] [i_9] [(short)3]);
                        var_42 |= ((/* implicit */unsigned long long int) 1304354631);
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 4; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        var_43 = (unsigned short)38002;
                        arr_56 [i_0] [i_9] [i_9] [i_9] [i_10] [i_9] [i_9] = arr_45 [i_0] [i_9] [i_10] [i_10] [i_16 - 4];
                        var_44 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_16] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9 - 1] [i_9]))) : (937798909558439980ULL))));
                    }
                    for (unsigned short i_17 = 4; i_17 < 11; i_17 += 1) /* same iter space */
                    {
                        var_45 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_17] [i_0] [i_10])) ? (min((arr_43 [i_0] [i_0] [i_0] [i_11] [i_17 - 3]), (((/* implicit */unsigned long long int) (unsigned char)237)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17127))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6233194008298947229ULL)) || (((/* implicit */_Bool) (unsigned char)254))))))));
                        arr_60 [i_11] [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) ((14062323134333231604ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4033)))))));
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_10 [i_0] [i_0] [i_10] [i_0]))));
                    }
                }
                for (unsigned short i_18 = 3; i_18 < 11; i_18 += 1) /* same iter space */
                {
                    arr_64 [i_9] [i_9] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_9] [i_0]))) >= (arr_11 [i_0] [i_0] [i_0] [i_0] [i_9] [i_0])))), (arr_3 [i_0] [i_9] [i_10])))), (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12758)) <= (((/* implicit */int) arr_22 [i_0]))))), (arr_45 [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9])))));
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-109)) ? (((arr_23 [(unsigned short)5] [(unsigned short)5] [i_18]) >> (((((/* implicit */int) arr_8 [i_10] [i_9 - 1])) - (60839))))) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) arr_28 [i_9 - 1])) : (1304354625)));
                    var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((arr_22 [i_18]), (((/* implicit */unsigned short) arr_52 [i_0] [i_0] [i_0] [i_0]))))))) / (((((/* implicit */_Bool) ((long long int) 7145144004760377761LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)26))) : (((4590917211656552555LL) * (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_9 - 1] [i_0] [i_18 + 1] [9] [11ULL]))))))))))));
                    var_49 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_10])) > (1946395691)))), (min((arr_45 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)-112))))))) * (((((unsigned long long int) arr_40 [i_10] [i_10] [i_10] [i_9] [i_10] [i_18 + 1])) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_9])))))));
                }
                /* LoopSeq 3 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_67 [6] [i_9 - 1] [i_9] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_0])) % (((/* implicit */int) (_Bool)1))))) ? ((((((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_19] [i_19] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_33 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)156))))) : (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((arr_40 [i_19] [i_0] [i_9] [i_9] [(unsigned short)12] [i_0]) ? (((/* implicit */int) arr_40 [i_0] [i_9 + 1] [(_Bool)0] [i_9] [i_10] [i_10])) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_9 - 1] [i_9] [(short)4] [i_19])))))));
                    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_9 + 1] [i_0])) ? (((/* implicit */int) max(((signed char)-77), (((/* implicit */signed char) arr_15 [i_0] [i_0] [(signed char)9] [i_19] [(signed char)9] [i_10]))))) : (((((/* implicit */_Bool) arr_39 [i_0] [i_0])) ? (((/* implicit */int) ((signed char) 16011162578363106796ULL))) : (min((-64506233), (((/* implicit */int) (unsigned char)224))))))));
                }
                for (unsigned char i_20 = 0; i_20 < 13; i_20 += 2) 
                {
                    arr_70 [i_10] [i_9] [i_0] = ((/* implicit */_Bool) arr_50 [i_0] [i_9 - 1] [i_9 - 1] [i_0] [i_0] [i_9 - 1] [i_9 - 1]);
                    /* LoopSeq 1 */
                    for (short i_21 = 1; i_21 < 9; i_21 += 3) 
                    {
                        arr_73 [i_0] [i_9 - 1] [i_9] [i_20] [i_21] [i_21] = ((/* implicit */unsigned short) (_Bool)1);
                        var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) arr_38 [i_9 - 1] [i_21 - 1] [i_21 + 3]))));
                        arr_74 [i_9] [i_21 + 2] [i_20] [i_20] [i_10] [i_9 + 1] [i_9] = ((max((((/* implicit */unsigned long long int) ((_Bool) arr_10 [i_21] [i_10] [i_9] [i_0]))), (min((((/* implicit */unsigned long long int) arr_71 [i_9] [i_9 + 1] [i_9])), (5704934294646793800ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (((((/* implicit */_Bool) arr_30 [i_0] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (9223372036854775807LL))) : (((/* implicit */long long int) arr_23 [(unsigned char)10] [i_10] [i_21 + 1]))))));
                    }
                }
                for (unsigned char i_22 = 1; i_22 < 10; i_22 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_23 = 2; i_23 < 10; i_23 += 4) 
                    {
                        arr_79 [(unsigned short)6] [i_9] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) ((unsigned char) arr_51 [i_0] [i_23 + 3] [i_22 + 1] [i_22 + 1] [i_23 + 2]))) - (217)))));
                        arr_80 [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((signed char) arr_1 [i_9 + 1]))) ? (((arr_61 [i_10] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_9] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_9] [i_9] [i_10] [i_0] [i_23 - 1]))))), (((/* implicit */unsigned long long int) ((_Bool) 3778994236771377208ULL)))));
                    }
                    arr_81 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */unsigned long long int) arr_46 [i_22 + 1] [i_9] [i_22 + 1] [i_22] [i_22 + 1]);
                    var_52 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1674801970)) ? (-1310296835) : (((/* implicit */int) arr_35 [i_0] [i_9] [i_9] [(unsigned short)4]))))) != (((arr_10 [i_22] [i_0] [(signed char)12] [i_22 + 3]) ? (14667749836938174410ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9])))))))) >= (((/* implicit */int) arr_20 [i_0] [i_9]))));
                }
                arr_82 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) 4590917211656552553LL);
            }
            /* LoopNest 3 */
            for (signed char i_24 = 0; i_24 < 13; i_24 += 3) 
            {
                for (unsigned char i_25 = 0; i_25 < 13; i_25 += 4) 
                {
                    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                    {
                        {
                            var_53 = ((/* implicit */_Bool) 2435581495346444827ULL);
                            arr_91 [i_9] [i_25] [i_24] [i_9] [i_9] = ((/* implicit */signed char) arr_84 [i_9] [i_9 - 1] [i_24]);
                        }
                    } 
                } 
            } 
            arr_92 [i_0] [i_9] = ((/* implicit */unsigned char) 2435581495346444838ULL);
            var_54 = ((/* implicit */_Bool) (unsigned char)189);
        }
    }
    var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)18444))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_27 = 3; i_27 < 8; i_27 += 4) 
    {
        var_56 ^= ((/* implicit */unsigned char) 30213414604845957ULL);
        arr_95 [i_27 + 2] [i_27 + 2] = ((/* implicit */unsigned char) 6552713696457894530LL);
    }
}
