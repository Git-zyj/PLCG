/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144854
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_3] [1] = ((/* implicit */unsigned int) ((min((((/* implicit */int) ((short) var_8))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [2])) : (arr_5 [i_1] [i_1] [11LL]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            arr_17 [(unsigned short)4] [(unsigned short)4] [i_2] [(short)4] [i_1] [i_1] [(short)4] = ((/* implicit */int) (~(min((((/* implicit */long long int) arr_1 [i_1])), (((((/* implicit */long long int) ((/* implicit */int) (short)32445))) ^ (var_11)))))));
                            var_13 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])) ^ (arr_16 [i_0] [i_0] [i_0] [6ULL] [i_0]))) < (((/* implicit */unsigned long long int) var_11))))), (arr_14 [i_4 - 3] [i_4] [i_4] [i_4] [i_4 - 3])));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) - (var_8)))) ? (((unsigned int) var_5)) : (((unsigned int) (short)27656)))) == (((/* implicit */unsigned int) 89620654))));
                        }
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) -2126153296)) ? (arr_5 [i_0] [i_0] [i_0]) : (max((((/* implicit */int) ((arr_4 [i_0] [i_0]) < (((/* implicit */long long int) arr_12 [i_0] [0ULL] [i_0] [i_0] [i_0] [i_0]))))), (min((((/* implicit */int) var_0)), (-1442522988)))))))));
        var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(signed char)4])) ? (arr_0 [i_0]) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)1804))))))));
    }
    var_16 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (short i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)16025)), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)31857))))) ^ (max((((/* implicit */unsigned long long int) (short)22533)), (var_6))))))))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5])) ? (((/* implicit */int) max(((short)25729), (var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (((/* implicit */int) arr_20 [(unsigned short)3] [i_5]))))));
        /* LoopNest 3 */
        for (short i_6 = 3; i_6 < 21; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_1))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_29 [(unsigned char)23] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_8] [i_5 + 1] [(unsigned short)18])))))));
                    }
                } 
            } 
        } 
        arr_30 [i_5 - 1] [i_5 - 1] = ((/* implicit */long long int) arr_28 [i_5 - 1] [0LL] [0LL] [i_5]);
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            for (int i_10 = 2; i_10 < 23; i_10 += 1) 
            {
                {
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_5 - 1])))))) & (min((((/* implicit */long long int) ((1329999648) ^ (((/* implicit */int) (short)-29325))))), (-2481295701037049208LL)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            arr_41 [i_12] [i_11] [18ULL] [8] [18ULL] [18ULL] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_27 [(signed char)12] [i_9] [i_12] [i_12]))) ^ (((((/* implicit */int) arr_40 [i_5 + 1] [i_5 + 1] [(short)18] [i_5 + 1] [i_12])) + (((/* implicit */int) var_7))))));
                            var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_5 + 1] [i_5 + 1] [i_10]))));
                        }
                        for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) (~(arr_36 [i_5 + 1] [i_9] [i_9] [8ULL])));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */_Bool) arr_40 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5])) || (((/* implicit */_Bool) var_10))))));
                        }
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7059542057208418452LL)) ? (((/* implicit */int) arr_44 [i_11] [i_9] [i_10 + 1] [i_11] [i_11] [i_11] [i_10 - 1])) : (((/* implicit */int) arr_44 [i_11] [i_11] [i_10] [i_11] [12LL] [i_9] [i_10 - 1]))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [(short)20]))))) ? (((((/* implicit */int) (short)22533)) - (((/* implicit */int) (unsigned short)15947)))) : (((/* implicit */int) arr_24 [i_5] [i_5 + 1] [i_9])))))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
                    }
                    for (int i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            arr_50 [i_5] [i_9] [i_9] [i_14] [i_14] [i_15] [(unsigned char)21] = ((((-42960742) + (2147483647))) >> (((/* implicit */int) ((unsigned short) arr_22 [3U] [3U]))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_10))));
                            arr_51 [i_14] [i_9] [i_14] [21ULL] [(unsigned char)5] [i_15] = ((/* implicit */unsigned short) arr_32 [i_5 - 1] [i_9] [i_9]);
                        }
                        arr_52 [(unsigned char)20] &= ((/* implicit */unsigned long long int) arr_20 [i_9] [i_9]);
                    }
                    for (int i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        arr_55 [i_16] [i_10] [i_9] [7LL] = min((max((((/* implicit */long long int) ((int) var_9))), (((((/* implicit */_Bool) (unsigned short)16017)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (8729818638180955496LL))))), (((/* implicit */long long int) var_12)));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 1; i_17 < 23; i_17 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) (((+(((((/* implicit */int) arr_28 [i_5 + 1] [i_17] [i_10] [i_5])) * (((/* implicit */int) (_Bool)0)))))) <= (((/* implicit */int) arr_24 [i_9] [i_16] [i_17]))));
                            arr_60 [i_17] [i_16] [(unsigned char)10] [i_9] [i_17] = ((/* implicit */unsigned short) ((int) 8729818638180955511LL));
                            var_29 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_5] [i_9] [i_10] [i_16] [19ULL])) || (((/* implicit */_Bool) -1741438378))))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)110)) && (((/* implicit */_Bool) arr_19 [i_17])))))))));
                            arr_61 [i_5] [i_5 + 1] [i_17] [i_5] [(unsigned char)14] = ((((/* implicit */long long int) arr_59 [i_5] [i_5 - 1] [i_17] [i_5] [i_5])) - (((long long int) max((((/* implicit */long long int) (short)-19148)), (8729818638180955495LL)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 2; i_18 < 20; i_18 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((((/* implicit */unsigned short) max((min(((unsigned char)230), (((/* implicit */unsigned char) (signed char)-1)))), ((unsigned char)168)))), ((unsigned short)41562))))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_35 [i_5 + 1] [i_5] [i_5 - 1])))) < (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_28 [(unsigned char)4] [i_16] [i_16] [i_5])), (arr_59 [i_5] [i_5] [i_16] [(signed char)10] [i_18])))), (arr_36 [i_18] [i_16] [i_9] [i_5]))))))));
                            arr_64 [i_18] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_18] [i_5 + 1] [i_5 + 1] [i_5 + 1])) <= (((int) arr_27 [i_5 - 1] [i_5] [i_18] [i_5 + 1]))));
                        }
                    }
                    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        var_32 = max((((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_5] [22] [i_5 - 1] [i_5 - 1] [i_5 - 1] [14ULL])) && (((/* implicit */_Bool) max((var_3), (((/* implicit */short) arr_39 [i_5 + 1] [i_5 + 1] [i_9] [i_9] [i_10] [i_19])))))))), (max(((short)18075), (((/* implicit */short) var_7)))));
                        arr_68 [(unsigned short)11] [i_19] [(unsigned short)11] [(short)12] [i_5] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_43 [i_10 - 2])) == (((/* implicit */int) arr_43 [i_10 - 1])))))) - (((arr_27 [i_5 - 1] [i_5 + 1] [12] [i_5 - 1]) + (((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((3046682812656858182LL) - (3046682812656858182LL))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_20 = 4; i_20 < 21; i_20 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) (+(2780808570U)));
                            arr_71 [i_5 - 1] [i_9] [i_10] [i_9] [i_20 + 2] [i_9] = max((min((((/* implicit */int) min((((/* implicit */short) var_9)), ((short)-4892)))), (((int) arr_56 [i_9] [i_19])))), (((((/* implicit */int) arr_44 [i_20] [i_10 - 1] [i_10] [i_5 + 1] [i_20] [i_20 - 4] [i_10 - 1])) - (((((/* implicit */int) (short)-31858)) - (((/* implicit */int) arr_23 [2U] [i_9] [i_9])))))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((9887458257433196106ULL), (((/* implicit */unsigned long long int) arr_46 [22LL] [i_20] [i_19])))) : (((/* implicit */unsigned long long int) 1563891139))))) ? (((/* implicit */long long int) ((/* implicit */int) min((max((var_0), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) arr_19 [i_20 - 1])))))) : (max((var_11), (((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_9] [i_9] [0ULL] [i_20 - 4])) < (((/* implicit */int) var_12)))))))));
                        }
                        for (unsigned long long int i_21 = 4; i_21 < 21; i_21 += 2) /* same iter space */
                        {
                            arr_74 [i_5 - 1] [(unsigned char)13] [(unsigned char)9] [i_19] [i_19] = max((((/* implicit */int) ((signed char) (unsigned short)16017))), ((~(((/* implicit */int) arr_54 [i_19] [i_19] [i_19] [i_5 + 1] [i_5] [i_5])))));
                            var_35 = ((/* implicit */unsigned char) max((2734162324U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_56 [i_5] [i_9])))))));
                        }
                        var_36 += ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-28311))) <= (arr_59 [(short)22] [i_9] [2] [i_5 - 1] [i_10 - 2]))) ? (max((((/* implicit */long long int) (signed char)76)), (-7369169778493057683LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_28 [i_10 - 1] [0U] [i_10 + 1] [i_19])), (arr_59 [i_5 + 1] [i_5 + 1] [2U] [i_9] [i_5 + 1])))));
                    }
                    arr_75 [i_9] [i_9] [i_5] = ((min((((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_1))), (((/* implicit */long long int) ((unsigned short) arr_53 [i_5]))))) + (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), ((+(845309528787131854LL))))));
                }
            } 
        } 
    }
    var_37 = (unsigned char)142;
    var_38 = ((/* implicit */int) ((((var_6) >> (((((/* implicit */int) var_12)) - (17186))))) / (((/* implicit */unsigned long long int) 825378835))));
}
