/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_17 = 17379973659818395148;
            arr_7 [i_0 - 1] [i_0] = (!1066770413891156467);
            var_18 += ((min(2097024, 65521)));
            arr_8 [i_0] = (((arr_6 [i_0]) ? (arr_1 [i_1]) : (arr_5 [i_0 + 1] [i_1 + 1])));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_12 [i_0] = -var_12;
            arr_13 [0] [0] [i_0 + 1] &= 3884942936;
        }
        var_19 = (arr_4 [i_0]);
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        arr_16 [i_3] = ((~(7552710270179156444 >= 4294967290)));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            arr_20 [i_3] [i_3] [i_4 + 2] = var_9;
            arr_21 [i_3] [i_3] [i_3] = (arr_14 [i_3]);
        }
        arr_22 [i_3] = (arr_15 [i_3] [i_3]);
    }
    var_20 = (((max(var_2, 1777080468))));
    var_21 = (max(var_21, (max((((min(2129294477, 15032331133592636948)) | var_14)), (4607182418800017408 - 1)))));
    #pragma endscop
}
