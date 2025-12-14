/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_0 - 2] [i_1] [i_1] [11] = ((var_10 < (84 >= var_6)));
                    var_12 = (max((min((arr_1 [i_0] [i_0]), (2147483647 || 14056895626066916455))), ((((arr_1 [i_2 + 3] [i_0 + 1]) || var_10)))));
                    var_13 = var_0;
                }
                arr_8 [i_0] [i_1] [i_1] = var_2;
                var_14 = (((3104119304 ? (arr_1 [i_0 - 2] [i_0 - 1]) : ((2694584004710449295 ? var_8 : (arr_5 [i_1]))))));
                var_15 = (max(var_15, (~var_10)));
            }
        }
    }
    var_16 = 65533;
    var_17 = var_6;
    var_18 = ((((max((((var_10 + 2147483647) >> (var_2 - 234))), ((min(var_10, var_0)))))) ? 14 : var_7));
    #pragma endscop
}
