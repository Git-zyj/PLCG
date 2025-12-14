/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((min((var_5 & 176), (695095643 & var_9)))), (min((max(3638303806, -695095643)), (var_1 - var_2)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_14 = (arr_3 [i_1 + 1] [i_0 + 1]);
            var_15 &= (!1);
            arr_7 [i_1] [i_1] = ((98 ? 2147483647 : 44));
            arr_8 [i_1] = (arr_0 [i_0]);
            var_16 = ((222 == (arr_3 [i_0 + 2] [i_0 - 1])));
        }
        var_17 = var_4;
        var_18 = (((((arr_1 [i_0] [i_0]) + (min(var_5, (arr_4 [i_0] [i_0]))))) / ((((arr_5 [i_0 - 2] [i_0 + 2] [i_0]) + ((-(arr_0 [i_0]))))))));
    }
    var_19 = ((!(~var_11)));
    var_20 |= var_10;
    var_21 = ((~((~(min(var_11, var_8))))));
    #pragma endscop
}
