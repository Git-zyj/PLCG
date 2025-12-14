/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_1 ? var_0 : var_9))) ? (min(var_3, (var_9 ^ var_4))) : var_3));
    var_11 = (max(((max(var_9, (min(var_2, var_2))))), ((var_6 ? ((var_5 ? var_6 : var_4)) : (((max(var_2, var_1))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (min((min(var_6, var_0)), var_0));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                var_13 = (!var_2);
                var_14 = (max(var_14, var_5));
            }
            arr_9 [i_1] = var_5;
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_15 = var_1;
            arr_12 [i_3] = var_9;
            var_16 = (min(var_16, (!var_4)));
            var_17 = var_1;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_16 [i_0] = (min((max((((var_3 ? var_8 : var_8))), var_9)), (((!(!var_1))))));
            var_18 |= var_8;
            var_19 |= var_4;
        }
    }
    var_20 = (min(var_20, (((min((!var_7), var_8))))));
    #pragma endscop
}
