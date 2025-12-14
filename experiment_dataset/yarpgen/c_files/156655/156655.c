/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (((((max(2057546542, 1)))) ? var_11 : 3737863674));
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (((var_17 ? (arr_0 [i_0] [i_0]) : var_6)) < var_15);
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
