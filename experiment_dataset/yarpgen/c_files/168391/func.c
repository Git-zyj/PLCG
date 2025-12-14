/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168391
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
    var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((_Bool) 5881769319702841646LL))) - (((((/* implicit */int) var_2)) - (((/* implicit */int) var_8))))))));
    var_18 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_14)))) ? (5881769319702841646LL) : (((-5881769319702841644LL) ^ (-5881769319702841631LL))))) <= (((/* implicit */long long int) (~(min((var_5), (var_12))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */signed char) min((5881769319702841631LL), (((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) var_16))))))));
        var_20 = ((/* implicit */unsigned int) -5881769319702841635LL);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [6U] [i_2])) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5881769319702841650LL)) ? (-5881769319702841632LL) : (5881769319702841660LL)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_6 = 4; i_6 < 13; i_6 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [i_3] [(unsigned char)6] [i_5] [i_6] |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_6] [i_1 + 1])) ? (-5881769319702841622LL) : (((/* implicit */long long int) var_12)))));
                        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5881769319702841646LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) (~(0LL))))));
                        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 5881769319702841663LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [5LL]))) : (var_6)));
                        var_25 *= arr_9 [i_3] [i_4] [i_5] [i_4];
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)36)) ? (arr_8 [i_6 - 1] [i_6 - 4] [i_6 - 1]) : (((/* implicit */unsigned long long int) var_11))));
                    }
                    for (long long int i_7 = 4; i_7 < 13; i_7 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)77)) >> (((((/* implicit */int) arr_14 [i_7] [i_5] [1U] [i_3] [i_1])) - (209))))) > (((/* implicit */int) arr_7 [i_1 + 1]))));
                        var_28 = ((/* implicit */_Bool) ((((5881769319702841631LL) >= (0LL))) ? (((var_16) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [3ULL] [3ULL] [i_5] [i_1 + 1]))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [13ULL] [(unsigned char)4] [13ULL]))) : (arr_12 [i_7] [i_5] [i_3]))))));
                        var_29 -= ((/* implicit */unsigned int) ((((27LL) + (((/* implicit */long long int) ((/* implicit */int) var_1))))) < (-5881769319702841635LL)));
                    }
                    for (long long int i_8 = 4; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        arr_23 [i_1] [i_1] [i_1] [i_5] [i_8] = ((/* implicit */unsigned char) arr_9 [i_1 + 1] [0U] [i_1] [i_1]);
                        arr_24 [i_1] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) : (5881769319702841634LL)));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [(unsigned char)3] [i_1 + 1] [(unsigned char)3] [1] [i_8 - 1])) ? (arr_13 [i_8] [i_3] [i_1 + 1] [i_5] [0LL] [i_8 - 3]) : (arr_13 [i_8] [i_4] [i_1 + 1] [i_4] [6U] [i_8 - 3])));
                        arr_25 [i_1] [(_Bool)1] [i_4] [i_1 + 1] [i_3] |= ((/* implicit */unsigned char) (((~(5881769319702841616LL))) % (((/* implicit */long long int) (+(var_13))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)7));
                        arr_30 [(unsigned char)4] [i_3] [i_4] [i_5] [i_5] [(unsigned char)4] [(_Bool)0] = ((/* implicit */unsigned char) var_8);
                    }
                    var_32 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)8)) && (((/* implicit */_Bool) 5881769319702841594LL))));
                }
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    arr_33 [i_1] [i_1] [i_4] [i_1 + 1] = ((/* implicit */_Bool) var_11);
                    var_33 = ((/* implicit */unsigned long long int) (~(-5881769319702841617LL)));
                }
                arr_34 [i_1] [i_3] = ((/* implicit */unsigned char) (+(1114868102830228579ULL)));
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    var_34 *= (-(((/* implicit */int) arr_11 [i_11] [i_11] [13U] [i_11] [i_11])));
                    arr_38 [8ULL] [8ULL] [8ULL] = (((~(var_14))) | ((~(var_6))));
                }
                for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        arr_45 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_31 [(signed char)12] [i_1 + 1]))));
                        var_35 = -5881769319702841644LL;
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [2LL] [i_12] [i_4] [i_3]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))));
                        var_37 = ((/* implicit */unsigned char) ((int) ((-5881769319702841592LL) + (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [11U]))))));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_15)) >> (((/* implicit */int) arr_39 [4LL] [i_4] [i_4] [i_3] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)78)) <= (arr_6 [i_1] [i_3]))))));
                    }
                    var_39 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5881769319702841593LL)))))) % (400854537U)));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) /* same iter space */
                    {
                        var_40 += ((-5881769319702841644LL) >= (((/* implicit */long long int) var_5)));
                        var_41 *= arr_35 [i_1] [i_3] [i_1] [i_1 + 1];
                    }
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) /* same iter space */
                    {
                        var_42 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) <= (var_13))))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) var_2))));
                        arr_54 [i_1 + 1] [i_3] [(_Bool)0] [i_4] [i_12] [i_16] = ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_10 [i_1] [i_1 + 1]) : (((arr_37 [i_1] [i_12] [i_12] [i_4] [i_16] [i_12]) - (((/* implicit */unsigned long long int) 1902123334U)))));
                    }
                }
                /* LoopSeq 4 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 1) /* same iter space */
                    {
                        var_44 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1 + 1] [i_3])) == (((/* implicit */int) arr_2 [i_1 + 1] [(_Bool)1]))));
                        var_45 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_1 + 1] [i_3] [i_4] [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (172662489)));
                        var_46 = ((/* implicit */_Bool) ((var_2) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_12)) : (arr_28 [i_3] [i_3] [7U]))) : (((/* implicit */long long int) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_1] [i_1] [i_1 + 1] [i_1]))) : (400854537U))))));
                        var_47 *= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (_Bool)1))));
                        arr_60 [i_1] [i_1] [(signed char)6] = ((/* implicit */unsigned long long int) (((((+(arr_12 [i_17] [i_3] [i_3]))) + (9223372036854775807LL))) >> (((arr_58 [i_1 + 1]) - (18070723435300721076ULL)))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned char) (-(arr_22 [i_17] [i_1 + 1] [10U] [i_17] [i_19] [i_19])));
                        var_49 ^= ((/* implicit */unsigned long long int) ((arr_42 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))));
                        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1])) || (((/* implicit */_Bool) arr_10 [7ULL] [i_1 + 1]))));
                    }
                    arr_63 [i_4] = ((/* implicit */long long int) arr_5 [i_1 + 1] [i_3]);
                }
                for (unsigned char i_20 = 4; i_20 < 13; i_20 += 1) /* same iter space */
                {
                    arr_67 [i_1] [i_1 + 1] [i_4] [(unsigned char)2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)130)) >= (((/* implicit */int) arr_3 [i_1]))));
                    /* LoopSeq 1 */
                    for (long long int i_21 = 3; i_21 < 11; i_21 += 3) 
                    {
                        var_51 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_20 - 4] [i_1 + 1]))) % (arr_56 [i_20 - 3] [i_3])));
                        arr_70 [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((arr_42 [i_1] [i_1] [(signed char)5] [7ULL]) * (arr_42 [i_3] [i_4] [i_4] [i_21 + 1]))))));
                        arr_71 [i_3] [i_3] [i_20] [i_21] [i_21] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_3)) ^ (arr_1 [i_20 - 1] [i_1 + 1])));
                        var_52 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_12))))) == (((/* implicit */int) ((16102943627421693012ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        arr_72 [i_20] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) -5881769319702841646LL));
                    }
                }
                for (unsigned char i_22 = 4; i_22 < 13; i_22 += 1) /* same iter space */
                {
                    var_53 = ((/* implicit */int) ((unsigned long long int) arr_57 [i_1 + 1] [i_3] [i_4] [i_22] [i_22 - 3]));
                    var_54 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -172662489)) ? (((/* implicit */unsigned long long int) arr_55 [i_1] [i_1] [1ULL] [11ULL])) : (var_6))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_24 = 1; i_24 < 13; i_24 += 3) /* same iter space */
                    {
                        arr_80 [i_1] [i_1] [i_3] [i_3] [11ULL] [i_24] = ((/* implicit */unsigned long long int) (((+(var_3))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6))))));
                        var_55 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_76 [i_4] [(_Bool)1] [i_23] [i_24 - 1] [i_24] [i_24 + 1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_1] [i_1] [13U] [i_24 + 1] [i_24] [i_24])))));
                    }
                    for (unsigned long long int i_25 = 1; i_25 < 13; i_25 += 3) /* same iter space */
                    {
                        arr_83 [i_1 + 1] [7U] [5U] [5] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) -2543800667501563250LL);
                        arr_84 [6ULL] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) -508527676);
                        var_56 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4064LL)) && (((/* implicit */_Bool) -6533732008822238186LL)))))) < (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (17101323587955332158ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_9 [i_1] [i_3] [i_4] [10LL]) : (((/* implicit */unsigned int) -847746670)))))));
                    }
                    arr_85 [2] [i_3] [i_4] [13U] [i_23] = var_6;
                    var_58 += ((/* implicit */unsigned int) var_6);
                }
            }
            var_59 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)138))));
        }
        arr_86 [i_1] |= ((/* implicit */unsigned char) arr_52 [i_1 + 1] [i_1] [i_1] [i_1] [(signed char)1]);
    }
    var_60 = ((/* implicit */unsigned char) 172662497);
    var_61 *= ((((/* implicit */_Bool) var_6)) ? (min(((-(((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) var_0)) >> (((4194303LL) - (4194286LL))))))) : ((-2147483647 - 1)));
}
