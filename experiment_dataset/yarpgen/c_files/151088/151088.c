/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 += var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = (max(var_20, var_3));
            var_21 = (((min(var_9, 51852))) / ((-5 & (max(8248972931605763025, -2656520671447999034)))));

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_22 = var_5;
                var_23 = (max(var_23, (((!((((!2656520671447999051) ? (((arr_1 [i_2 + 1] [9]) ? 37429 : var_4)) : var_7))))))));
            }
            var_24 = (max((max(36064, (arr_9 [i_0] [i_1] [i_1]))), (arr_5 [i_0] [i_0] [i_0])));
        }
        var_25 += (min(36072, var_0));
    }
    var_26 *= (!var_11);
    #pragma endscop
}
