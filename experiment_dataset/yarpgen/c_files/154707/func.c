/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154707
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
    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_17)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_8)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_19 += ((/* implicit */_Bool) var_16);
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) : (6ULL));
    }
    for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_20 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) (unsigned short)42195))), (((((/* implicit */_Bool) (short)24090)) ? (((/* implicit */int) (unsigned short)23341)) : (((/* implicit */int) (short)-30228))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max(((unsigned short)42173), ((unsigned short)28332))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_2] [(unsigned char)0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_4 [i_2]))))) : (arr_6 [i_2 + 1]))))));
        var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_4 [1ULL])) : (((/* implicit */int) arr_1 [i_2]))))) && (((/* implicit */_Bool) arr_7 [i_2 - 3])));
    }
    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            for (short i_5 = 3; i_5 < 9; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    {
                        var_24 = min(((unsigned short)28332), (((/* implicit */unsigned short) (_Bool)1)));
                        var_25 *= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_17 [i_5 - 1] [i_3 - 1])) : (((/* implicit */int) arr_17 [i_5 - 1] [i_3 - 1])))), (((/* implicit */int) (_Bool)1))));
                        var_26 += ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3 + 1] [(signed char)2]))) : (13920374840505637206ULL))), (((/* implicit */unsigned long long int) arr_11 [i_6] [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_5 - 1] [8ULL])), (var_16)))) ? (((/* implicit */int) ((unsigned short) 6ULL))) : (((/* implicit */int) arr_15 [i_6] [8U] [i_3] [i_6])))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)42217)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_28 = ((/* implicit */short) ((((/* implicit */int) ((arr_10 [i_3 - 3]) > (arr_10 [i_3 + 1])))) >> (((((((/* implicit */_Bool) var_7)) ? (arr_10 [i_3 - 3]) : (arr_10 [i_3 - 3]))) - (1245693681371687154ULL)))));
        var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551613ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)255)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((var_8), (((/* implicit */unsigned int) (unsigned short)8850))))))) : (arr_9 [i_3] [i_3])));
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            arr_21 [8] = ((/* implicit */unsigned char) ((int) (((-(((/* implicit */int) (unsigned short)21048)))) * (((/* implicit */int) (_Bool)1)))));
            var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((arr_18 [i_3] [i_3] [i_3] [i_3]) + (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned short) arr_20 [i_3 + 1])))))));
            var_31 = ((/* implicit */unsigned long long int) min(((unsigned short)615), (((/* implicit */unsigned short) (unsigned char)79))));
        }
        for (signed char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_18 [i_3] [i_3 - 1] [i_3] [i_8])) ? (((/* implicit */int) arr_17 [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) arr_16 [i_3 - 2] [i_3 - 3] [i_8])))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) arr_0 [1ULL] [i_8])) : (((/* implicit */int) arr_11 [i_3] [i_8]))))))));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 3; i_10 < 10; i_10 += 3) 
                {
                    var_33 = ((/* implicit */unsigned short) var_3);
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_10 - 3] [i_10] [i_10 + 1] [i_10] [i_10 + 1]))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((13920374840505637206ULL) - (13920374840505637190ULL)))))), (9115893666473194993ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_9] [i_11]))) < (arr_32 [i_9] [i_10] [i_9] [(_Bool)1] [(short)9] [i_3] [i_9])))) >> (((((/* implicit */int) var_1)) - (6))))))));
                        var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551604ULL), (((/* implicit */unsigned long long int) (signed char)41))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned long long int) (unsigned short)65515)), (arr_6 [i_9])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551598ULL)))) ? (max((4011666603591733261LL), (((/* implicit */long long int) (short)-4)))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (arr_4 [i_8])))))))) : (min((((/* implicit */unsigned long long int) (short)3)), (5233564185763518245ULL))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) 6ULL))), (((((/* implicit */_Bool) 1402940581)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4)))))))) ? (((((/* implicit */unsigned long long int) (+(431695398)))) - (((((/* implicit */_Bool) (unsigned short)25837)) ? (arr_6 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11] [i_9])))));
                        arr_34 [i_3] [i_8] [i_9] [i_8] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_15 [i_10 - 1] [i_10 - 3] [i_10 - 1] [i_10 - 1])), (arr_30 [i_10 - 2] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 2])))) ? (((((/* implicit */_Bool) max((var_0), (((/* implicit */short) (_Bool)0))))) ? (arr_10 [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9] [i_9]))))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_8 [i_3 - 2] [i_8])), (var_13))), (((/* implicit */long long int) var_0)))))));
                    }
                    var_37 &= ((/* implicit */unsigned char) ((arr_32 [(unsigned short)10] [i_9] [8LL] [(unsigned short)10] [i_9] [i_9] [i_3]) / (((min((((/* implicit */unsigned long long int) (unsigned char)128)), (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) (-(arr_13 [i_3] [i_8]))))))));
                    var_38 = ((/* implicit */short) arr_15 [i_3 - 3] [i_3 - 3] [i_9] [i_10]);
                }
                arr_35 [i_9] = ((/* implicit */unsigned char) -983506318);
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)185)) ^ (-184589360)));
            }
        }
        for (signed char i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22204)) ? (-1834651085) : (((/* implicit */int) arr_7 [i_3 - 2]))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_40 [i_13] [i_13] = ((/* implicit */signed char) arr_31 [i_3] [i_12] [i_13] [i_12] [i_12] [(unsigned char)4] [(unsigned char)4]);
                arr_41 [i_13] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_20 [i_3 - 3]))), (((((/* implicit */int) arr_7 [i_3 - 1])) + (((/* implicit */int) arr_8 [i_3] [i_12]))))));
                var_41 = ((/* implicit */signed char) (unsigned short)15295);
                var_42 = ((/* implicit */unsigned char) arr_18 [i_3 - 3] [i_12] [(short)5] [(short)5]);
            }
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                var_43 = ((/* implicit */int) min((3648139035U), (((/* implicit */unsigned int) 1402401566))));
                arr_45 [i_3] [7ULL] = ((/* implicit */short) arr_36 [i_3 - 1] [i_3 + 1] [i_3 - 2]);
                /* LoopNest 2 */
                for (unsigned short i_15 = 1; i_15 < 7; i_15 += 4) 
                {
                    for (long long int i_16 = 2; i_16 < 8; i_16 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_36 [i_15 - 1] [i_15 + 1] [i_3 - 1])) ? (((/* implicit */int) (!(arr_0 [(unsigned char)0] [i_12])))) : (((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [i_3 - 3]))))))));
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)44203)) || (((/* implicit */_Bool) (unsigned char)167))));
                        }
                    } 
                } 
                arr_52 [i_3] [i_3 + 1] [i_12] [i_14] = ((/* implicit */_Bool) 4011666603591733254LL);
            }
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_10 [i_3 - 2])))) ? (min((((/* implicit */unsigned long long int) arr_28 [i_3] [i_3] [i_3 + 1] [i_3 - 3] [i_3 - 3] [i_3])), (arr_10 [i_3 + 1]))) : (((arr_10 [i_3 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            var_47 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)44202)));
        }
    }
}
