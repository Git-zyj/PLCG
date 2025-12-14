/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (var_1 ? (((~var_3) ? (min(var_11, 5781164442034820552)) : (max(var_3, (arr_2 [i_0 + 1]))))) : ((var_8 * (8714599841895684630 / 8714599841895684630))));
        arr_4 [i_0] &= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (~var_12);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_13 -= (((arr_9 [i_3] [i_3]) > 41));
                        var_14 = var_3;
                        var_15 += (min((min(-5781164442034820552, ((-1059552944203853852 ? -9223372036854775806 : var_0)))), (((((max(var_6, var_4))) ? 50 : (arr_13 [i_1] [i_3] [i_1]))))));
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = var_3;
                    }
                }
            }
        }
        arr_19 [i_1] = (min((max((((arr_12 [i_1]) >> (255752076321910570 - 255752076321910562))), ((max(41, var_11))))), -1597747740));
    }
    var_16 = ((var_0 % (((5781164442034820552 * var_8) | var_10))));
    #pragma endscop
}
