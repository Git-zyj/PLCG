/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_12;
                var_15 = (max(((((max(var_3, (-127 - 1)))) && (arr_0 [i_0]))), ((!(112 || 618187214)))));
                arr_7 [i_0] [i_1] = (((478249253787030902 ? ((0 ? -11 : 966134120)) : (((max(255, 7168)))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (arr_8 [i_0] [i_2]);
                                var_17 = var_7;
                                var_18 = (max(var_18, 40276));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((var_14 > ((40291 ? 966134120 : 0))))) + (-2053447441 & 49)));
    var_20 = var_8;
    #pragma endscop
}
