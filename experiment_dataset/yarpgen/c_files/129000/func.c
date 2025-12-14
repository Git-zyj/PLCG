/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129000
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */unsigned int) var_8);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 268435452ULL))))), (min((18446744073441116162ULL), (18446744073441116184ULL)))))) ? ((+(arr_3 [i_2 - 2] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))) : (arr_4 [i_1 + 3])))));
                    var_13 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (((268435431ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) <= (((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) 268435452ULL);
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (int i_5 = 3; i_5 < 18; i_5 += 4) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] &= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [17LL])) || (((/* implicit */_Bool) arr_8 [i_3]))))), (arr_13 [i_5 - 2] [i_5 + 1] [i_5 - 1]))), (268435452ULL)));
                    arr_17 [i_5] [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) 268435431ULL)) ? (((/* implicit */int) (unsigned short)40855)) : (((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_2))))))), (((/* implicit */int) arr_12 [i_3]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_7);
}
