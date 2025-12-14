/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((((642202815 ? 3509624351940286726 : var_17))) ? 240120052 : ((-2058 ? (((arr_4 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))) : (((737797354 ? 737797354 : 1))))))))));
                var_21 ^= (((642202833 ? (((642202833 ? 43607 : 1956161568))) : ((-737797360 ? -642202834 : -4003965545660625175)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_22 = (min(var_22, (((((((17910 ? var_18 : (arr_9 [i_3]))))) ? 62343 : (((((arr_11 [i_2] [i_3] [i_3] [i_2]) ? 4785 : var_4)))))))));
                    var_23 |= ((((-83 ? 1 : 0))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_24 ^= ((((((arr_7 [i_2]) ? 978605622 : (((-737797355 ? 4779 : 135)))))) ? (((((((arr_11 [i_6] [i_3] [i_3] [i_2]) ? var_7 : (arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) ? ((var_16 ? (arr_16 [i_2] [i_2] [i_2]) : 66060288)) : 5309132904144162043))) : 14320));
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((((arr_7 [i_3]) ? var_13 : var_11))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = 1;
    var_26 = (((((7700096865137039233 ? 10555104893795806723 : 642202815))) ? var_17 : ((var_5 ? var_4 : 737797354))));
    #pragma endscop
}
