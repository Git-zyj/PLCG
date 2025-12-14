/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113480
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) var_10);
                arr_4 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (11484576461923619493ULL)))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)54130)) - (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)54116))))) : (min((((/* implicit */long long int) arr_3 [i_0])), (arr_2 [(_Bool)1] [i_0] [(short)15])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                arr_10 [i_2] [11LL] [i_2] = ((/* implicit */unsigned short) arr_7 [i_2 + 1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    arr_15 [3ULL] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)122)) || (((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_4])))))) & (((((var_1) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned short)0))))));
                    var_12 = ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) (short)(-32767 - 1))) : ((~(((/* implicit */int) var_9)))));
                    arr_16 [i_2] [i_3 + 1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54130)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [(signed char)4] [i_3]))))) : ((((_Bool)1) ? (2505206935510958547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    var_13 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned short)54145))));
                }
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        for (int i_7 = 3; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 1343765930)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)0))))));
                                var_15 = ((/* implicit */signed char) (((((_Bool)0) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_9)))) - (max((((/* implicit */int) arr_21 [i_6] [i_2] [i_2] [7])), ((+(((/* implicit */int) arr_9 [i_2] [i_7]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 19; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 18; i_9 += 4) 
                        {
                            {
                                arr_28 [i_2] [i_3] [1U] [i_3] [i_3] = ((/* implicit */unsigned int) 18446744073709551599ULL);
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_1 [i_2] [i_2 + 1]), (arr_1 [i_2] [i_2 + 1])))) + ((+(((/* implicit */int) arr_1 [i_2] [i_2 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        arr_31 [i_2] [i_10] = ((/* implicit */unsigned short) ((arr_26 [(_Bool)1] [i_5] [i_3 + 1]) * (arr_26 [i_3 + 1] [i_10] [i_3 + 1])));
                        var_17 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_2 + 1] [i_3] [i_3 + 1] [i_10] [i_10]))));
                        arr_32 [(unsigned short)17] [(unsigned short)17] [i_2] = arr_12 [i_2] [i_3] [i_5];
                    }
                    for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) (~(((long long int) (unsigned char)151))));
                        var_19 = ((((/* implicit */_Bool) ((arr_3 [i_2 - 1]) ? (((/* implicit */int) arr_3 [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 - 1]))))) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)11406)))))));
                        arr_36 [(signed char)8] [15] [11ULL] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) * (max((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_5]))))), (((var_2) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_20 += ((/* implicit */_Bool) arr_8 [i_12] [i_12] [i_12]);
                        var_21 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)116))))));
                    }
                    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 3) 
                    {
                        var_22 = ((/* implicit */int) (unsigned char)151);
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            arr_44 [17LL] [i_2] = ((/* implicit */unsigned char) var_6);
                            var_23 = ((/* implicit */short) (_Bool)1);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_48 [i_2] [i_2] [i_5] = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) max((arr_23 [i_2] [i_3 + 1] [i_3 + 1] [i_5] [i_13 + 2] [1LL]), (((((/* implicit */_Bool) arr_34 [i_5] [(short)11] [(unsigned char)15] [i_13 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_33 [(unsigned short)13] [i_3 + 1] [i_5] [(signed char)18] [i_2])) >> (((((/* implicit */int) arr_41 [(short)16] [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_2])) - (10315)))))) : (max((-7176475421698380802LL), (((/* implicit */long long int) var_0))))))))) : (((/* implicit */unsigned int) max((arr_23 [i_2] [i_3 + 1] [i_3 + 1] [i_5] [i_13 + 2] [1LL]), (((((/* implicit */_Bool) arr_34 [i_5] [(short)11] [(unsigned char)15] [i_13 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_33 [(unsigned short)13] [i_3 + 1] [i_5] [(signed char)18] [i_2])) >> (((((((/* implicit */int) arr_41 [(short)16] [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_2])) - (10315))) - (43954)))))) : (max((-7176475421698380802LL), (((/* implicit */long long int) var_0)))))))));
                            var_24 = ((/* implicit */unsigned int) arr_18 [i_2]);
                        }
                        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2056677298)) ? (((/* implicit */int) arr_3 [i_2])) : (arr_8 [i_2] [i_2] [(unsigned char)12]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (arr_7 [i_2])))));
                        var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) || (((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (-2147483646)))) != (var_8)))));
                    }
                }
                var_27 = ((/* implicit */long long int) (unsigned char)170);
            }
        } 
    } 
}
