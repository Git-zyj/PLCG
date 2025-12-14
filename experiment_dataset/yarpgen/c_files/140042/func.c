/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140042
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
    var_10 &= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (var_3))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)71)) || (((/* implicit */_Bool) (signed char)24)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_5)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)16))))) : (max((var_1), (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))));
        arr_3 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)-2))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
    }
    for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) (+(var_0))));
            var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_8 [i_1 - 3] [i_2])) == (arr_5 [i_2] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (arr_5 [i_1] [16U]))))));
            var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((404788107), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) arr_5 [i_1] [i_2])) : (36028659580010496LL)))) ? (arr_5 [i_2] [i_1]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-2)) | (((/* implicit */int) (unsigned char)0))))) < (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_6) : (((/* implicit */unsigned long long int) var_8)))))))));
            var_14 = ((/* implicit */unsigned long long int) arr_10 [i_1 + 2] [i_1 - 4] [i_1 - 3]);
        }
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_4 = 3; i_4 < 20; i_4 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_7 [i_4 + 1]))));
                var_16 = ((/* implicit */signed char) ((arr_13 [i_1 - 4] [i_3] [i_4]) <= (arr_13 [i_1 - 2] [i_3] [i_1 + 2])));
            }
            for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_6 = 2; i_6 < 19; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        arr_29 [i_7] [i_5] [i_3] = ((/* implicit */unsigned char) arr_14 [i_7 - 1] [i_7] [i_5 - 1]);
                        arr_30 [i_1] [(unsigned char)12] [i_1] [i_5 - 1] [i_6] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2508318786U)) ? (((/* implicit */unsigned int) var_2)) : (arr_9 [i_5 + 1])));
                        var_17 = ((/* implicit */signed char) ((var_4) % (((/* implicit */unsigned long long int) arr_19 [i_1 - 3] [i_7 - 1]))));
                        arr_31 [i_7] [i_1] [i_5] [i_1] [i_5] [20ULL] [i_1] = ((/* implicit */unsigned short) var_3);
                    }
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_2)))) ? (var_2) : (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) (signed char)69))))));
                    arr_32 [i_5] [i_5] = ((/* implicit */_Bool) var_0);
                }
                var_19 *= ((/* implicit */unsigned char) var_9);
            }
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                arr_36 [i_1] [(unsigned short)8] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) arr_33 [(unsigned short)0] [5ULL] [i_1 - 3]))), (((long long int) var_0))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        {
                            arr_42 [i_9] [i_9] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_1 + 2] [i_8] [i_8])))))) <= (((((/* implicit */_Bool) var_4)) ? (arr_35 [(signed char)8] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))))))) ? (var_8) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 16158785459007903369ULL)) ? (((/* implicit */int) (unsigned short)41186)) : (((/* implicit */int) (unsigned short)45516)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                            var_20 = ((/* implicit */unsigned int) var_2);
                            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [5ULL] [5ULL]))) != (var_4)))) << (((var_0) + (719212113)))));
                            arr_43 [i_10] [i_10] [i_10] [i_10] [(unsigned short)3] [i_9] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) 8930896362792949067LL)))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((var_6) >> (((arr_33 [i_3] [i_3] [(unsigned char)15]) + (1822667018))))))) ? ((~(((/* implicit */int) arr_28 [i_1] [i_10] [i_10] [i_9] [i_10] [i_10] [i_9])))) : (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (signed char)-17)))))))));
                        }
                    } 
                } 
                arr_44 [i_1] [i_3] [i_8] [i_8] = ((/* implicit */short) (((((!((_Bool)0))) || (((/* implicit */_Bool) var_7)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 131008)) ? (-8930896362792949068LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16913))))))));
            }
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -130997)))))))))) >= (5688465055292189881ULL)));
            arr_45 [i_1] |= ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */int) arr_24 [(unsigned short)8] [(unsigned short)8] [i_3] [(unsigned short)8] [(unsigned short)8] [i_3])) % (var_2))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 + 2]))))))));
            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) ^ (var_1)))))))));
            /* LoopNest 2 */
            for (long long int i_11 = 3; i_11 < 20; i_11 += 3) 
            {
                for (unsigned char i_12 = 2; i_12 < 20; i_12 += 4) 
                {
                    {
                        arr_52 [i_12] [i_12] [i_12] [i_12] [i_11] = ((/* implicit */signed char) max(((-(1204037108))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_3] [i_11] [i_12])) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) arr_40 [i_1] [i_1] [i_1] [i_11] [i_1]))))) >= (var_4))))));
                        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1261883256)))))) : ((-(var_1)))))) : (min((((/* implicit */unsigned long long int) min((arr_20 [i_12 - 1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) (_Bool)0))))), (var_5)))));
                        arr_53 [i_1] [i_1] [i_12] [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) max(((short)8188), (((/* implicit */short) arr_7 [i_12]))))), (((1098091518) << (((((var_0) + (719212098))) - (6)))))))) >= (((unsigned long long int) arr_25 [i_11 - 3] [i_1 - 1] [i_1 - 1]))));
                    }
                } 
            } 
        }
        arr_54 [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_1 + 2] [i_1 - 1] [i_1])) - (((/* implicit */int) arr_6 [i_1 - 2]))))) || (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) 1261883256)), (var_3))) << (((((((/* implicit */_Bool) 2U)) ? (-36028659580010491LL) : (((/* implicit */long long int) -1)))) + (36028659580010496LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_13 = 1; i_13 < 20; i_13 += 1) 
        {
            var_26 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2040498868U))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1 - 1] [i_1 - 4]))) + (arr_26 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1])))) || (((/* implicit */_Bool) arr_41 [i_13 - 1])))))));
            var_28 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)125));
            arr_58 [i_1] [i_1] [i_13] = ((/* implicit */unsigned short) ((var_0) & (var_2)));
        }
    }
}
