/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 *= (((((!((max(-12104, var_6)))))) & (0 * -26695)));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_14 = var_5;
                    arr_7 [i_0] [i_0] = ((-125 ? (((26695 ? 26694 : 1531447545))) : (67108863 ^ 1)));
                    var_15 = 1531447531;
                    var_16 = (min(var_16, ((((((26700 ? var_6 : 2))) ? var_0 : ((var_4 ? var_12 : -17871)))))));
                    var_17 &= var_2;
                }
                arr_8 [i_0] = (((max(var_8, var_12))));
                var_18 = (((((((min(1, var_12))) - (~455037072)))) ? (((((22736 ? var_5 : var_7)) + ((min(var_5, var_0)))))) : 1272438016055476438));
            }
        }
    }
    var_19 = 1;
    #pragma endscop
}
