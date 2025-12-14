/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((((max((((-2147483647 - 1) & 128)), ((max(var_0, 104)))))) ? -2147483621 : 151));
                arr_6 [20] [i_1] [i_1] = (-2147483635 / var_12);
                arr_7 [i_1] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = (max(-10928, var_2));
                            var_22 = 2147483647;
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, (((!((max(var_5, 2147483643))))))));
    #pragma endscop
}
