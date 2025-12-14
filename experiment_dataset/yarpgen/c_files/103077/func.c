/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103077
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 &= ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0 - 1])))) >> ((((+(((((/* implicit */_Bool) 7773164902539024970ULL)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [(signed char)2])))))) - (4169742871U))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) 3436202990U);
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_0] [i_0 - 1])) ? (arr_9 [i_2 - 1] [i_2 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30027))))) ^ (((/* implicit */unsigned long long int) var_16))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] = max((((((/* implicit */unsigned int) ((/* implicit */int) ((136622806U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 2] [(signed char)13] [i_1] [i_1]))))))) / (arr_11 [i_0 + 2] [i_1] [i_1]))), (min((max((((/* implicit */unsigned int) var_0)), (arr_0 [i_0]))), (((unsigned int) 891996005U)))));
                arr_13 [i_0] &= ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_16))))));
    var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) % (var_16));
    var_24 ^= var_11;
}
