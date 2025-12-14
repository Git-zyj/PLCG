/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [3] [i_2] = (((~(arr_6 [i_2] [9]))));
                    var_12 = (min(var_12, (((!(arr_0 [i_0] [i_2]))))));
                }
            }
        }
    }
    var_13 = ((((((((25 ? var_11 : var_6))) ? 2806193194 : var_4))) ? ((max(-3116307023631008548, 1962))) : (((((min(76, 1)))) - (max(var_9, 18446744073709551596))))));
    var_14 = var_10;
    #pragma endscop
}
