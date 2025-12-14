/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (max(((((max(var_7, var_7))) ? var_7 : var_2)), (max(((max(var_7, var_6))), (max(var_2, var_5))))));
    var_16 = (max(15284, 8456599136737982197));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [14] = (max(((max(((((arr_7 [i_0] [i_1]) < (arr_3 [14] [14])))), (arr_2 [7])))), (arr_5 [i_1])));
                    var_17 = var_1;
                    var_18 = (min((arr_2 [i_1]), (max((arr_7 [i_0] [i_1]), var_5))));
                    var_19 = (arr_1 [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
