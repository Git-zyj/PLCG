/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max((42481 | 0), (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = var_2;
        arr_4 [i_0] = (((((var_0 ? var_11 : var_5))) ? 1 : (max((arr_1 [i_0] [i_0]), ((1 ? 2148150764 : 6844409308349916252))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_19 = (min(var_19, ((((arr_5 [i_1 + 2]) ? 1 : 0)))));
        arr_7 [i_1] [i_1] = 170;

        /* vectorizable */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_20 = (~var_4);
            var_21 = (min(var_21, var_8));
            var_22 *= (((var_10 >= var_17) << (-8 + 38)));

            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                var_23 &= ((((1 ? 170 : -619628559)) != 1));
                var_24 = var_5;
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_25 = (!var_4);
                var_26 = ((1 ? 16153663693340374803 : (arr_11 [i_1 + 2] [i_1 + 2] [i_2 + 1] [i_2 - 1])));
                arr_17 [i_1] [i_1] [i_2] [i_1] = (arr_9 [i_1 + 1] [i_1 + 2]);
                arr_18 [i_1] [i_2] [i_4] = (~191);
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                arr_22 [i_1] [i_5] [i_5] [i_1] = 3512782138740184572;
                var_27 = (var_5 && var_13);
            }
        }
    }
    var_28 = (max(var_28, var_17));
    var_29 += var_6;
    var_30 ^= var_7;
    #pragma endscop
}
