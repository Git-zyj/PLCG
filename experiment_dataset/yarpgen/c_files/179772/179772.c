/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((((2535219316942399337 ? 32767 : 3697556057)) < 0)) ? ((~((var_10 ? var_7 : 1)))) : (var_0 / var_0)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = 0;

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_13 = (max(((((~-30875) <= ((min(24, 15894)))))), (arr_0 [i_0] [0])));
            var_14 = (min(var_14, (arr_4 [1] [i_0])));
            var_15 |= ((((5396428378760396305 ? (arr_4 [i_1 - 1] [i_1 + 1]) : ((var_1 | (arr_5 [i_0] [6]))))) != -3937468150354686298));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_16 = ((-1 | (arr_7 [19])));
            arr_11 [i_0] [i_2] = (min((arr_8 [i_2] [i_0] [i_0]), ((max((max((arr_4 [i_0] [18]), 1508866915)), (arr_10 [i_2] [i_0]))))));
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_17 = var_6;
        var_18 ^= (arr_12 [i_3]);
        var_19 = (max(var_19, ((((((max((arr_13 [15] [i_3]), var_1))) && (((var_10 ? (arr_13 [7] [i_3]) : 32767)))))))));
        var_20 = (((((var_0 & (2017 * -13863)))) ? (arr_13 [i_3] [i_3]) : (-652293308441550719 < -23442)));
    }
    var_21 = ((((max(var_8, var_9)) ^ var_6)));
    var_22 = ((((var_2 ? -8737753832087862153 : 46555))));
    #pragma endscop
}
