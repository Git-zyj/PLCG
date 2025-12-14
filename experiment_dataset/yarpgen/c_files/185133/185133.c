/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((-(((((arr_1 [i_0]) ? var_13 : -1113237150))))));
        var_17 = ((+((((75 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))) ^ ((((arr_1 [i_0]) ? 24370 : 255)))))));
        var_18 = ((((((532492640 ? var_11 : 249)) / (arr_1 [i_0]))) + ((var_6 ? (arr_0 [i_0] [i_0]) : ((254 << (((arr_1 [i_0]) + 217265600507269109))))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_19 = (arr_2 [i_1 + 2]);
        var_20 = (((((((((arr_2 [i_1]) / (arr_4 [i_1 - 1] [i_1 + 2])))) / var_2))) ? (((~(var_2 >= 987809039)))) : (max(((((arr_3 [9] [i_1]) ? 70 : 7))), (arr_4 [i_1 + 1] [i_1])))));
        var_21 = (min(var_21, (((~(max(var_0, ((var_15 ? 1 : (arr_0 [i_1 + 2] [18]))))))))));
    }
    var_22 ^= max(((((-524976197 ? var_8 : 524976215)))), 11848299);
    var_23 = var_8;
    #pragma endscop
}
