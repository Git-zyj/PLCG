/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [14] [i_0] &= 16383;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 *= ((((((arr_2 [i_3 - 1]) ? (max(-6714296647413234079, (arr_9 [i_0] [i_1] [i_2] [22]))) : ((var_18 ? var_0 : (arr_2 [i_2])))))) ? ((2740534696 + (min(var_12, 6360280617036495122)))) : 5259872765560652555));
                            arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = (((((((var_2 ? var_7 : var_0))) ? (min(var_2, (arr_10 [11] [i_0] [21] [i_0] [21] [2]))) : -106)) == ((var_5 ? (min(3114894229254254827, 80)) : -6714296647413234098))));
                        }
                    }
                }
            }
        }
    }
    var_20 &= var_16;
    var_21 = (min(var_21, var_12));
    var_22 &= (max(((var_10 << (((-7815601718606245689 + 7815601718606245695) - 6)))), 9223372036854775797));
    #pragma endscop
}
