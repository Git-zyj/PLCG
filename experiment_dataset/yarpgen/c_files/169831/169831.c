/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (8191 > 13806)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 13788;
        var_15 ^= var_8;
        var_16 = (max(var_16, ((((1 ? (arr_1 [i_0]) : var_5))))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_17 += ((arr_0 [i_1 - 1]) ^ (((~((min(1, 1)))))));
            arr_5 [i_0] = ((((!(arr_4 [i_1 - 1]))) ? (arr_4 [i_1 - 1]) : (((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : 137438953471))));
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_18 = (min(var_18, ((max(13806, -18633)))));
            arr_8 [i_0] [i_2] [i_0] = (arr_4 [i_2 + 2]);
        }
    }
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            var_19 = var_13;
            var_20 = ((-(((arr_1 [i_3]) ? (var_8 % 1250428246) : ((var_12 ? (-32767 - 1) : (arr_7 [i_4 - 1] [i_3] [i_3 - 4])))))));
        }
        arr_14 [i_3] = ((-((1 ? 67 : -104))));
        arr_15 [i_3] = ((((((var_11 ? var_0 : var_9))) ? (arr_12 [i_3]) : (arr_0 [i_3]))));
    }
    var_21 *= var_8;
    var_22 = var_9;
    #pragma endscop
}
