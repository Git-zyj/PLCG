/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 2332790406));
    var_15 ^= var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(((min((arr_0 [i_0]), (var_1 <= var_11)))), var_3));
        var_17 = ((~(((arr_0 [i_0]) ? 756688171 : (arr_0 [i_0])))));
        var_18 = ((((arr_1 [i_0]) == var_7)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    {
                        var_19 = min(((var_10 ? ((max(3538279125, var_12))) : (min(var_10, var_2)))), ((((arr_2 [i_4 - 3]) ? var_13 : var_10))));
                        var_20 += (((+(((arr_8 [i_1] [i_2] [i_4]) / 851540284336577989)))));
                    }
                }
            }
        }
        var_21 += (max(var_0, (((((arr_8 [7] [i_1] [i_1]) & (arr_7 [i_1]))) ^ (20784 & 2355844372)))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_22 ^= ((((((arr_12 [i_5]) ? (arr_15 [i_5] [i_5]) : (arr_15 [i_5] [i_5])))) ? (arr_15 [i_5] [i_5]) : (max((arr_15 [i_5] [i_5]), var_4))));
        var_23 |= (min((((((((arr_16 [i_5] [i_5]) + (arr_8 [i_5] [i_5] [6])))) ? (((-(arr_1 [i_5])))) : ((var_0 ? (arr_10 [i_5] [6] [i_5]) : 1962176890))))), ((((arr_2 [i_5]) == 0)))));
    }
    var_24 = (((min(((var_4 ? var_1 : 34)), var_7))) ? (min((var_13 & var_11), var_12)) : var_12);
    var_25 = min(var_5, var_4);
    #pragma endscop
}
