/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (var_1 ^ var_8);
    var_20 = var_8;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = -1709921879515675070;
        var_21 = ((var_5 ? ((~(arr_0 [i_0 + 1] [i_0 - 1]))) : ((((((((arr_0 [i_0] [i_0]) - 1))) && (var_5 + var_3)))))));
        arr_4 [1] |= (((max(((1709921879515675069 ? 1156028483012517872 : 10102142862876716677)), ((min(1, (arr_1 [i_0 - 1] [i_0])))))) >> (((((-26325 >= 1939253306) ? ((1 ? 1709921879515675089 : -1709921879515675085)) : -1043802386)) + 1043802407))));
        var_22 = (max(4294967295, 61));
    }
    #pragma endscop
}
