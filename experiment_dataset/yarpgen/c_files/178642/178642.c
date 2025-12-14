/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (65535 + 2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0 + 1] [i_0] [i_1] = (arr_1 [i_0]);
                var_11 = ((((var_0 | (max((arr_3 [i_0] [3]), (arr_5 [i_1] [i_0])))))) ? (max(((65535 ? 14178729244654162578 : 0)), ((2 ? -8830688273465233210 : 4)))) : (max(var_4, 2737232160)));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = ((((18446744073709551594 ? 18446744073709551609 : -1)) ^ (~4)));
                                arr_18 [11] [i_0] [i_2] [i_0] [i_0] = ((~((((((var_2 ? var_2 : (arr_8 [5] [i_3] [i_1] [i_1]))) + 2147483647)) << (((var_0 && 8119040897993945749) - 1))))));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_1] = (min(((-0 ? (((arr_15 [i_0] [1] [i_0] [i_0]) + (arr_3 [i_0] [i_1]))) : (max(var_8, (arr_3 [i_1] [5]))))), ((((((var_1 / (arr_9 [i_0] [i_0] [8] [i_1])))) ? 11320 : ((36 ? (arr_5 [i_0] [i_0]) : -6)))))));
            }
        }
    }
    #pragma endscop
}
