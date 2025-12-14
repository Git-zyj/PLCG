/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_8 & (max(var_14, (~-1816845637))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [18] = ((max((arr_4 [i_1 - 2] [i_1 - 2]), (arr_3 [i_1 - 3] [i_1] [i_1 + 3]))) << ((((-(arr_5 [i_1 + 1]))) - 1705861119)));
                arr_7 [i_0] [i_0] [i_0] = (1933766353 ? 1816845636 : -1);
                arr_8 [i_0] [i_0] = 1501888474;
                var_20 |= (((!(var_2 & 385941390))) ? (max(-385941381, (-2147483647 - 1))) : (min((max(var_9, var_16)), (arr_0 [i_1 - 2]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_18 [13] [i_1] [i_1] = arr_0 [i_0];
                                var_21 = (~(arr_17 [i_4] [i_2] [i_1]));
                                var_22 = (~((+(((arr_4 [i_4] [i_3]) + -1042984543)))));
                                var_23 = min((((-2147483647 - 1) | 787093913)), (arr_10 [i_3] [i_2] [i_1] [i_0]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (((((1164045397 ? var_14 : -1555683276))) || ((max(var_8, (max(1816845636, var_12)))))));
    #pragma endscop
}
