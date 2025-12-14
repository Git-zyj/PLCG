/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((var_7 ? var_10 : var_7))) ? (var_12 / 1759883154) : -var_9)) / -var_13));
    var_15 = ((var_12 ^ (((var_6 ? var_2 : ((var_2 ? var_10 : var_0)))))));
    var_16 = (min(var_16, (((((-1759883154 < (-7015803408649307821 - var_3))) ? (!var_11) : (max((!-7), ((var_6 ? var_3 : 1759883154)))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((min(1807628254, 25354))))));
        var_17 = (((arr_0 [i_0] [i_0]) & var_7));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] = var_1;
                        var_18 = (min(((-(min(var_10, (arr_7 [i_0]))))), (arr_3 [i_0])));
                    }
                }
            }
        }
    }
    var_19 = ((~(min((~var_1), ((var_2 ? var_13 : var_5))))));
    #pragma endscop
}
