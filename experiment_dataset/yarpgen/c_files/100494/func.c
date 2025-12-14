/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100494
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 += ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))), (((var_6) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_9 [i_2] [i_1] [3LL] [(short)9] [i_1] [i_1] = ((/* implicit */_Bool) (~(min((arr_1 [i_1 + 1] [i_1]), (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((arr_0 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_0])))) ? (min((4294967295U), (22U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))) : (min((arr_8 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_2] [i_1 + 1] [i_0])) : (arr_6 [(_Bool)1] [i_1] [i_2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_4])), (((arr_12 [i_5 - 1] [i_5 + 1]) ^ (((unsigned long long int) arr_0 [(signed char)14]))))));
                                var_20 ^= ((/* implicit */signed char) var_0);
                                var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_4] [i_4])) >> (((18446744073709551615ULL) - (18446744073709551601ULL)))))) ? (((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_3 [i_4])))) : (((33776997205278720ULL) / (((/* implicit */unsigned long long int) var_3)))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) (~(min((7269742956950002625ULL), (((/* implicit */unsigned long long int) 23U))))));
            }
        } 
    } 
}
