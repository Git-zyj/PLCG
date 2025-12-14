/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181001
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
    var_11 += ((/* implicit */unsigned int) ((unsigned char) (((_Bool)0) ? (((/* implicit */int) (short)7388)) : (((/* implicit */int) (unsigned short)10)))));
    var_12 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) (~(((unsigned int) (unsigned short)410))));
            var_14 = var_10;
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)109)) > (((/* implicit */int) var_6))))) <= (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((var_7) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0])))))), (((/* implicit */long long int) ((_Bool) 9769737870843088681ULL))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 3105818639U))) && (((/* implicit */_Bool) ((716976873U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32428)))))))))));
                    var_17 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_1 [i_3 - 2] [i_2 + 3])))));
                    var_18 = ((/* implicit */short) min((((unsigned int) arr_8 [i_2 + 1] [i_1] [(short)9] [i_2 + 1])), (((/* implicit */unsigned int) var_3))));
                }
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) ((int) ((((var_7) + (9223372036854775807LL))) >> (((arr_12 [i_2 + 4]) - (2744226647U))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_7 [i_2 + 2] [i_0] [i_2 + 1]), ((short)-19146)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)19146)))))));
                    var_21 = ((/* implicit */int) ((((9769737870843088681ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 + 3]))))) % (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_0])), (var_10))))));
                }
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_23 [i_1] [i_1] [i_2 + 3] [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) var_2)), (max((var_7), (((/* implicit */long long int) var_3))))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) : (8677006202866462967ULL)))))) ^ (((((/* implicit */_Bool) (signed char)-1)) ? (1189148664U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17)))))));
                            var_23 = ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_1] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [9ULL] [i_2 + 4]))) : (((((/* implicit */_Bool) 1629489527390317461ULL)) ? (1189148656U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                            var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)13)) ? (3105818639U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_2 + 3] [i_1] [i_0]))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) : (1189148677U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_25 = arr_12 [i_0];
                            var_26 |= (signed char)93;
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_7 + 1] [i_2 + 2] [i_2 + 3] [i_2] [i_2 + 2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7 - 2] [(_Bool)1] [7] [i_7 - 1] [i_2 - 1] [i_1]))) : (716976873U)))) ? (((/* implicit */int) max((arr_2 [i_2 + 1] [i_2 + 4] [i_2]), (((/* implicit */signed char) arr_14 [i_7 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_0]))))) : (((/* implicit */int) (!(arr_14 [i_7 - 1] [i_7 - 2] [i_7] [i_7 - 2] [i_2 - 1] [i_1])))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned short) var_9);
                var_29 ^= ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_2 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29700)) ? (((/* implicit */long long int) arr_3 [i_2 + 1] [i_1] [6ULL])) : (arr_25 [i_2 - 1] [i_1])))) : (8677006202866462920ULL)))));
            }
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> (((arr_14 [i_0] [i_1] [(unsigned short)11] [i_9] [i_9] [i_0]) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0))))) : (arr_10 [i_0] [i_1] [i_9] [i_0] [10U])))));
                var_31 = ((/* implicit */unsigned long long int) ((signed char) ((arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) <= (arr_24 [i_0] [(short)5] [i_0] [i_1] [i_0] [(unsigned short)9]))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_1 [9ULL] [(unsigned short)8])))), (arr_10 [i_0] [i_0] [i_9] [(unsigned char)5] [i_11])));
                            var_33 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-22613))));
                            var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))) * (3734431039U))) % (((unsigned int) max(((unsigned short)59666), (((/* implicit */unsigned short) (unsigned char)3)))))));
                        }
                    } 
                } 
            }
            arr_35 [i_1] = ((/* implicit */unsigned int) var_6);
        }
        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            var_35 = (!((!(((/* implicit */_Bool) arr_27 [i_0] [i_12] [i_0] [(unsigned char)2] [i_0])))));
            var_36 *= ((/* implicit */short) arr_33 [i_0] [i_0] [i_12] [(signed char)4]);
            var_37 = ((/* implicit */short) ((((/* implicit */int) (short)-19563)) <= (((/* implicit */int) (unsigned char)3))));
            /* LoopSeq 2 */
            for (short i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                var_38 = ((/* implicit */signed char) min((max((((/* implicit */long long int) max((((/* implicit */short) (signed char)-1)), (var_2)))), (((long long int) var_5)))), (((/* implicit */long long int) var_4))));
                var_39 += ((/* implicit */_Bool) ((short) (signed char)-93));
                var_40 &= ((/* implicit */unsigned short) arr_0 [i_12]);
            }
            for (unsigned short i_14 = 2; i_14 < 11; i_14 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_15 = 3; i_15 < 11; i_15 += 3) 
                {
                    var_41 -= max((((1189148684U) | (var_10))), (((/* implicit */unsigned int) (unsigned short)7415)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-1966107876) : (((/* implicit */int) (unsigned char)234))))) ? (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25207))) : (3U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                        var_43 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((14514457998297533894ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))))))));
                        var_44 = ((/* implicit */unsigned int) max((arr_33 [i_0] [i_12] [i_12] [i_0]), (((/* implicit */long long int) var_5))));
                        var_45 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_10))))) || (((/* implicit */_Bool) arr_25 [i_0] [i_12]))))));
                        arr_53 [i_0] [i_12] [i_12] [i_15 - 3] [i_16] = arr_38 [i_0] [i_0] [i_0];
                    }
                    var_46 = ((/* implicit */_Bool) ((short) ((unsigned long long int) 9223372036854775807LL)));
                }
                var_47 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)109))));
            }
            arr_54 [3U] [(signed char)9] [i_12] = ((/* implicit */int) var_0);
        }
        for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
        {
            var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((short) var_0))) ? (((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_17] [i_17] [9ULL] [i_17])) || (((/* implicit */_Bool) arr_13 [i_0] [(_Bool)1]))))))))))));
            arr_57 [i_17] [i_0] = ((/* implicit */long long int) (short)(-32767 - 1));
            var_49 *= ((/* implicit */unsigned short) (+(((unsigned long long int) arr_30 [i_0] [i_0] [11U]))));
        }
        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
        {
            arr_61 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) 14615292975230577514ULL))));
            var_50 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((var_10) - (((/* implicit */unsigned int) arr_6 [i_0] [i_0])))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))) > (max((-3007592663081279431LL), (var_7)))));
            var_51 = ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [(unsigned short)5] [i_18] [(unsigned short)5]));
            var_52 = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) arr_8 [i_0] [i_18] [(unsigned short)8] [i_0])));
        }
        var_53 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [3U] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30382))) | (var_7))))));
        /* LoopSeq 2 */
        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 4) 
        {
            var_54 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)44)), (arr_65 [(unsigned char)2])))) ? (arr_58 [i_0] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            var_55 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (signed char)-92))));
        }
        for (long long int i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            arr_70 [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 17150595097487942535ULL)) || (((/* implicit */_Bool) (unsigned char)211)))));
            var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14565)) % (((/* implicit */int) (signed char)101))))) ? (((int) (unsigned char)255)) : (((/* implicit */int) ((((/* implicit */_Bool) 3831451098478974102ULL)) && (((/* implicit */_Bool) 12764728841383045898ULL)))))));
            var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3831451098478974102ULL)) && (((/* implicit */_Bool) (unsigned char)44))));
            var_58 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)101)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)18))))) * (max((4260465367U), (((/* implicit */unsigned int) var_5)))))) << (((((unsigned int) var_9)) - (3726365118U)))));
            var_59 &= ((/* implicit */unsigned short) ((short) 4260465391U));
        }
    }
}
