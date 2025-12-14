/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 ? var_0 : ((16 ^ (min(var_10, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((((((1922411371 << (((((-2147483647 - 1) - -2147483645)) + 16)))))) ? (~-97) : (((!(((1409182107 << (((((arr_0 [i_0] [i_1]) + 1128134116)) - 10))))))))));
                arr_4 [i_0] = 45;
            }
        }
    }
    var_16 = 1944285493;
    #pragma endscop
}
