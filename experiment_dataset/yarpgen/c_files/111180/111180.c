/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((min(7, var_8)) >= var_5))) * var_1));
    var_19 = (min(var_19, (var_12 != var_12)));
    var_20 = (min(var_20, var_17));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = var_10;
            var_21 = var_14;
            arr_7 [i_1] = (((arr_0 [i_0] [i_1]) - var_0));
            var_22 &= ((arr_2 [i_0] [i_1]) ? 0 : (arr_2 [i_0] [i_1]));
        }
        var_23 -= 17578;
    }
    var_24 = 94;
    #pragma endscop
}
