/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146580
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) var_1);
        arr_3 [i_0] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))), (((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) % (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))));
        var_14 = ((int) (((!(((/* implicit */_Bool) 888353524112163140ULL)))) ? (((var_11) / (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (signed char)8))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            var_15 *= (-(arr_7 [i_1 + 1] [i_1 + 1] [i_2 - 2]));
            var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_4)))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            arr_11 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)56083))))) ? (arr_9 [i_1 + 1]) : (((/* implicit */unsigned long long int) 1335657613U))));
            arr_12 [i_3] = ((/* implicit */int) ((arr_9 [i_3]) != (arr_9 [i_1 + 1])));
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) -18))));
        }
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_5 [i_1 + 1]))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) arr_24 [2] [i_5] [i_4 + 1] [0ULL] [i_6] [i_5]))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) 291668429))))) ? (((((/* implicit */_Bool) arr_14 [i_4] [i_7])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_5] [6ULL]))))) : (((/* implicit */long long int) ((-291668429) + (((/* implicit */int) arr_10 [i_4] [i_4] [i_4])))))))));
                        var_20 *= ((/* implicit */int) 4114114988959106626LL);
                    }
                } 
            } 
        } 
        arr_25 [i_4 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]))))) ? (((((/* implicit */int) arr_21 [(unsigned char)8] [i_4 + 1] [i_4 + 1] [i_4 + 1])) * (((/* implicit */int) arr_21 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) : ((+(((/* implicit */int) arr_2 [i_4 + 1]))))));
        var_21 = ((/* implicit */int) 15ULL);
        arr_26 [i_4] = ((/* implicit */unsigned char) (~(((arr_6 [(_Bool)1] [i_4 + 1] [i_4 + 1]) ^ (var_0)))));
    }
    var_22 = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -291668420)) ^ (var_12)))) || (((/* implicit */_Bool) var_0))))), (var_5)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((-291668429) ^ (((/* implicit */int) (unsigned short)48364))));
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            arr_32 [i_9] = ((/* implicit */int) 2020041939U);
            arr_33 [i_8] [i_8] = ((/* implicit */unsigned char) (~(arr_29 [i_8] [i_9] [i_9])));
        }
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            var_24 = ((_Bool) ((unsigned short) arr_34 [i_8] [i_8] [i_10]));
            arr_36 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((-4686631615110585217LL) ^ (((/* implicit */long long int) arr_29 [i_8] [i_8] [20LL]))));
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    var_25 |= ((/* implicit */_Bool) var_8);
                    /* LoopSeq 2 */
                    for (long long int i_13 = 2; i_13 < 22; i_13 += 1) 
                    {
                        arr_46 [i_11] = (((~(((/* implicit */int) (short)-10636)))) << (((((((-4686631615110585217LL) + (9223372036854775807LL))) << (((/* implicit */int) arr_34 [i_8] [i_12] [(short)5])))) - (9073480843488381179LL))));
                        var_26 -= ((/* implicit */signed char) arr_44 [i_13] [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_13] [i_13 + 1]);
                    }
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_27 *= ((/* implicit */short) 3185991480U);
                        var_28 = ((/* implicit */short) (-(var_1)));
                    }
                }
                for (short i_15 = 3; i_15 < 21; i_15 += 4) 
                {
                    arr_54 [0U] [i_15] [i_11] [i_15] = ((/* implicit */unsigned short) 291668429);
                    var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_30 [i_15 + 2]))));
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) arr_50 [i_10] [i_15 - 3] [i_11] [i_10] [i_8])) != (((/* implicit */int) arr_50 [i_8] [i_10] [i_8] [i_10] [i_16])))))));
                        var_31 = ((/* implicit */unsigned int) ((unsigned long long int) arr_50 [i_15 + 1] [i_16] [i_16] [i_16] [i_16]));
                    }
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_15 - 1] [i_15 - 3] [i_15 + 2] [i_15 - 1] [i_15 - 3] [i_15 - 1])) || (((/* implicit */_Bool) arr_28 [(short)4]))));
                        arr_61 [i_15] = ((/* implicit */unsigned int) ((_Bool) -8617184976496717650LL));
                    }
                    var_33 = ((/* implicit */_Bool) ((int) (unsigned short)9525));
                }
                for (unsigned char i_18 = 3; i_18 < 22; i_18 += 2) 
                {
                    var_34 = ((/* implicit */int) arr_43 [i_8] [i_8] [i_11] [i_11] [i_11]);
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_18 - 1] [i_18 - 3] [i_18 + 1] [i_18 - 1])) ? (((/* implicit */int) (short)22489)) : (((/* implicit */int) arr_37 [i_18 - 3] [i_18 + 1] [i_18 + 1] [i_18 - 3]))));
                    var_36 = arr_60 [i_8] [i_18 + 1] [i_11] [i_18] [i_8] [i_18];
                }
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) arr_69 [i_8] [(short)11] [(short)11] [(short)11] [i_20]))));
                            arr_70 [i_8] [i_10] [i_11] [i_10] [i_19] [i_19] [i_20] = ((/* implicit */signed char) ((1156550847) << (((((((/* implicit */int) (short)-32067)) + (32075))) - (8)))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) 4951311544276673328ULL))) ^ (((/* implicit */int) arr_67 [i_8] [i_10] [i_11] [i_19] [i_20]))));
                        }
                    } 
                } 
            }
            for (long long int i_21 = 0; i_21 < 23; i_21 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned short i_23 = 0; i_23 < 23; i_23 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) (short)10208);
                            arr_81 [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (signed char)16))) ? (((/* implicit */int) arr_80 [i_8] [i_8] [i_10] [i_21] [i_22] [i_23])) : (((/* implicit */int) arr_38 [i_22] [i_22] [i_22]))));
                            arr_82 [i_8] [i_22] [i_21] [i_22] [i_22] [i_10] = ((/* implicit */short) ((arr_69 [i_8] [i_8] [i_8] [i_22] [i_23]) + (arr_69 [i_22] [i_22] [i_21] [i_10] [11ULL])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_24 = 0; i_24 < 23; i_24 += 3) 
                {
                    for (unsigned short i_25 = 1; i_25 < 21; i_25 += 4) 
                    {
                        {
                            arr_89 [22] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) arr_75 [i_8] [i_8] [i_8] [i_8]);
                            var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -7491985116775723579LL)))))));
                            arr_90 [i_8] [i_8] = ((/* implicit */unsigned int) ((signed char) arr_43 [i_25] [i_24] [i_21] [i_10] [(unsigned short)17]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 1) 
                {
                    var_41 = ((/* implicit */long long int) var_5);
                    arr_95 [i_8] [i_10] [i_21] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_85 [i_8] [i_21] [i_21])) ^ (((((/* implicit */int) arr_38 [i_26] [i_10] [i_8])) << (((-291668429) + (291668449)))))));
                }
                for (int i_27 = 0; i_27 < 23; i_27 += 2) 
                {
                    arr_98 [22LL] [22LL] [i_21] [i_27] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) arr_53 [i_21] [i_21] [i_10] [i_21]))));
                    arr_99 [i_8] |= ((/* implicit */int) arr_77 [i_8] [i_10] [i_21]);
                }
            }
        }
        for (short i_28 = 0; i_28 < 23; i_28 += 4) 
        {
            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (arr_31 [i_8]) : (((/* implicit */long long int) var_8))));
            /* LoopSeq 1 */
            for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_30 = 0; i_30 < 23; i_30 += 2) 
                {
                    var_43 = ((/* implicit */signed char) ((((/* implicit */long long int) 1040187392)) + (216526837980517481LL)));
                    var_44 = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)2994)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45131))) : (var_4)))));
                }
                var_45 = ((/* implicit */short) ((arr_45 [i_29 - 1] [i_29 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_29] [i_29 - 1] [i_29] [i_29 - 1] [i_29])))));
                var_46 = var_2;
                /* LoopNest 2 */
                for (unsigned char i_31 = 1; i_31 < 20; i_31 += 3) 
                {
                    for (long long int i_32 = 0; i_32 < 23; i_32 += 2) 
                    {
                        {
                            arr_116 [i_8] [i_28] [i_28] [i_29] [i_31] [i_32] [(signed char)5] = ((/* implicit */unsigned long long int) (unsigned short)0);
                            arr_117 [i_31] [i_28] [4] [(signed char)12] [i_32] [i_8] [4] = ((/* implicit */short) ((((/* implicit */int) arr_104 [i_29 - 1] [i_31 - 1] [i_31 - 1])) << (((((/* implicit */int) (signed char)46)) - (24)))));
                        }
                    } 
                } 
            }
            var_47 = ((/* implicit */signed char) ((long long int) 4294967295U));
        }
    }
    /* vectorizable */
    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
    {
        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_63 [i_33] [i_33] [(signed char)6] [i_33] [i_33] [i_33])) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) arr_35 [i_33] [i_33]))));
        var_49 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) -277609339)) ? (arr_58 [i_33] [i_33]) : (((/* implicit */long long int) 0))))));
        var_50 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_119 [i_33])))));
    }
    for (short i_34 = 0; i_34 < 15; i_34 += 2) 
    {
        var_51 |= ((/* implicit */short) max(((-(((/* implicit */int) (short)-22513)))), ((-(((/* implicit */int) arr_113 [i_34] [i_34] [i_34] [i_34] [i_34] [i_34]))))));
        var_52 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)-8)))));
    }
}
