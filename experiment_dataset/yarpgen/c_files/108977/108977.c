/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-var_2 | 7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [8] [i_0] [8] [1] = var_18;
                    var_20 = (max(var_20, var_11));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] = var_9;
                        arr_13 [i_3] [i_3] [i_3 - 1] [i_0] [i_3 - 1] = (max(((-1839433086 ? 1863563958 : (2046 & -29))), var_8));
                    }
                }
            }
        }
    }
    #pragma endscop
}
