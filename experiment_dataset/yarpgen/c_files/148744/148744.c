/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] |= ((!(((18098 ? -1673088388 : (((47410 ? var_1 : 196))))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1] = ((!(((18098 ? (arr_0 [i_1 - 3] [i_1]) : (arr_0 [i_1 - 3] [i_1]))))));
                    var_16 = (max((((arr_2 [i_1 + 1] [i_1 - 2] [i_1 + 2]) ? 47421 : (min(2161727821137838080, 47410)))), (arr_0 [9] [i_2])));
                    arr_9 [i_0] [i_0] [i_0] = (!0);
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    var_17 = (((((var_7 ? (((21322 ? var_2 : var_12))) : ((var_8 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0])))))) ? ((max((var_6 > var_12), ((-21324 ? var_13 : var_3))))) : (max((arr_10 [i_0] [i_0]), 0))));
                    var_18 = (-2147483636 % 1);
                }
                var_19 = ((((((arr_11 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1]) ? ((5 ? var_9 : var_13)) : (arr_12 [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 + 3])))) | 205));
                var_20 = var_4;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_5] = var_4;
                arr_20 [5] = (arr_1 [4]);
            }
        }
    }
    #pragma endscop
}
