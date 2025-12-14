/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((2220247453 ? (-1 + 919) : -13625)), ((max((min((arr_2 [7]), (arr_7 [i_0] [i_0] [i_2] [i_3]))), 64612)))));
                                var_15 &= (arr_4 [i_0] [i_1] [i_4]);
                            }
                        }
                    }
                    arr_15 [i_0] = var_5;
                }
            }
        }
    }
    var_16 ^= var_5;
    var_17 = var_8;
    var_18 = (min(var_18, var_2));
    #pragma endscop
}
