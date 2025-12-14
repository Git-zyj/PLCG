/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176293
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (min((min((((/* implicit */unsigned long long int) ((int) (signed char)42))), (((((/* implicit */unsigned long long int) var_3)) ^ (var_9))))), (((/* implicit */unsigned long long int) var_6))))));
    var_11 ^= ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (-1LL) : (((((/* implicit */_Bool) 4294967295ULL)) ? (-1077317532473512188LL) : (((/* implicit */long long int) 902540025U)))))))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 4; i_4 < 12; i_4 += 3) 
                            {
                                var_13 = ((/* implicit */short) arr_4 [i_4 - 1] [i_4 - 1] [i_4 + 1]);
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (max((((/* implicit */int) var_6)), (-759219952))) : ((~(((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967295U))))))))));
                                var_15 += ((((/* implicit */_Bool) 25ULL)) ? (25ULL) : (((/* implicit */unsigned long long int) 3392427239U)));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                            {
                                var_16 = arr_15 [i_3] [i_1] [i_2] [i_0 - 2] [i_5];
                                var_17 = min((20ULL), (((/* implicit */unsigned long long int) 765684384U)));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) - (2840652304634963088LL)))) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)2))));
                                arr_19 [i_0 - 2] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((3185506836397705507ULL) >> (((((/* implicit */int) (signed char)121)) - (67)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (arr_18 [i_0 - 2] [i_3 + 1] [i_3] [i_3 + 1] [i_3]) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_6))))))));
                                var_19 = ((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_0]);
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                            {
                                var_20 += ((/* implicit */unsigned long long int) var_4);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17383)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1])))));
            }
        } 
    } 
}
