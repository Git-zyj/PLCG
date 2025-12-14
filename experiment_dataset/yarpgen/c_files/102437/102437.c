/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((-1855830192 ? 20099 : var_3)) == ((-1855830184 ? 65535 : 0)))) ? ((~((80 ? var_12 : var_10)))) : var_8));
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_2 [i_1] [i_1]);
                var_18 &= 149;
                var_19 = ((+(((arr_0 [i_0]) ? var_11 : ((var_7 % (arr_2 [i_0] [11])))))));
                var_20 *= var_0;
                var_21 = (~(arr_1 [i_1]));
            }
        }
    }
    var_22 = (-90 + var_2);
    var_23 = (max(var_23, ((min(var_7, ((~(~var_13))))))));
    #pragma endscop
}
