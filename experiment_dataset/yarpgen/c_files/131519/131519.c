/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-var_11 ? ((min(((min(73, 45))), (var_3 / 42154)))) : 193));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((((min(29290, (~-9653)))) > ((197 ? 140600049401856 : -4267091439101468841))));
                arr_6 [i_0] [i_0] [i_0] = (arr_4 [i_0]);
            }
        }
    }
    var_21 = var_12;
    var_22 = (max((min(((max(var_16, var_2))), (max(-7578065163487120847, 2311890503276285193)))), (--197)));
    var_23 = ((((((var_0 ? var_7 : 42154))) ? var_5 : (((min(15272, var_1)))))) >> (((var_15 > var_4) ? (210 / 1085340369812617612) : var_1)));
    #pragma endscop
}
