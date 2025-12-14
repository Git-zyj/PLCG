/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144020
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
    var_11 |= ((((/* implicit */_Bool) -1LL)) ? (5U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) (short)-15282))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 *= ((arr_3 [i_0 - 1]) >= (((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)93))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) min(((~(var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 + 1])) ? (var_1) : (arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_1 + 1] [2] [i_1]))))));
                            var_14 = ((/* implicit */int) arr_3 [2LL]);
                        }
                    } 
                } 
                var_15 = max(((+(((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) (signed char)-119)));
            }
        } 
    } 
}
