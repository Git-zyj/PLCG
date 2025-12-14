/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((2975084657667660620 ? ((((min(-2975084657667660620, var_11))) ? ((-396481599 ? 22 : 18446744073709551596)) : (arr_2 [i_1]))) : -12634170115779586782));
                arr_6 [i_0] [i_1 - 2] = (((((~(arr_0 [i_1] [i_1 + 1])))) & ((var_6 ? 32757 : 131071))));
            }
        }
    }
    var_16 = var_11;
    var_17 = (((((var_2 ? var_1 : var_11))) ? var_2 : (((max(var_8, (min(-32758, 0))))))));
    #pragma endscop
}
