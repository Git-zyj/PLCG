/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15876
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
    var_18 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) var_7)))));
    var_19 |= ((/* implicit */long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4965702U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45386))) : (-1LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((max((1273744778), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_2 [11U] [i_3])))))), (((/* implicit */int) arr_0 [i_3]))));
                            var_20 *= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((arr_4 [9LL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_0 - 2]))) : (0LL)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 2] [i_3] [i_2]))))));
                            arr_11 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_16 [i_4] [i_4 + 1] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_5 [i_0] [7LL])))), (((((/* implicit */int) arr_4 [i_1])) << (((/* implicit */int) var_9))))))) ? ((~((-(4539628424389459968ULL))))) : (((/* implicit */unsigned long long int) ((int) 3252677552995923844ULL)))));
                            arr_17 [i_0] [9ULL] = ((/* implicit */int) min((max((0U), (((/* implicit */unsigned int) (signed char)99)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_9 [i_0] [i_1] [i_4] [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
