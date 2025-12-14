/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, 18446744073709551610));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [18] [i_4] [i_2] [i_4] &= ((!((((var_2 + 9223372036854775807) << ((((75940009 ? 65 : 8298726979824355682)) - 65)))))));
                                var_20 = ((65 ? 29527 : 1));
                                var_21 = ((~((((arr_9 [i_0] [i_0]) && (arr_9 [i_0] [i_3]))))));
                                var_22 = (arr_5 [i_4]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] = ((((!(arr_10 [i_0] [i_1] [i_2] [i_2]))) ? (((arr_10 [i_0] [i_0] [i_1] [i_2]) + (arr_10 [i_0] [i_2] [i_2] [i_2]))) : (~65)));
                    arr_14 [i_0] [i_1] [i_2] = (min(-100, (min((-1863657795 || var_11), ((1 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_1] [i_1])))))));
                }
            }
        }
    }
    var_23 &= (1 + (min(75, (max(var_6, var_3)))));
    var_24 = (!28026);
    var_25 = 1499546883;
    #pragma endscop
}
