/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_11));
    var_21 = (max(var_21, (((-(3565576055442608765 < var_11))))));
    var_22 = 3;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_23 = ((3565576055442608764 * (!19)));
        arr_2 [i_0] = ((-1601133005 ? 4294967295 : 4294967283));
        var_24 -= (arr_0 [4]);
        var_25 = (min(var_25, (3565576055442608755 != 74)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_26 = var_13;
        var_27 = 253;
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_28 = (min(var_28, (((var_3 > ((((arr_7 [i_2 - 2]) >> (var_5 - 1263840259)))))))));
        var_29 = (-3565576055442608769 == 3901511309340909422);
        arr_8 [i_2] = (arr_1 [1]);
    }
    #pragma endscop
}
