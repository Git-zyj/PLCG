/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((2681347025 ? -26091 : 876063943));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (((((192 << (-1626 + 1646)))) ? (min((arr_2 [11]), 1879311040)) : ((max(var_13, (var_10 <= var_2))))));
                    var_21 = var_10;
                    arr_8 [i_0] [1] [i_0] [1] = 788425861;
                }
            }
        }
    }
    #pragma endscop
}
