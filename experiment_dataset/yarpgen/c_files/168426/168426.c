/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_8 / var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_13 += (min(((var_1 - ((-(arr_0 [i_0]))))), var_10));
                arr_6 [i_0] = ((~(((arr_3 [i_1] [i_1 - 2] [i_0]) << (2147483647 || var_1)))));
                var_14 = (arr_1 [i_0]);
                var_15 = (max(var_15, (arr_0 [i_1])));
            }
        }
    }
    var_16 = ((-1 * (var_11 - var_11)));
    #pragma endscop
}
