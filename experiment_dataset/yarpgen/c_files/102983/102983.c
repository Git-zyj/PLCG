/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_8;
    var_21 = ((((((-54564567 + 2147483647) << (var_17 - 2464568584)))) ? var_7 : (((((12 << (var_14 - 23160)))) ? ((min(54564566, 7))) : var_4))));
    var_22 = 8191;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_23 ^= (min(((28592 / ((64 ? 28592 : 1)))), (1 == -128577474)));
        arr_3 [i_0] = (min((arr_0 [i_0]), (min(((((arr_0 [15]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))), (max(var_8, (arr_0 [i_0])))))));
        var_24 = 2305842734335787008;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_25 += ((!(arr_5 [4] [0])));
        arr_6 [i_1] [20] |= ((var_9 == (((((54564567 ? (arr_4 [22]) : var_17))) | ((~(arr_5 [14] [14])))))));
        arr_7 [i_1] = 1;
        arr_8 [i_1] [i_1] = (arr_5 [i_1] [i_1]);
    }
    var_26 = var_0;
    #pragma endscop
}
