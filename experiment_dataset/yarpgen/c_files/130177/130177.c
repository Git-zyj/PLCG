/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_6);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (((-(min(149, var_0)))) % (((min(149, var_7)))));
        var_20 = var_6;
        var_21 = (min((((var_15 >= (!var_10)))), 149));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_22 = ((!((!(!106)))));
                arr_7 [14] [i_1] = ((!((!((min(141, var_1)))))));
                arr_8 [9] [i_1] = ((!(-32767 - 1)));
            }
            arr_9 [i_0] &= var_3;
        }
    }
    #pragma endscop
}
