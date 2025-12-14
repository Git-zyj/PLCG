/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153169
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) arr_4 [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (_Bool)0))))) ^ ((((_Bool)0) ? (min((((/* implicit */unsigned long long int) var_16)), (arr_10 [i_1] [i_2] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1]))))))));
                                var_18 = ((/* implicit */signed char) arr_5 [i_0]);
                                arr_14 [19ULL] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_4 [i_2] [i_2]))) >= (arr_4 [i_2] [i_2]))))) >= (max((arr_3 [i_0] [i_2] [i_4]), (arr_3 [i_1] [i_2] [i_4])))));
                                var_19 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_15))))) || (((/* implicit */_Bool) arr_1 [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((int) var_12)) & (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) && (((/* implicit */_Bool) var_9)))))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (min((arr_10 [i_0] [(short)7] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((18446744073709551600ULL), (16ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 22; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        arr_22 [(unsigned char)17] [i_6] [i_6] [18ULL] [i_6] = ((/* implicit */short) ((18446744073709551600ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_21 ^= ((/* implicit */signed char) ((((arr_13 [13] [i_6] [i_6] [i_6] [i_6 - 1]) | (arr_13 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6 - 1]))) - (((((/* implicit */_Bool) arr_13 [i_5] [i_6] [i_6] [i_6] [i_6 + 1])) ? (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [i_5])))))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_16)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_24 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (9223372036854775807LL)));
        }
        for (int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            var_25 += ((/* implicit */short) min((((18446744073709551578ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_9] [i_9]))));
            var_26 += ((/* implicit */long long int) (~((~(((((var_6) + (2147483647))) << (((var_7) - (536813392)))))))));
        }
        for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 2) 
        {
            arr_33 [i_10] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_10 + 1] [i_10 - 2] [9LL] [i_10 - 2])) || (((/* implicit */_Bool) ((unsigned long long int) var_6)))))), (min((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_26 [i_0] [(unsigned short)20] [i_10]))), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_10]))))));
            var_27 += ((/* implicit */long long int) ((unsigned int) var_8));
            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_27 [i_10 - 2] [i_10 - 1]))) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_5)))) << ((((_Bool)1) ? (((/* implicit */int) arr_24 [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_10]))))))) : (((((/* implicit */_Bool) arr_9 [i_10 + 2] [1ULL])) ? (arr_10 [i_10 - 2] [i_10] [i_10 + 1] [i_10 - 1]) : (arr_3 [i_10 - 2] [i_10 + 2] [i_10 - 1])))));
        }
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            arr_36 [i_0] [(unsigned char)0] [i_11] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (arr_13 [i_11] [i_11] [(unsigned short)12] [i_11] [i_11])))), (max((arr_0 [i_11]), (((/* implicit */unsigned long long int) (unsigned char)246)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)127)), (var_15)))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */short) (unsigned char)226)))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                var_29 ^= ((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0] [i_0]);
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_3 [(short)2] [i_11] [i_0])))) ? ((~(arr_2 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_11] [i_11]))))))));
            }
            for (int i_13 = 1; i_13 < 21; i_13 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_15 = 1; i_15 < 21; i_15 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((arr_40 [i_11] [i_11] [i_11]), (((/* implicit */short) (!(((/* implicit */_Bool) var_10)))))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1549801792U)))));
                        var_32 ^= ((/* implicit */unsigned short) arr_48 [i_0] [i_14] [(signed char)2]);
                    }
                    for (short i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
                        var_34 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_11] [i_13] [i_14] [i_11])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_11])))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) | (arr_3 [i_0] [i_11] [i_13]))))), (((/* implicit */unsigned long long int) (~(((((var_8) + (9223372036854775807LL))) >> (((arr_12 [i_16] [i_14] [i_13]) - (207419930U))))))))));
                        arr_54 [i_0] [i_11] [i_11] [i_13] [i_14] [i_14] [15U] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((arr_4 [i_0] [i_16]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) <= (((/* implicit */int) ((unsigned char) arr_0 [(_Bool)1])))))) * (((/* implicit */int) var_11))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [(short)20] [i_11] [i_0] [i_14] [i_0]))))), (((((/* implicit */_Bool) ((int) -1407512432))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_16)))) : (((((/* implicit */_Bool) arr_4 [(unsigned char)19] [i_11])) ? (arr_42 [i_13]) : (((/* implicit */unsigned long long int) var_6))))))));
                        var_36 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_0])) == (((/* implicit */int) var_1))))) < (((int) (_Bool)1)))));
                        var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_38 = ((/* implicit */long long int) max((var_38), (arr_34 [i_18])));
                        arr_61 [i_0] [i_0] [i_13] [i_11] [(short)19] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_39 [i_0] [i_18] [i_13])) - (39738)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_29 [i_11] [i_14])), (4316984930706071341ULL)))))), ((!((_Bool)1)))));
                    }
                }
                for (short i_19 = 1; i_19 < 21; i_19 += 3) 
                {
                    arr_65 [i_13] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_13 + 1] [i_13 + 2] [i_19 + 3] [i_19 + 3]))) + (arr_46 [i_13 + 2] [i_13 + 2] [i_19 + 2] [i_19] [i_13]))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [i_13 + 1] [i_13 + 2] [i_19 + 2])))))));
                    var_39 = ((/* implicit */short) arr_5 [i_19 + 2]);
                    arr_66 [(short)20] [i_13] [i_11] [i_11] = ((/* implicit */unsigned short) ((arr_64 [i_0] [i_0] [i_11] [i_13] [i_19] [i_19]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) ((unsigned short) var_0))) : (((/* implicit */int) ((short) var_6))))))));
                }
                var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_53 [i_13 - 1] [i_11] [(short)2] [i_11] [(unsigned char)4]))));
                var_41 = ((/* implicit */short) max((max((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_46 [i_0] [i_11] [i_0] [i_0] [i_13]))), (max((arr_0 [i_11]), (arr_6 [i_13 + 1] [(unsigned char)9] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_31 [i_11] [i_13]))) < (((int) (unsigned char)255)))))));
                var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_11] [i_11] [i_0])) ? (max((var_13), (((/* implicit */unsigned int) arr_39 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_50 [i_13] [11ULL] [i_11] [i_13 + 3] [i_13])))) ^ (((/* implicit */int) arr_23 [i_13 - 1] [i_11] [i_13])))))));
                /* LoopNest 2 */
                for (long long int i_20 = 1; i_20 < 22; i_20 += 2) 
                {
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        {
                            var_43 += ((/* implicit */short) ((((((int) -1873610418)) + (2147483647))) << (((/* implicit */int) arr_64 [i_0] [i_0] [i_0] [i_11] [i_0] [i_0]))));
                            var_44 = min((((/* implicit */short) ((((((/* implicit */unsigned long long int) var_4)) / (arr_46 [i_0] [i_11] [i_13] [(short)18] [i_13]))) <= (min((((/* implicit */unsigned long long int) arr_39 [i_11] [4ULL] [i_11])), (arr_3 [i_11] [12ULL] [i_21])))))), (arr_35 [i_13]));
                            var_45 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) ((_Bool) arr_15 [i_0]))), (((arr_15 [i_21]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0] [i_0] [i_13 + 3] [i_21])))))))));
                            arr_71 [17U] [i_20] [1] [i_13] [i_20] = ((/* implicit */signed char) ((short) max((((/* implicit */int) arr_8 [i_0] [i_11] [(unsigned char)17] [i_21])), (((var_10) | (((/* implicit */int) (short)-16902)))))));
                        }
                    } 
                } 
            }
        }
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) 1655029069)), (arr_15 [i_0])))))) ? (((/* implicit */int) ((-8994910539930059914LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_22 = 0; i_22 < 12; i_22 += 2) 
    {
        var_47 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_21 [i_22] [i_22] [i_22] [14ULL])), (min((((/* implicit */unsigned long long int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_22] [i_22] [i_22] [i_22])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_22] [(_Bool)1]))) + (arr_3 [i_22] [i_22] [i_22])))))));
        var_48 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_70 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])) * (((/* implicit */int) arr_70 [i_22] [i_22] [i_22] [i_22] [6ULL] [i_22] [i_22]))))) <= (min((((/* implicit */unsigned long long int) ((unsigned char) var_10))), (min((arr_30 [i_22] [i_22]), (((/* implicit */unsigned long long int) arr_23 [i_22] [i_22] [i_22]))))))));
    }
    var_49 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) var_16))))))), (var_13)));
}
