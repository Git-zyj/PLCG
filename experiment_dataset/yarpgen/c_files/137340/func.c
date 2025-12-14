/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137340
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
    var_18 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (var_5))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))))), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */_Bool) var_0);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    var_20 = ((long long int) arr_0 [i_0 + 2]);
                    arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((var_17) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 + 3] [21ULL])) * (((/* implicit */int) var_7)))))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_22 -= ((((/* implicit */_Bool) 6248785481989482709LL)) ? (4611686018427387903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-5580781421164810468LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))))))));
                    arr_11 [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_10) : (var_10)));
                }
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_19 [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) var_15);
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])))) ? (var_9) : (min((arr_1 [i_0 + 2]), (((/* implicit */long long int) var_8)))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_15 [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) var_16);
                    arr_21 [i_0 + 2] [i_4] &= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_17)) : (var_11)))) ? (((/* implicit */int) (short)22053)) : (((/* implicit */int) var_3))))));
                }
                var_25 -= (+(((((/* implicit */_Bool) arr_16 [(short)0] [i_1 + 1] [i_1 + 1] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4842))) : (var_9)))))));
            }
        } 
    } 
}
