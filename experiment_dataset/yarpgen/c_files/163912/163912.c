/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] |= (arr_5 [i_0] [i_1]);
                arr_7 [i_0] [i_1] = (max((min((((255742025 ? (arr_3 [i_0]) : var_0))), (arr_2 [i_0]))), 8));
                arr_8 [i_0] [i_0] [i_1] = ((((((min((arr_3 [i_0]), 3))) ? ((var_7 ? 255 : 235)) : 18446744073709551610)) == (((!(arr_0 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = (((((5 ? (arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3]) : 2))) ? (((((arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3]) && (arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3]))))) : (min((arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3]), (arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3])))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0]);
                            arr_15 [i_1] [i_1] [i_1] [i_1] = (min((((((max(var_1, 8024085349175427239))) || (234 && 2789364739)))), (((((251 ? 9223372036854775807 : 9227))) ? 28892 : 0))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = var_2;
                            arr_17 [i_0] [i_1] [i_3] [i_3] = 9;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
