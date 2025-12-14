/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 -= 34;
        var_21 = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 692047639))) ? (arr_1 [i_0] [i_0]) : (~779015099)));
        arr_2 [i_0] = (-43 ? (arr_0 [i_0] [i_0]) : ((~(arr_0 [i_0] [i_0]))));
        var_22 &= -26;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 -= (((var_7 & 1) ^ (((var_12 ? 50354 : 1)))));
        var_24 += (((var_1 ? (((var_16 >= (arr_3 [12])))) : (((arr_3 [i_1]) ? var_1 : (arr_3 [i_1]))))));
        var_25 = (arr_4 [i_1]);
        var_26 *= (((1 != 65535) < 127));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_27 = min((((((var_17 ? var_7 : 29648))) ? -var_16 : 15195)), (arr_1 [i_2] [i_2]));
        var_28 = (var_11 || -var_6);
    }
    var_29 += ((var_14 ? var_1 : ((-(251 / 1)))));
    var_30 = (~var_17);
    #pragma endscop
}
