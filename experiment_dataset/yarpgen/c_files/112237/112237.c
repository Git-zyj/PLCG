/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max((!68), 56)))));
    var_19 = (var_8 | (max(var_8, var_1)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_20 = ((!((((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 1]) : var_16)))));
            arr_5 [i_1] [i_1] = ((((max(var_5, var_9))) ? 95 : (max(var_13, (-18856 - 95)))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_21 += ((~(95 + 18839)));
            arr_9 [i_0] [i_2] [i_2] = ((-(-58 == var_12)));
        }
        var_22 = 96;
        arr_10 [i_0] = ((!((min(var_3, (arr_1 [i_0]))))));
        arr_11 [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
