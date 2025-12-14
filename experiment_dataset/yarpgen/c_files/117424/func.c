/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117424
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
    var_12 = (-(((/* implicit */int) var_9)));
    var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (575334852396580864LL)))) ? (min((575334852396580864LL), (((/* implicit */long long int) (short)-20)))) : (((575334852396580870LL) ^ (((/* implicit */long long int) var_1))))))));
    var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) 4294967295U)))) : (max((((/* implicit */unsigned long long int) var_9)), (var_8)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_9);
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [1LL] [1LL]);
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((arr_1 [i_1]), (((/* implicit */unsigned int) 268435455))))))) ? (arr_1 [(unsigned char)8]) : (arr_1 [i_1])));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_3 = 2; i_3 < 7; i_3 += 1) 
            {
                var_16 *= ((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_1]);
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) arr_1 [i_1])) == (arr_11 [i_1] [i_2] [i_1])))), (((((/* implicit */_Bool) arr_8 [2ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_12 [6] [6] [6])))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [2]))))), (max((arr_1 [i_3]), (((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1] [i_3 + 1]))))))) : ((((-(arr_7 [i_1] [8U]))) | (((/* implicit */long long int) (~(var_1)))))))))));
                arr_13 [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((arr_8 [i_2]), (arr_8 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((((long long int) arr_6 [i_1])), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))))))));
                var_18 *= ((/* implicit */unsigned short) (+((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_11 [i_1] [i_2] [i_3 + 2]))) ^ (((9223372036854775790LL) ^ (arr_7 [i_1] [(signed char)0])))))));
            }
            for (unsigned short i_4 = 3; i_4 < 8; i_4 += 1) 
            {
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_7)))) ? (((int) arr_14 [i_4 + 2] [i_2] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [5ULL])))) <= (((/* implicit */int) ((short) arr_6 [i_1])))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 7; i_6 += 1) 
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((min((arr_0 [i_1] [i_1]), (min((((/* implicit */long long int) (signed char)126)), (arr_7 [i_1] [i_1]))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_0))))))));
                        var_20 += ((/* implicit */unsigned short) 16383LL);
                        var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)248)), (max((((/* implicit */long long int) min((268435455), (((/* implicit */int) arr_5 [i_1]))))), (min((arr_0 [i_1] [i_2]), (((/* implicit */long long int) arr_21 [i_4 + 2]))))))));
                        arr_25 [i_5] [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) ((short) (~(var_8))));
                        arr_26 [i_6 + 1] [i_1] [i_4] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)113)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_11 [(unsigned short)3] [i_4] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_15 [i_2] [5] [5] [i_6])))) && (((/* implicit */_Bool) max((arr_18 [i_1] [i_1] [i_4] [i_4 + 1] [i_1] [i_4 - 2]), (((/* implicit */unsigned int) (unsigned short)1))))))))) : (max(((~(-9223372036854775790LL))), (((/* implicit */long long int) arr_10 [i_6] [i_4] [i_1] [i_1])))));
                    }
                    arr_27 [3LL] [i_2] [i_4] [3LL] [i_1] [i_1] = ((/* implicit */unsigned short) min((((var_6) & (min((arr_7 [i_1] [i_1]), (((/* implicit */long long int) arr_5 [i_1])))))), (((((/* implicit */_Bool) max((-12LL), (arr_8 [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [(unsigned short)8] [i_5]))) | (var_1)))) : (((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_1])))))))));
                    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_2] [i_4] [i_4] [i_4 - 3]))))), (((arr_15 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_4 - 1])))))));
                    var_23 = ((/* implicit */long long int) arr_21 [i_1]);
                }
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [6ULL])) ? (arr_8 [i_2]) : (min(((+(arr_12 [4ULL] [i_2] [i_4]))), ((-(arr_17 [8ULL]))))))))));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_11 [i_1] [i_4 - 1] [i_2]))))))))))));
            }
            for (unsigned int i_7 = 3; i_7 < 8; i_7 += 1) 
            {
                arr_31 [i_1] [i_2] [i_1] [1ULL] = ((/* implicit */long long int) (~(((/* implicit */int) max(((!(((/* implicit */_Bool) arr_28 [i_2] [i_2])))), (((((/* implicit */int) arr_9 [i_2] [i_2] [i_7 - 1])) != (((/* implicit */int) (signed char)6)))))))));
                var_26 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned int) (unsigned short)65535)), (arr_18 [i_1] [(short)3] [i_7 + 2] [i_7] [i_7 + 2] [(unsigned char)7]))) >> (((((((/* implicit */_Bool) arr_21 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_7 + 2] [(unsigned short)2] [(unsigned short)2])))) - (37911))))) == (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)65527)))) | (((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_1] [i_2] [i_7])), ((signed char)-4)))))))));
            }
            arr_32 [i_1] [i_1] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_2]))))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_30 [i_1] [i_1] [i_1])))), (((/* implicit */int) (!(((arr_12 [i_1] [i_2] [i_1]) >= (arr_11 [i_2] [i_1] [i_1]))))))));
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned long long int) ((long long int) max(((signed char)0), (((/* implicit */signed char) var_11)))))))));
        }
        arr_33 [i_1] [i_1] = ((/* implicit */unsigned short) (~(max((max((8ULL), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [(unsigned char)3])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])))))))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_1])) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_1 [6U]) : (arr_18 [(unsigned short)4] [i_1] [(unsigned short)8] [(unsigned short)4] [6] [(unsigned short)4]))))))) ? (((/* implicit */unsigned long long int) max((arr_8 [i_1]), (((/* implicit */long long int) ((unsigned char) arr_9 [5LL] [5LL] [i_1])))))) : (max((max((0ULL), (((/* implicit */unsigned long long int) arr_12 [6ULL] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((long long int) arr_19 [i_1] [i_1] [(signed char)0]))))))))));
    }
    for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        arr_36 [i_8] = ((/* implicit */unsigned short) (((-(((arr_35 [i_8]) + (((/* implicit */long long int) arr_34 [i_8])))))) > (((/* implicit */long long int) 0U))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_8])) ? (((((/* implicit */_Bool) min((arr_35 [i_8]), (((/* implicit */long long int) 4294967292U))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (arr_35 [i_8]) : (arr_35 [(short)18]))) : (max((arr_35 [i_8]), (((/* implicit */long long int) arr_34 [i_8])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_34 [i_8]), (((/* implicit */unsigned int) 1))))) ? (((((/* implicit */_Bool) 4294967285U)) ? (arr_34 [i_8]) : (arr_34 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_8])) || (((/* implicit */_Bool) var_5)))))))))));
        var_30 = ((/* implicit */unsigned int) ((short) ((((arr_35 [i_8]) + (9223372036854775807LL))) >> (((arr_35 [i_8]) + (2467802789826932170LL))))));
        arr_37 [i_8] = ((/* implicit */int) min((((/* implicit */unsigned long long int) -12LL)), (((((/* implicit */_Bool) ((unsigned long long int) 4294967292U))) ? (((unsigned long long int) var_7)) : (((var_8) * (((/* implicit */unsigned long long int) 0LL))))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_41 [i_9] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_34 [i_9])), (arr_40 [i_9])))) == (arr_39 [i_9]))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_38 [i_9]), (arr_38 [i_9]))))) > (((arr_39 [i_9]) + (var_7)))))));
        var_31 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_35 [i_9])) ? (((/* implicit */long long int) arr_34 [i_9])) : (arr_40 [i_9])))));
        arr_42 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((short) max((max((18446744073709551613ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32750))) + (arr_40 [i_9])))))));
    }
    var_32 = ((((/* implicit */_Bool) ((unsigned int) (~(var_6))))) ? (var_7) : (var_8));
}
