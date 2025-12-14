/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140034
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
    var_19 = var_9;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((unsigned int) var_10));
                        var_21 = ((/* implicit */short) arr_1 [i_0]);
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (arr_1 [i_0])));
            var_23 = ((/* implicit */unsigned char) ((long long int) (unsigned char)3));
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_24 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_3 [i_0] [(signed char)7])))) > (((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_4]))));
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */unsigned int) ((arr_12 [i_0] [14U] [i_0]) | (((/* implicit */int) arr_0 [i_0]))));
                        arr_19 [(signed char)18] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_4] [i_5] [i_6] [i_6])) / (var_5)));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-16)))))));
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        var_27 |= ((/* implicit */signed char) ((arr_14 [(signed char)15] [(signed char)15] [(signed char)11]) | (((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)4))))));
                        arr_22 [i_0] [i_0] [i_0] [5LL] [i_1] = ((/* implicit */int) ((unsigned int) arr_7 [i_7] [i_5] [i_1] [i_0]));
                    }
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_1] [i_1] [i_4] [i_1] [i_8] = ((/* implicit */short) arr_1 [i_0]);
                        var_28 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) 4294967295U))) + (2147483647))) << (((((((arr_4 [(signed char)6]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))) + (1000195563133952064LL))) - (14LL)))));
                        var_29 = ((/* implicit */unsigned char) (+(((-27828905843604312LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_8] [i_5] = ((/* implicit */short) ((((((/* implicit */long long int) arr_23 [i_0] [i_0] [i_1] [i_0] [i_1] [i_5] [i_5])) % (27828905843604319LL))) != (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1])))))));
                    }
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_25 [10ULL] [i_1] [11LL] [10ULL] [10ULL])) : (arr_20 [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)248))));
                    var_31 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_4] [16U] [i_4] [i_1]);
                    arr_28 [i_0] [i_1] [i_4] [i_1] = 1556152501;
                }
                for (short i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                {
                    var_32 ^= ((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [14LL]) & (arr_24 [i_9] [i_1] [i_1] [i_9] [i_0] [i_4] [i_9])));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (4137437622068135030LL) : (((/* implicit */long long int) var_13))));
                    arr_32 [(short)18] [(short)18] [i_1] [i_4] [i_9] = ((/* implicit */short) arr_5 [i_0]);
                    arr_33 [i_1] = ((/* implicit */unsigned char) ((2563315860U) << (((/* implicit */int) (_Bool)0))));
                }
                arr_34 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-27102)) * (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */int) (signed char)-33)) : (arr_14 [i_0] [i_0] [i_0])));
                arr_35 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [14U] [i_0] [i_0]))) : (var_3)));
            }
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) ((((arr_4 [i_1]) != (var_3))) ? (((((/* implicit */_Bool) -395354527)) ? (((/* implicit */int) arr_39 [i_1] [3LL] [i_1])) : (((/* implicit */int) (unsigned char)3)))) : (((var_2) ? (var_7) : (((/* implicit */int) var_8))))));
                            var_35 &= ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) var_10)))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_20 [i_0] [i_1] [i_1] [i_10] [3U]))))));
                var_37 = ((/* implicit */short) ((((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0])) - (((((/* implicit */_Bool) arr_31 [i_0] [(signed char)13] [i_10])) ? (-395354527) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [(signed char)6]))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        {
                            var_38 = (-(((/* implicit */int) arr_18 [i_1] [21ULL] [i_1] [21ULL] [i_1] [i_1])));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    for (int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        {
                            arr_59 [i_1] [i_1] = arr_20 [12] [i_16] [i_13] [i_0] [i_0];
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (unsigned char)253))));
                            var_41 &= ((((/* implicit */_Bool) arr_1 [i_16])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (4088827282U));
                        }
                    } 
                } 
            }
        }
        var_42 = ((/* implicit */int) ((((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0])) > ((+(((/* implicit */int) var_2))))));
        var_43 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -6158203874366352317LL)) ? (var_12) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0])))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (1550116720))))));
    }
    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
    {
        var_44 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [i_18] [i_18])) ? ((+(((/* implicit */int) (unsigned char)108)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_51 [i_18] [18] [i_18] [18] [i_18])) : (((/* implicit */int) (signed char)36)))))), (max((((((((/* implicit */int) var_1)) + (2147483647))) << (((206140014U) - (206140014U))))), (((/* implicit */int) var_17))))));
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 24; i_19 += 1) 
        {
            for (unsigned int i_20 = 0; i_20 < 24; i_20 += 1) 
            {
                {
                    var_45 = ((/* implicit */long long int) var_13);
                    var_46 *= ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) ((var_8) ? (1237508750U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_19] [i_18] [i_19] [i_18] [i_19])))))))));
                    arr_69 [i_19] [i_18] [i_18] [i_19] = (((+(((/* implicit */int) (signed char)32)))) | (((/* implicit */int) ((unsigned char) ((long long int) var_16)))));
                }
            } 
        } 
    }
    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_22 = 0; i_22 < 24; i_22 += 4) 
        {
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 24; i_23 += 4) 
            {
                for (signed char i_24 = 0; i_24 < 24; i_24 += 4) 
                {
                    for (signed char i_25 = 0; i_25 < 24; i_25 += 4) 
                    {
                        {
                            arr_83 [i_21] [i_22] [i_23] [i_22] [16U] [(signed char)4] [i_23] = ((/* implicit */int) ((unsigned int) ((unsigned int) ((_Bool) 2147483647))));
                            arr_84 [i_21] [i_22] [i_23] [i_21] [i_23] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-16)) + (2147483647))) >> (((4088827282U) - (4088827282U))))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_21] [i_22] [i_23])))))));
                            var_47 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_70 [i_21] [i_21])) ? (min((((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)236)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)241)) : (var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_22] [i_22] [i_23] [i_23])) ? (((/* implicit */int) var_15)) : (var_5)))))))));
                            var_48 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-19561)), (var_18)))) ? ((+(arr_71 [i_21] [i_21]))) : (((/* implicit */int) arr_6 [i_25] [i_23] [i_22] [23]))))) ? (min((max((var_11), (((/* implicit */int) arr_39 [i_25] [i_25] [i_25])))), (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) (unsigned char)7))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_81 [i_21] [i_22] [4LL] [i_24] [i_25])))))))));
                        }
                    } 
                } 
            } 
            arr_85 [i_21] [i_22] = ((/* implicit */unsigned long long int) var_14);
            var_49 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_13 [i_21] [i_21] [i_21] [i_22]), (arr_13 [i_21] [i_22] [i_22] [i_22])))), (min((((/* implicit */int) arr_13 [i_21] [8U] [i_21] [8U])), (1047586429)))));
        }
        /* vectorizable */
        for (short i_26 = 0; i_26 < 24; i_26 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_27 = 0; i_27 < 24; i_27 += 2) 
            {
                for (short i_28 = 0; i_28 < 24; i_28 += 3) 
                {
                    for (long long int i_29 = 0; i_29 < 24; i_29 += 3) 
                    {
                        {
                            arr_97 [(unsigned char)16] [i_26] [i_27] [i_28] [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_44 [i_21] [i_21] [i_28])) : (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_10))))));
                            var_50 = ((/* implicit */_Bool) min((var_50), (arr_45 [5LL])));
                        }
                    } 
                } 
            } 
            arr_98 [i_21] = ((/* implicit */unsigned int) ((((long long int) arr_76 [15U] [i_26])) / (((/* implicit */long long int) ((arr_87 [i_21] [(unsigned char)22] [i_21]) & (-1047586450))))));
        }
        var_51 += ((/* implicit */unsigned int) arr_5 [i_21]);
    }
    for (unsigned int i_30 = 0; i_30 < 24; i_30 += 2) /* same iter space */
    {
        var_52 ^= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_75 [i_30])) : (((/* implicit */int) var_2)))) != (((/* implicit */int) (short)-32760)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)6)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)22] [(signed char)22] [(short)20] [i_30] [i_30] [i_30]))) - (11622700413036048740ULL))))))) : (((var_8) ? (var_11) : ((-(((/* implicit */int) (unsigned char)7))))))));
        var_53 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)27)), (-1368662042)))) ? (((((((/* implicit */int) arr_0 [i_30])) + (2147483647))) << (((873569017) - (873569017))))) : (((/* implicit */int) arr_86 [i_30] [i_30] [i_30]))))) | ((+(arr_66 [i_30] [i_30])))));
        arr_101 [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6824043660673502876ULL)) ? (((/* implicit */int) arr_51 [i_30] [i_30] [i_30] [i_30] [i_30])) : (((/* implicit */int) arr_51 [i_30] [i_30] [i_30] [i_30] [i_30]))))) ? (((/* implicit */int) ((short) arr_67 [i_30] [(signed char)17] [i_30]))) : (max((min((((/* implicit */int) (short)-32745)), (-869048064))), (((/* implicit */int) arr_56 [i_30]))))));
        /* LoopNest 2 */
        for (unsigned char i_31 = 0; i_31 < 24; i_31 += 1) 
        {
            for (unsigned int i_32 = 0; i_32 < 24; i_32 += 3) 
            {
                {
                    var_54 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_11)) : (-5655013421798082096LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_31] [i_31])))))));
                    var_55 ^= ((/* implicit */signed char) ((unsigned char) max((arr_87 [(short)14] [i_31] [i_32]), (((/* implicit */int) (unsigned char)3)))));
                    var_56 = ((/* implicit */int) ((((((((/* implicit */int) var_10)) > (var_14))) ? (((arr_62 [i_30] [(_Bool)1]) << (((206140014U) - (206140014U))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) (+(-27828905843604312LL))))))));
                    arr_107 [i_30] [i_30] [i_30] [19LL] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_32] [i_32] [(short)7] [i_30] [i_30] [i_30]))))) >> (((((int) 873569032)) - (873569022))))));
                }
            } 
        } 
    }
}
