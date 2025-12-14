/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((((-65155765 > (min(-8442553141772952063, 32767))))) <= var_12)))));
    var_15 = 162;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (max(var_16, (!0)));
        arr_4 [i_0] = 17;
        var_17 = 1459603683;
        arr_5 [i_0] = (var_10 <= var_12);
        arr_6 [i_0] = 1;
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                arr_13 [i_2] [10] = 8;
                var_18 ^= (!((min(14, 288230376151187456))));
                arr_14 [i_2] [i_1] = var_8;
                arr_15 [i_1 + 1] = -3761829806;
            }
        }
    }
    #pragma endscop
}
