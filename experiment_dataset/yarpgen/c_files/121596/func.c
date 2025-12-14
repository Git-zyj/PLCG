/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121596
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_4 [(signed char)5] = ((/* implicit */_Bool) 5304650652350159361ULL);
                var_11 *= max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (-5233215217862525793LL));
                /* LoopSeq 4 */
                for (signed char i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1 + 2] [i_2] = ((/* implicit */_Bool) (short)(-32767 - 1));
                    arr_8 [i_0 + 1] [i_1 + 3] [i_2] = ((/* implicit */int) (~(arr_5 [i_0])));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_12 = ((/* implicit */long long int) arr_6 [i_0 + 2] [(unsigned char)3] [i_3]);
                    var_13 ^= ((/* implicit */unsigned short) -8380502447055103558LL);
                }
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_4]);
                                var_15 = ((/* implicit */int) min((((/* implicit */long long int) arr_3 [i_0] [i_1 + 3] [i_0])), (min((((/* implicit */long long int) (+(arr_3 [i_5] [i_1] [i_0])))), (min((((/* implicit */long long int) -980584722)), (arr_14 [i_1] [i_4] [i_5] [(short)6])))))));
                                var_16 *= ((/* implicit */long long int) min(((((+(arr_6 [i_0 + 2] [i_5] [i_4]))) * (max((((/* implicit */unsigned long long int) (short)-7360)), (6999702297455393120ULL))))), (((/* implicit */unsigned long long int) ((2147483632LL) != (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_17 &= ((/* implicit */long long int) arr_22 [i_8] [i_7] [i_4] [1LL] [i_0]);
                                var_18 = ((/* implicit */short) min(((-(arr_22 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_7] [i_8]))), (((/* implicit */int) max((arr_24 [i_8] [i_1] [i_1] [i_0]), (((/* implicit */signed char) arr_17 [i_0] [i_1] [i_0] [i_0])))))));
                                arr_28 [i_8] [i_1] [(short)0] [(signed char)0] [(short)0] = ((/* implicit */_Bool) min(((-(1304950876))), (arr_22 [i_0 + 1] [i_1] [i_0 + 1] [i_7] [i_7])));
                            }
                        } 
                    } 
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((7947013484300043604ULL), (8615122695259907169ULL)))))) && (((/* implicit */_Bool) 6895361315472595173LL))));
                    var_20 = ((/* implicit */unsigned char) (+(min(((+(4358013768241095071LL))), (min((((/* implicit */long long int) arr_12 [i_0] [i_1 + 2] [i_0] [i_0])), (8957519884562756784LL)))))));
                    arr_31 [i_0 - 1] [8ULL] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    var_21 += ((/* implicit */long long int) arr_16 [i_0] [i_9]);
                    arr_32 [i_0] [i_0] [10U] [i_9] &= ((/* implicit */unsigned char) max((5661476964714489408LL), (((/* implicit */long long int) (short)32767))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        arr_36 [i_10] = ((/* implicit */signed char) (unsigned char)47);
        arr_37 [i_10] = ((/* implicit */unsigned char) max((arr_33 [i_10]), (((/* implicit */long long int) (((-(arr_35 [3ULL]))) == (((/* implicit */long long int) arr_34 [i_10])))))));
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        var_22 = ((/* implicit */long long int) (+(((8615122695259907169ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50609)))))));
        /* LoopSeq 3 */
        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            arr_43 [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)33107))));
            arr_44 [(signed char)7] [i_11] = ((/* implicit */unsigned long long int) arr_41 [i_11]);
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_49 [i_13] = ((/* implicit */short) -9038348966144433916LL);
                var_24 ^= ((/* implicit */int) ((arr_42 [i_13]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((5661476964714489408LL) > (((/* implicit */long long int) -776815869))))))));
            }
            /* LoopSeq 4 */
            for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)208))));
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 25; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_40 [i_11]);
                        var_27 = ((/* implicit */long long int) ((((-394324099) > (((/* implicit */int) (_Bool)1)))) && ((!(((/* implicit */_Bool) (short)-12774))))));
                    }
                    var_28 = ((/* implicit */short) (+(((7407357256825706657LL) ^ (arr_47 [i_11] [i_13] [i_15] [i_16])))));
                    var_29 *= ((/* implicit */unsigned char) (((+(10499730589409508023ULL))) == (((/* implicit */unsigned long long int) ((arr_39 [i_11] [i_13]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38769))))))));
                }
                for (unsigned int i_18 = 1; i_18 < 24; i_18 += 2) 
                {
                    arr_59 [(unsigned char)3] [i_13] [i_13] [i_11] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)28468))))));
                    var_30 |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_41 [i_11])) % (arr_56 [i_15] [i_13] [i_15] [(unsigned short)23] [i_15]))) % ((+(((/* implicit */int) (unsigned short)37068))))));
                    arr_60 [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)192))));
                    var_31 = ((/* implicit */long long int) arr_52 [i_18 + 1] [i_18] [i_15]);
                    arr_61 [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                }
            }
            for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
            {
                var_32 = ((/* implicit */int) arr_58 [(short)5] [i_19] [(short)5] [i_19]);
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    arr_66 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) < (arr_42 [i_19])));
                    arr_67 [i_11] [16ULL] [i_13] [(unsigned short)3] = ((/* implicit */unsigned short) arr_39 [i_11] [i_13]);
                    var_33 -= ((/* implicit */unsigned int) 18393999442207991127ULL);
                }
                var_34 = ((/* implicit */long long int) (_Bool)1);
                arr_68 [i_19] [(signed char)18] [i_19] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)104))) < ((+(arr_48 [i_11] [i_19] [i_19] [i_19])))));
                var_35 = ((/* implicit */unsigned short) 1318018255U);
            }
            for (short i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                var_36 = ((/* implicit */int) arr_48 [i_11] [i_13] [i_11] [(_Bool)1]);
                var_37 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)23816))))));
            }
            for (long long int i_22 = 0; i_22 < 25; i_22 += 2) 
            {
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-5839978484287541653LL)))) && (arr_53 [i_13] [i_13] [i_13] [i_11])));
                arr_73 [i_11] [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) 9755447975328617920ULL);
                var_39 = ((/* implicit */signed char) arr_40 [i_13]);
            }
            /* LoopSeq 3 */
            for (unsigned short i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                arr_76 [i_13] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (short i_25 = 0; i_25 < 25; i_25 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) 9293166703424124684ULL);
                            var_41 = ((/* implicit */unsigned short) (((-(8688657649593499122LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)51))))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned int) arr_50 [i_11] [i_11] [i_13] [i_13]);
                arr_82 [i_11] [i_13] [i_23] = ((/* implicit */short) ((((/* implicit */long long int) 1113168659)) / ((~(arr_48 [i_11] [i_13] [i_23] [i_23])))));
                var_43 ^= ((/* implicit */unsigned int) (signed char)63);
            }
            for (long long int i_26 = 3; i_26 < 24; i_26 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 1) 
                {
                    var_44 -= ((/* implicit */_Bool) ((((450492794U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_11]))))) * (((/* implicit */unsigned int) (+(arr_55 [i_11] [i_13] [i_26] [i_11] [i_11]))))));
                    arr_88 [3U] [i_13] [i_26] [i_27] [i_11] [i_13] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    var_45 = (signed char)-116;
                    var_46 = ((/* implicit */int) arr_80 [i_11] [i_13] [i_13] [i_26] [(short)17] [i_27]);
                }
                var_47 *= ((/* implicit */signed char) (-(((/* implicit */int) ((3844474502U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                var_48 = ((/* implicit */signed char) (~(((/* implicit */int) (!(arr_53 [(short)2] [24] [12ULL] [i_26 - 1]))))));
                var_49 = ((/* implicit */signed char) arr_79 [i_13] [i_13] [i_13] [(short)7] [i_13] [i_11]);
                var_50 = ((/* implicit */unsigned long long int) ((((450492782U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9293166703424124684ULL))))))));
            }
            for (long long int i_28 = 3; i_28 < 24; i_28 += 2) /* same iter space */
            {
                var_51 = (-(arr_42 [i_11]));
                var_52 = ((/* implicit */long long int) (signed char)114);
            }
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            var_53 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)39893))));
            var_54 = (+(((/* implicit */int) arr_84 [(unsigned short)8] [i_29] [i_29])));
            var_55 = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_78 [i_29] [i_29] [14] [12LL] [i_11] [i_29]))))));
        }
    }
    var_56 = ((/* implicit */signed char) (+(min((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) (short)12564)) <= (((/* implicit */int) (_Bool)1)))))))));
}
