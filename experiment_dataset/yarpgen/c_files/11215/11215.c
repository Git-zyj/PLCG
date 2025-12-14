/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((var_3 | (((var_0 || var_14) * (min(var_6, -2147483630))))))));
                var_16 = (((max(((8167 ? var_12 : 8149)), (var_1 ^ var_10)))) ? (max(-770965196, (arr_2 [i_0]))) : (((var_12 && var_1) ? (arr_4 [i_0 + 1]) : -2147483631)));
                var_17 ^= ((+((((arr_4 [i_0 + 1]) && (arr_4 [i_0 + 1]))))));
                var_18 = ((((~((-2147483618 ? -2147483631 : var_3)))) + -2147483628));
            }
        }
    }
    var_19 = (((max(2147483615, 2147483630))) ? ((-2147483618 ? var_4 : 3024425039)) : 1969393387);
    #pragma endscop
}
