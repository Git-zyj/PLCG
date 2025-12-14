/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106884
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_4 + 1] [i_0] [i_4] [i_4] [i_4 - 1])))) && (((/* implicit */_Bool) max((arr_4 [i_1 - 1]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)30)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_1] [5] = (i_1 % 2 == zero) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1] [i_1 - 1] [(short)3])) % (((arr_3 [i_0] [i_1]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [5]))))))), (arr_8 [i_1] [i_0] [i_1 - 1] [i_0] [1LL] [(unsigned short)3]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1] [i_1 - 1] [(short)3])) * (((arr_3 [i_0] [i_1]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [5]))))))), (arr_8 [i_1] [i_0] [i_1 - 1] [i_0] [1LL] [(unsigned short)3])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((int) (-(min((var_5), (var_4))))));
}
