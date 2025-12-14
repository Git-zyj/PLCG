/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_10 ^= (arr_0 [i_0 + 3]);
                                var_11 = 5479720115212659631;
                            }
                        }
                    }
                    var_12 = ((((((arr_4 [20] [i_0] [i_2]) ? (var_3 / var_2) : (arr_9 [i_0 + 3] [i_0 - 1] [i_0 + 1])))) ? ((min((min(-409952304, 1)), 23873))) : (min(3542233908801268221, -4184961364690854216))));
                    var_13 = (min(((2477107378 ? 3542233908801268221 : (arr_0 [i_2]))), (arr_4 [i_2] [i_2] [i_2])));
                    var_14 = (arr_5 [i_0] [i_0] [21]);
                    var_15 = (min(var_2, (min(var_9, (!14)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            {
                arr_22 [i_6] [i_6 - 1] = (min(var_8, (((var_9 < (arr_4 [i_6 + 1] [i_5 + 1] [i_5 + 1]))))));
                arr_23 [11] [i_6] [i_6 + 1] = var_6;
            }
        }
    }
    #pragma endscop
}
