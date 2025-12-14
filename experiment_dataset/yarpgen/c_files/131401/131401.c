/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = (!18446744073709551609);
                var_12 = var_2;
                var_13 += ((((834946379 ? -834946373 : var_8)) >= (max(10974138625718261125, (arr_1 [i_0])))));
            }
        }
    }
    var_14 = 834946366;
    #pragma endscop
}
