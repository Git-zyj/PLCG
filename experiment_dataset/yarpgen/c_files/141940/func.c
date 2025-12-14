/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141940
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
    var_14 &= ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) var_10))));
        var_16 *= ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0] [10ULL]));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
            arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((_Bool) var_11)))));
            var_18 = ((/* implicit */int) 0ULL);
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (((/* implicit */int) var_13))))))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1)) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    arr_18 [i_0] = ((/* implicit */int) arr_11 [i_0]);
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    var_22 -= ((/* implicit */short) arr_6 [i_0] [i_2] [i_3]);
                }
                for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    arr_21 [4LL] [(unsigned char)7] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) -7)) ? (((/* implicit */int) (_Bool)1)) : (-1)));
                    arr_22 [i_0] [i_0] = ((/* implicit */signed char) var_1);
                }
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_0])))))));
                var_24 = ((/* implicit */signed char) min((var_24), (arr_13 [i_0] [i_3] [i_3] [i_2])));
                arr_23 [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned long long int) arr_15 [i_0] [i_3] [i_3]);
            }
            for (int i_6 = 2; i_6 < 18; i_6 += 4) 
            {
                var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_6 + 1] [i_6] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_15 [i_6 + 1] [i_2] [i_6]))));
                var_26 = ((/* implicit */signed char) min((var_26), (arr_13 [i_0] [i_6 + 2] [i_6] [i_0])));
            }
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 2; i_9 < 19; i_9 += 4) 
                    {
                        arr_37 [i_0] [i_7] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) -1)) ? (-3) : (1060582523))));
                        var_27 = ((/* implicit */_Bool) ((unsigned short) var_13));
                        var_28 *= arr_5 [i_7] [i_7];
                        var_29 *= ((((/* implicit */_Bool) (signed char)127)) ? (4264073054U) : (((/* implicit */unsigned int) -5)));
                    }
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_6 [i_0] [i_0] [(signed char)9]))));
                        var_31 = ((/* implicit */signed char) var_9);
                    }
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_5 [i_7] [(unsigned char)12]))));
                        var_33 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (-2387058650643291312LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11] [i_11] [i_11] [1LL] [i_11]))))));
                        arr_42 [i_0] [i_2] [i_2] [i_2] [(signed char)17] [i_2] [0LL] = ((/* implicit */unsigned long long int) (short)4838);
                    }
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        arr_45 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1)) ? (arr_38 [i_0] [i_2] [i_2] [i_7] [(short)8] [i_8] [(signed char)19]) : (((/* implicit */unsigned long long int) 1))));
                        arr_46 [i_0] [i_2] [i_0] [i_8] [i_2] = ((/* implicit */unsigned short) arr_31 [i_0] [i_0] [i_7] [i_2] [i_8]);
                    }
                    arr_47 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)107);
                }
                var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_41 [i_2] [i_2] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)228)) ? (-1833152068) : (((/* implicit */int) (short)32740)))))));
                var_35 = ((/* implicit */signed char) ((unsigned short) var_7));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 3; i_14 < 20; i_14 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    var_36 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [(unsigned short)8] [i_14 - 3] [i_14] [(unsigned short)8])) ? (((/* implicit */int) arr_16 [(signed char)8] [i_14 - 1] [i_14] [i_14 - 3])) : (((/* implicit */int) arr_16 [(short)6] [i_14 - 2] [(short)18] [i_14]))));
                    var_37 = ((/* implicit */unsigned char) var_4);
                    var_38 = ((/* implicit */unsigned char) (((_Bool)1) ? (arr_12 [i_0] [i_15 + 1]) : (-18)));
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) arr_50 [i_0] [i_13] [i_14] [i_15]))));
                }
                var_40 = ((/* implicit */_Bool) ((short) arr_49 [i_0]));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_54 [i_0] [(_Bool)1] [i_0] [i_16])))) ? (((/* implicit */int) arr_5 [i_16] [i_16])) : (((int) 33))));
                var_42 ^= ((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0]);
                var_43 = ((/* implicit */unsigned long long int) ((arr_43 [i_13] [i_0] [(unsigned char)2] [i_13] [i_13] [i_13]) ? (((/* implicit */int) arr_43 [1LL] [i_0] [i_16] [(signed char)2] [i_16] [i_16])) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_13] [i_13] [i_16]))));
                arr_58 [i_0] [i_13] [i_13] [i_13] = ((/* implicit */signed char) arr_36 [i_0]);
                var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_0] [(signed char)6] [i_16] [i_16])) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_13] [i_16])) ? (((/* implicit */long long int) -21)) : (arr_52 [i_0] [i_13] [i_16] [8LL]))))));
            }
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((short) arr_12 [i_17] [i_13])))));
                var_46 |= ((/* implicit */int) var_12);
            }
            var_47 *= ((signed char) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */unsigned int) 1985855063)) : (2696942720U)));
            var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_13])) : (((/* implicit */int) arr_30 [i_13] [i_13] [i_13] [20LL]))));
        }
        for (unsigned short i_18 = 0; i_18 < 21; i_18 += 1) 
        {
            var_49 = ((/* implicit */unsigned long long int) 1671753930);
            var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_51 [i_0] [3U] [i_18] [i_18])))))));
            var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [(unsigned char)6] [(unsigned short)2] [i_18] [i_18]))) : (arr_39 [i_0] [i_0] [i_0] [i_18] [i_18] [i_18] [i_0]))))));
        }
    }
    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_20 = 0; i_20 < 11; i_20 += 4) 
        {
            arr_68 [i_20] [i_20] [i_19] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11)) ? (((/* implicit */int) (_Bool)1)) : (-1671753928)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)109))));
            var_52 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_20] [i_19]))) : (arr_20 [20LL] [i_19] [i_19] [i_19] [i_20] [i_20])));
            var_53 &= ((/* implicit */long long int) ((unsigned long long int) (signed char)-127));
            /* LoopSeq 3 */
            for (short i_21 = 0; i_21 < 11; i_21 += 4) 
            {
                var_54 = ((/* implicit */unsigned short) arr_55 [i_19] [i_20] [i_20] [i_20]);
                var_55 = arr_14 [i_20] [i_20] [i_21] [i_20];
                /* LoopSeq 2 */
                for (unsigned short i_22 = 0; i_22 < 11; i_22 += 2) /* same iter space */
                {
                    arr_74 [(unsigned short)3] [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) 0);
                    var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_21] [i_20] [i_21] [i_21] [i_21] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_1 [i_19])) ? (var_6) : (arr_39 [i_21] [i_22] [i_21] [i_21] [i_20] [i_19] [i_19])))));
                }
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 2) /* same iter space */
                {
                    var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 25))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_19] [i_19]))) : (arr_65 [i_19] [i_20] [i_21])))));
                    arr_78 [(signed char)2] [i_19] [(signed char)2] [(signed char)6] [(short)10] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_2 [(unsigned char)10] [i_20])) ? (14649859442552800767ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_19] [i_23]))))) : (((/* implicit */unsigned long long int) ((arr_35 [i_21] [i_21] [i_21] [i_20] [i_21] [i_21]) ? (9) : (((/* implicit */int) arr_56 [i_20] [i_20] [i_21])))))));
                    /* LoopSeq 2 */
                    for (signed char i_24 = 0; i_24 < 11; i_24 += 1) 
                    {
                        var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) arr_75 [(_Bool)0] [i_21] [i_21] [i_21]))));
                        var_59 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 1495186268U)) ? (arr_55 [i_23] [i_23] [i_23] [i_23]) : (((/* implicit */unsigned long long int) 1495186270U))));
                        var_60 = ((/* implicit */unsigned char) arr_32 [i_24] [18LL] [i_21] [i_19]);
                    }
                    for (unsigned short i_25 = 0; i_25 < 11; i_25 += 2) 
                    {
                        var_61 = ((/* implicit */unsigned short) max((var_61), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_20] [i_20])))))));
                        var_62 = ((/* implicit */signed char) arr_27 [i_19] [i_21] [i_20]);
                        var_63 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_19] [i_19])) ? (arr_17 [i_20] [i_25]) : (((/* implicit */long long int) 15))));
                    }
                }
                var_64 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_19] [i_20] [i_21])) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) arr_7 [i_20] [i_21]))));
            }
            for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 3) 
            {
                arr_87 [i_19] [i_20] [i_26] = ((/* implicit */unsigned int) arr_61 [i_20] [i_19]);
                arr_88 [i_19] = ((/* implicit */unsigned long long int) -2);
                var_65 = ((/* implicit */signed char) ((unsigned char) (unsigned char)107));
                var_66 = ((/* implicit */unsigned long long int) min((var_66), (((/* implicit */unsigned long long int) (-(var_1))))));
            }
            for (unsigned int i_27 = 0; i_27 < 11; i_27 += 4) 
            {
                var_67 = ((/* implicit */unsigned char) ((arr_30 [i_19] [i_19] [i_19] [i_27]) ? (((/* implicit */int) arr_30 [i_27] [i_27] [i_19] [i_20])) : (((/* implicit */int) arr_30 [i_19] [i_19] [i_19] [i_19]))));
                /* LoopSeq 1 */
                for (short i_28 = 1; i_28 < 10; i_28 += 2) 
                {
                    var_68 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2799781027U)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (unsigned char)157))));
                    var_69 = ((/* implicit */unsigned char) arr_32 [i_19] [i_19] [i_27] [(unsigned short)15]);
                    /* LoopSeq 1 */
                    for (short i_29 = 0; i_29 < 11; i_29 += 2) 
                    {
                        var_70 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_14 [i_19] [5U] [5U] [i_29]))))));
                        var_71 = 4011353945U;
                        var_72 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [7LL] [i_20] [i_28 + 1] [i_28])) ? (arr_55 [i_29] [i_29] [i_28 + 1] [(short)15]) : (arr_55 [i_19] [i_19] [i_28 + 1] [i_28])));
                    }
                    var_73 ^= ((/* implicit */short) 1495186273U);
                    arr_95 [i_19] [i_20] [(unsigned char)4] [i_28] = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_19] [i_19]));
                }
            }
        }
        var_74 = ((/* implicit */unsigned short) min((var_74), (((/* implicit */unsigned short) max((min((((/* implicit */long long int) 1688447737U)), (((long long int) var_7)))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_19] [i_19])) ? (((/* implicit */int) arr_80 [i_19] [6] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_24 [i_19]))))), (((long long int) var_2)))))))));
        var_75 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_19] [i_19] [i_19] [i_19])) ? (arr_54 [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */int) (short)-18759))))), (arr_39 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
    }
    var_76 = ((/* implicit */int) var_11);
}
