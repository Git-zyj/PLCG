/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150356
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((268435456LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2921284734U) : (1373682573U))))))) / (((((unsigned long long int) arr_4 [(short)11])) - (((((/* implicit */_Bool) arr_4 [(signed char)0])) ? (10814270719862334675ULL) : (((/* implicit */unsigned long long int) 268435459LL)))))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(arr_3 [i_0]))) & (arr_3 [i_0])));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0 - 1]))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 2] [i_3])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_2 - 1] [i_4])) : (((/* implicit */int) arr_9 [i_0] [i_2 - 2] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_3] [i_4])) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
                                var_12 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_2 - 1] [i_3 + 2]))) & (arr_8 [i_0])))), (((arr_1 [i_0 - 1] [i_0]) >> (((((/* implicit */int) arr_0 [i_0])) - (68)))))))) : (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_2 - 1] [i_3 + 2]))) & (arr_8 [i_0])))), (((arr_1 [i_0 - 1] [i_0]) >> (((((((/* implicit */int) arr_0 [i_0])) - (68))) - (140))))))));
                            }
                        } 
                    } 
                    var_13 *= ((/* implicit */unsigned short) (+((+(((/* implicit */int) (_Bool)0))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_0 - 1] [i_0 - 1] [i_2 - 2]), (arr_9 [i_0 - 1] [i_0 - 1] [i_2 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_2 - 2])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_2 + 1])))))));
                    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4016))) + (2921284734U)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 2]))) : (var_6))) : (((/* implicit */unsigned int) ((888678401) ^ (((/* implicit */int) arr_7 [i_0])))))))) ? (max((((long long int) 9223372036854775807LL)), (((((/* implicit */_Bool) (short)-4016)) ? (arr_3 [(signed char)2]) : (((/* implicit */long long int) 536868864U)))))) : (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (2094515963714993508LL) : (arr_8 [6U]))) / (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0] [i_1] [i_1] [6LL])) ? (var_1) : (arr_8 [2ULL])))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_8 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)28)), (arr_6 [i_0] [i_1] [18LL]))) >= (((((/* implicit */_Bool) var_5)) ? (var_9) : (arr_6 [i_0] [i_1] [i_2]))))))) : (((unsigned long long int) min((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1])), (2483074368182678135ULL))))));
                }
                arr_12 [i_0 - 1] [i_0 - 1] [i_0] = ((long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_2 [i_0]))) ? (max((((/* implicit */unsigned long long int) (unsigned short)8)), (arr_1 [i_0] [i_0]))) : ((~(arr_2 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((short) var_9))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_6)) : (var_1)))))), (min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 705817833995311729LL)) : (15890261542835134910ULL)))))));
}
