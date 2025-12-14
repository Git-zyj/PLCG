/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = (max(var_7, ((15 ? 0 : (~1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 |= ((((max(12, (arr_2 [i_1 + 2])))) + (arr_2 [i_1 - 4])));
                            var_13 = 247;
                            var_14 = ((0 ? 255 : (!2)));
                        }
                    }
                }
                arr_12 [i_0 + 3] [i_1] [i_0] = arr_3 [i_0 - 2] [i_1];
                var_15 += arr_11 [i_0] [3] [9] [i_0 - 2] [i_1];
            }
        }
    }
    #pragma endscop
}
