/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103072
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
    var_18 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) var_7);
                    arr_9 [i_0] [(signed char)10] [i_0] [i_1] = ((9223372036854775807LL) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))) : (var_13)))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) var_14))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */int) 4294967295U);
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1U) : (arr_11 [i_0])))) ? (min((((/* implicit */unsigned long long int) var_8)), (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) ? (max((((/* implicit */unsigned long long int) ((4294967295U) | (arr_11 [i_4])))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_16)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) var_3))))), (4294967286U)))));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_3] [3U] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_1] [i_2]))) ? (((((/* implicit */_Bool) (unsigned short)38473)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))))) : (((unsigned long long int) var_14))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = (((!((!(((/* implicit */_Bool) (signed char)86)))))) ? (var_13) : (1ULL));
}
