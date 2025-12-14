/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (!var_2);
    var_16 &= var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (max(var_17, -0));
        arr_2 [i_0] = arr_0 [2];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (var_14 >= var_6);
                    arr_9 [3] = (max(((((min((arr_4 [i_2]), (arr_5 [16] [i_1 + 1] [2])))) ? var_9 : var_11)), (((min(-7424113097891301500, -473900332532199081))))));
                    var_19 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
        arr_10 [i_0] [i_0] = 36227;
    }
    var_20 -= var_10;
    #pragma endscop
}
