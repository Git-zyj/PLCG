/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((4274119856 * ((-(arr_2 [i_0 - 3] [i_0 - 2])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((((((arr_3 [i_0 + 2] [i_0 - 3]) - (arr_3 [i_0 + 1] [i_0 + 2])))) ? (arr_3 [i_0 + 3] [i_0 - 3]) : 14726)))));
                                var_13 = (((((arr_0 [i_0 + 3]) + 2147483647)) << (((-127 == (arr_0 [i_0 + 2]))))));
                                var_14 -= var_4;
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [8] = ((((((arr_2 [1] [i_0 + 3]) ? (arr_3 [i_4] [i_3]) : (((arr_1 [6]) / var_0))))) ? 42769 : ((((((arr_8 [i_0 - 3] [i_0 + 3] [i_0] [11]) + (arr_7 [i_0 - 2] [i_2] [i_3] [i_4])))) / var_3))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
