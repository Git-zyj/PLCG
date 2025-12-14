/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (arr_5 [i_1]);
                var_14 &= var_12;
                var_15 = ((~((~((804294657 ? var_4 : 3490672639))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] [i_1] [i_0] = (((-2147483647 - 1) ? 41218316 : -1852057111));
                            arr_12 [i_3 + 1] [i_2] [i_1] [i_0] &= var_11;
                            var_16 &= ((~(~var_3)));
                        }
                    }
                }
                var_17 = (min(var_17, ((((((var_12 > (min(var_9, var_6))))) <= (arr_5 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            {
                var_18 += ((!(((32761 ? var_4 : ((2147483628 ? var_1 : 3816656957)))))));
                var_19 |= 3839227281;
                var_20 |= var_8;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_21 = (-(max((!455739996), ((var_7 ? var_0 : var_0)))));
                            var_22 = ((1110488051 ? ((-(max(436191494, 13797710721769909143)))) : ((min(var_8, (!var_11))))));
                            var_23 = (max(((216 ? (!3828391325) : (min(1110488045, 8191)))), ((max(0, 0)))));
                            var_24 ^= ((!((((~15332477) / (arr_3 [i_5 - 1]))))));
                        }
                    }
                }
                arr_25 [i_4] = ((!(((-(arr_8 [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 2]))))));
            }
        }
    }
    var_25 = (max(var_25, (!var_5)));
    #pragma endscop
}
