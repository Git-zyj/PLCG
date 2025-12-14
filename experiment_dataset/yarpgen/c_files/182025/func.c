/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182025
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
    var_10 ^= ((/* implicit */_Bool) min((748524085U), (1919713103U)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))));
                    var_12 = (!(((/* implicit */_Bool) ((unsigned int) var_9))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_7))))), (((int) var_8)))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (short i_6 = 2; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_9))));
                            arr_20 [i_3] [i_4] [(short)13] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (2375254192U)))) && (((/* implicit */_Bool) arr_2 [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_4]), (var_2))))) : (((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) 493326515U)) : (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (arr_6 [i_4] [i_5])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
