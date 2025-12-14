/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103283
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
    var_15 = ((/* implicit */signed char) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (unsigned char)111))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) 6034742323181292133ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) || (((/* implicit */_Bool) var_11))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))))) && (((/* implicit */_Bool) var_13))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    arr_6 [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_5 [i_2 - 3] [i_1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_5 [i_2 - 2] [i_1] [i_0 + 1] [10])));
                    var_18 = ((/* implicit */short) arr_4 [i_2] [i_2] [i_2] [i_2]);
                    var_19 = ((/* implicit */unsigned char) arr_0 [3ULL] [i_2]);
                }
                for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    var_20 = ((/* implicit */short) (signed char)-101);
                    arr_9 [i_0] [(unsigned char)21] = max((6034742323181292133ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20130)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (unsigned char)111))))) ? (((/* implicit */int) ((_Bool) arr_3 [i_0] [8ULL]))) : (max((((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) arr_3 [i_3] [i_3])))), (((int) var_10))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((max((((((/* implicit */int) var_5)) * (((/* implicit */int) var_11)))), ((+(((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] [21ULL] [i_5])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_0])), (var_4)))) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])) : (((/* implicit */int) max((arr_8 [i_0]), (arr_2 [i_0] [i_1])))))))))));
                                arr_16 [i_5] [i_4] [i_3] [6ULL] [i_0] = ((/* implicit */unsigned short) max((max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 1]))), (((arr_8 [i_0 + 1]) && (arr_8 [i_0 + 1])))));
                                var_22 = ((/* implicit */_Bool) arr_1 [i_0 - 1]);
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) >= (((/* implicit */int) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12)))) ^ (((var_4) & (var_8))))));
}
