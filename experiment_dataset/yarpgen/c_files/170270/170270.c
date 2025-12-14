/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = (!var_12);
                    arr_10 [i_0] [i_0] [i_0] = (var_7 * var_1);
                }
                var_20 &= ((-1 % ((var_18 ? 6151356550250045239 : var_14))));
                var_21 *= (-3 - -2615039884244923273);
                arr_11 [10] [i_1] = (((2 != -1) ? var_2 : (max(3758096384, (min(27671, var_10))))));
            }
        }
    }
    var_22 = max((min(((2143569341 ? -1021515845 : var_1)), var_8)), 37850);
    var_23 = (min(var_23, -var_11));
    #pragma endscop
}
