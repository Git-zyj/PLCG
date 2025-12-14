/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149177
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-110)))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_4)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-118))))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-106)), (var_7)))))))));
        var_11 = ((/* implicit */unsigned int) max(((~(arr_0 [i_0]))), (((/* implicit */long long int) (short)-30705))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] |= ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1])) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)106)))))))) ^ (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2686300285U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (_Bool)1))))))))) - (arr_7 [i_0] [i_0]))))));
                            var_13 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) ^ (2686300281U)))), (((((/* implicit */_Bool) arr_9 [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_1]))) : (arr_13 [i_2] [(short)12] [i_2])))));
                        }
                    } 
                } 
            } 
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_3)) ? (arr_14 [i_1] [i_1] [(signed char)1] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_8 [5LL] [i_1] [i_1] [i_1])) ? (arr_11 [i_0] [i_1] [(_Bool)1] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_0]))))))));
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)931))))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((((/* implicit */short) arr_1 [i_0])), (var_3))), (((/* implicit */short) min(((signed char)-94), ((signed char)118)))))))));
            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (6939937742216371966ULL)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_7 [i_0] [i_5]))) : (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_5])))) : (((/* implicit */long long int) (+(((var_6) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_1)))))))));
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((unsigned char) (_Bool)1)));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */short) var_4);
                            arr_35 [i_0] [i_0] [i_7] [i_0] [0LL] &= var_7;
                            arr_36 [i_0] [i_6] [i_7 + 1] [(unsigned char)4] [i_8] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) max((arr_14 [i_8] [i_0] [i_7 + 2] [i_6] [i_8]), (((/* implicit */long long int) (unsigned char)19))))), (((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (arr_9 [i_0] [20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [20ULL]))))))), (((/* implicit */unsigned long long int) (signed char)-106))));
                            var_17 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_7 + 2] [(unsigned char)14] [i_7 - 1] [8LL])) ? (arr_13 [i_0] [i_7 + 1] [i_7 - 1]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_14 [i_0] [i_8] [(signed char)16] [(signed char)16] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))))))) >= (((/* implicit */unsigned long long int) arr_7 [i_9] [(_Bool)1]))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [i_0] [(short)5])) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_6] [(unsigned char)20] [i_6] [(unsigned char)20]))))) ? (((((/* implicit */int) arr_25 [i_6])) ^ (((/* implicit */int) arr_15 [i_0] [i_6] [i_6] [i_6] [i_6])))) : ((~(((/* implicit */int) (_Bool)1))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_6] [i_6] [i_6] [i_6])) ^ (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((arr_11 [i_0] [i_0] [i_0] [i_0]) >> (((arr_0 [i_6]) - (7415326098659283811LL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                for (unsigned short i_11 = 1; i_11 < 21; i_11 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_12 = 2; i_12 < 23; i_12 += 4) 
                        {
                            var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((long long int) (short)-28239)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0])) ? (arr_32 [i_11 - 1] [i_6] [(unsigned char)20] [i_11] [i_12]) : (arr_24 [i_0])))) : (((((/* implicit */_Bool) (unsigned short)65520)) ? (arr_9 [i_6] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                            var_21 ^= ((/* implicit */short) arr_5 [i_0] [i_0]);
                            arr_45 [i_12] [i_11] [i_10] [i_0] [i_0] = ((/* implicit */long long int) max((((unsigned long long int) ((((/* implicit */int) arr_22 [i_0] [i_0])) << (((arr_8 [i_6] [i_6] [i_0] [i_6]) - (2671945891U)))))), (((/* implicit */unsigned long long int) min((4294967040U), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_40 [i_11]))))))))));
                        }
                        for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                        {
                            arr_48 [i_0] [i_6] [i_0] [i_0] [i_6] [i_11] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)117))));
                            var_22 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_13] [i_6]))))) ^ (arr_9 [i_0] [i_0])))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_41 [i_0] [i_6] [i_10] [i_11 + 2])) ? (((/* implicit */int) arr_38 [i_11 + 3])) : (((/* implicit */int) arr_25 [i_11 - 1]))))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                        {
                            var_24 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 4294967053U))))));
                            var_25 *= ((/* implicit */unsigned char) (~(3547840460U)));
                        }
                        for (signed char i_15 = 1; i_15 < 24; i_15 += 1) 
                        {
                            var_26 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (1608667036U)));
                            var_27 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_50 [i_6]))));
                            var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_46 [18LL] [i_6]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_11 + 4] [i_15 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))))));
                            var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_11 + 2] [i_6] [i_10] [i_11 + 2] [i_0])) ? (arr_32 [i_0] [i_6] [i_6] [i_6] [i_0]) : (((/* implicit */long long int) arr_42 [i_0] [i_6] [(short)21] [i_11] [i_6] [i_15 + 1]))))) ? ((~(((((/* implicit */_Bool) (signed char)-62)) ? (14908081963485042081ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-62)) ? (261U) : (1608667012U))), (((/* implicit */unsigned int) var_4)))))));
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) max((((((/* implicit */_Bool) (((_Bool)1) ? (1608667039U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) min(((short)-24398), (((/* implicit */short) (signed char)-110))))) : (((/* implicit */int) (unsigned short)44287)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(8315328396933397120LL))))))))))));
        }
    }
    for (signed char i_16 = 0; i_16 < 14; i_16 += 4) 
    {
        arr_55 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_37 [21LL] [i_16] [i_16] [i_16]))))) : (arr_0 [24LL])));
        var_31 *= ((/* implicit */signed char) min((((long long int) arr_27 [i_16] [i_16] [i_16])), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) var_3))))) && (((/* implicit */_Bool) var_8)))))));
    }
}
