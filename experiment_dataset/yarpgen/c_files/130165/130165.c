/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_8 <= var_1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_0;
        var_20 = (min((((arr_0 [i_0]) ? ((min(1, var_1))) : (1 ^ 1))), ((((arr_1 [i_0] [i_0]) == (arr_0 [i_0]))))));
    }
    var_21 = ((~((min(var_4, var_9)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_22 -= ((~((((arr_2 [i_1]) < -var_7)))));
                var_23 = (min(var_23, ((((arr_4 [1]) - ((min(1, var_4))))))));

                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    arr_10 [i_2] [i_3] = (((((1 ^ (arr_4 [i_2])))) ? ((min(1, var_1))) : var_11));
                    var_24 &= ((min((!var_3), (var_2 || var_14))) && ((min(((-(arr_0 [i_1]))), ((var_11 ? 0 : 1))))));
                }
            }
        }
    }
    #pragma endscop
}
