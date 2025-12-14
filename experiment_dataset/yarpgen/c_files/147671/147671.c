/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4440761537195313677;
    var_17 = (((~35209) ? 33815 : (((((30308 ? 59487 : var_13))) ? (((min(var_13, var_14)))) : var_8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 ^= (((-2147483647 - 1) | (arr_1 [i_0])));
        var_19 = (min(var_19, (((~(arr_0 [i_0]))))));
        var_20 = (((arr_1 [i_0]) ? ((((arr_0 [i_0]) ? 4080 : 57362))) : -var_15));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (max(var_21, 12860232256157194875));
        var_22 = ((!(((~(arr_2 [i_1]))))));
        var_23 *= (!61102);
        var_24 = (((((-(arr_3 [i_1])))) ? var_8 : (((-(var_9 - var_9))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_25 = (((arr_5 [i_2] [i_2]) ? var_8 : (arr_5 [i_2] [i_2])));
        var_26 ^= ((!(!var_11)));
    }
    var_27 = var_8;
    var_28 *= ((((min((96 >= var_2), (min(var_12, 400238561892917897))))) ? (~var_5) : (((-(min(-97, 3434226972)))))));
    #pragma endscop
}
