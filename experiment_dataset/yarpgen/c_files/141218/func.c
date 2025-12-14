/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141218
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((arr_1 [(unsigned short)17]) >> (((var_3) - (174135941U))))) | (var_1))))));
                    var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_2 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)3] [(unsigned short)3])))))))));
                }
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [5U] [i_1 + 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])))))));
                    var_13 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) (short)-10580)) ? (((/* implicit */unsigned int) -1267616729)) : (2437806612U)))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) ((var_9) <= (((/* implicit */long long int) var_5)))))))) ^ (((((/* implicit */_Bool) var_3)) ? ((-(2437806612U))) : (2437806597U)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) (unsigned char)55)) - (40)))))) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_4])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(short)17] [i_1])) ? (var_5) : (var_3)))))))));
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_16 -= ((/* implicit */unsigned int) var_6);
                            var_17 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]);
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) arr_2 [i_3] [i_5])) ? (arr_7 [17U]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) == (1857160699U))))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            var_20 = ((((/* implicit */_Bool) var_9)) ? (arr_12 [i_4]) : (arr_3 [i_0] [i_1]));
                            var_21 = ((/* implicit */_Bool) var_2);
                            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2437806597U) << (((((/* implicit */int) (unsigned short)6057)) - (6033)))))) ? (((/* implicit */int) ((var_6) == (((/* implicit */int) arr_8 [i_0]))))) : ((~(((/* implicit */int) (unsigned char)20))))));
                            arr_18 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
                        }
                        for (short i_7 = 3; i_7 < 15; i_7 += 3) 
                        {
                            var_23 = var_5;
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_1] [i_4] [i_7 + 4]) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 3655784777U)) <= (13634181224540134741ULL)));
                            arr_22 [i_0] [18U] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */long long int) ((/* implicit */int) ((1857160700U) >= (((/* implicit */unsigned int) -1521050944)))))) : (((((/* implicit */long long int) 52595829U)) * (0LL)))));
                            arr_23 [15U] [(unsigned short)8] [i_4] [1ULL] [(signed char)10] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned char)3] [i_1] [(unsigned char)3] [i_1 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_0] [5U] [i_3] [12U] [(short)15]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_3] [i_4] [(unsigned short)16]))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7 + 1])))));
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    var_26 -= ((/* implicit */unsigned char) max((((var_5) << (((arr_5 [i_0] [i_0] [i_8]) - (3248211960U))))), (((((/* implicit */_Bool) arr_21 [i_1] [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1] [i_1])) ? (var_3) : (arr_14 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [18U])))));
                    var_27 = ((/* implicit */short) arr_17 [(short)10] [(short)10] [(_Bool)1] [i_0] [1U] [i_0]);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_9] [16ULL] [(unsigned char)3]))) : (arr_24 [i_0] [i_0] [10LL] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))) : (arr_12 [i_9]));
                    /* LoopSeq 2 */
                    for (short i_10 = 4; i_10 < 18; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */_Bool) arr_3 [i_1] [3U])) ? (var_1) : (((/* implicit */unsigned int) arr_21 [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 4] [i_10 - 3]))))));
                        var_30 = ((/* implicit */unsigned char) var_2);
                    }
                    for (int i_11 = 4; i_11 < 18; i_11 += 3) 
                    {
                        var_31 *= ((/* implicit */unsigned char) ((_Bool) var_2));
                        var_32 = ((/* implicit */signed char) var_0);
                    }
                }
                arr_35 [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18598)))))) ? (((/* implicit */long long int) var_6)) : ((-(var_9)))))) ? (((((/* implicit */long long int) ((unsigned int) var_1))) & (var_9))) : (((/* implicit */long long int) (-(max((arr_24 [i_0] [(unsigned short)2] [i_0] [(unsigned short)17]), (((/* implicit */unsigned int) var_4)))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) + ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    var_34 = ((/* implicit */unsigned long long int) (((!(((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5))))) : (max((((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (var_6)))), (max((((/* implicit */unsigned int) var_8)), (var_1)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        arr_38 [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(_Bool)1])) ? (((/* implicit */int) arr_20 [i_12] [i_12] [i_12] [i_12] [i_12])) : (var_6)))) ? ((-(var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (3633944177U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9931)))))))) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_12] [9U])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_32 [(_Bool)0] [i_12] [i_12] [i_12]))))) ^ (var_3))))));
        arr_39 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_3 [i_12] [i_12])) + (((((/* implicit */long long int) max((((/* implicit */int) var_7)), (var_6)))) + (arr_37 [i_12])))));
        var_35 = ((/* implicit */unsigned char) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            for (unsigned int i_14 = 2; i_14 < 7; i_14 += 2) 
            {
                {
                    arr_45 [i_12] [i_13] [6U] [i_13] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) arr_2 [16U] [i_13])) : (((/* implicit */int) arr_36 [i_13] [i_14]))));
                    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_5))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 15; i_15 += 3) 
    {
        var_37 = ((/* implicit */unsigned int) arr_13 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]);
        var_38 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_28 [i_15]))))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        var_39 = ((/* implicit */int) min((var_39), ((-(((/* implicit */int) ((var_6) == (var_6))))))));
        var_40 = ((/* implicit */unsigned int) ((unsigned char) var_6));
    }
}
