/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((max(var_3, var_12))))), (((min(var_2, var_5)) / (var_4 * 13838)))));
    var_20 = var_17;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_21 ^= (min(var_4, ((~(arr_1 [16])))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_22 = arr_0 [1];
        var_23 = 13821;
        var_24 = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_25 += ((~((((arr_0 [i_1]) >= -100)))));
        var_26 = 13822;
        var_27 = (((max(var_8, (arr_3 [i_1]))) >= (((((11 ? 38857 : (arr_1 [i_1])))) ? (arr_3 [i_1]) : (((arr_4 [15] [i_1]) ? 43 : 3234473335))))));
        arr_6 [i_1] [i_1] = ((!(1060493960 == var_11)));
    }
    var_28 = var_18;
    var_29 = (!var_14);
    #pragma endscop
}
