/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (max(((~(arr_9 [12] [i_1] [12]))), ((((arr_6 [i_0] [i_1] [i_2 - 3] [i_2 - 3]) && (arr_9 [i_0] [i_0] [i_2]))))));
                    var_14 = 18446744073709551611;
                    var_15 = ((((((arr_4 [i_1]) << (var_4 - 18591)))) ? (((((arr_0 [i_0] [i_0]) ? var_2 : 5)) ^ -13698822457155009726)) : (arr_0 [i_1] [i_1])));
                    var_16 = ((((4747921616554541901 << (var_4 + 847820690)))));
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
