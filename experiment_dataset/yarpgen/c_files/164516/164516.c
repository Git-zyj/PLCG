/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 2482159906;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, (((!(1233144151 ^ 18446744073709551615))))));
                            var_12 = 228;
                            var_13 = (((((-var_8 ? (arr_7 [i_3] [i_2 + 2] [i_1] [i_0] [i_0]) : -var_2))) ? var_3 : (arr_6 [i_0] [i_2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_14 = max((((arr_10 [i_1] [0]) - (((max(var_1, var_1)))))), var_9);
                            arr_14 [i_0] [i_0] [i_1] [i_1] [9] [i_5] = ((1 ^ (((arr_1 [i_1 + 2]) ? (arr_1 [i_1 + 2]) : (arr_9 [i_1])))));
                            var_15 = (((((-(((arr_6 [i_0] [i_0]) - 1))))) ? ((-882659698 ? 1 : 4294967285)) : 2147483647));
                            arr_15 [i_0] [i_1] [i_1] [i_4] [i_0] [i_5] = 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
