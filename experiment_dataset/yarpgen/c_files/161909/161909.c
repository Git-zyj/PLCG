/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        arr_2 [i_0] = (max((max((arr_1 [4] [i_0]), ((max(var_7, (arr_0 [i_0])))))), -787361074));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 |= -111;

        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            var_14 ^= (!((min((arr_3 [i_2 - 1] [i_2 - 3]), (arr_3 [i_2 - 1] [i_2 - 1])))));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_15 = ((3936345173 ? 0 : 1));
                var_16 = (arr_4 [i_3]);
                var_17 = (max((((!(arr_7 [i_1] [i_3])))), ((1 ? 1 : 1))));
            }
            var_18 ^= ((var_6 ? (((arr_5 [i_1]) ? (-22204 <= 80) : var_1)) : (~var_6)));
            arr_11 [i_2] [i_2] [i_2] = (min(((min(-22212, 1))), (arr_5 [i_2])));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 += (max((22217 / -22187), (arr_3 [i_4] [i_4])));
        var_20 = ((+((((max((arr_12 [i_4] [1]), (arr_3 [i_4] [i_4]))) != (arr_6 [i_4]))))));
        var_21 = ((+(((((arr_12 [i_4] [i_4]) ? var_10 : 5))))));
        var_22 = (min((arr_4 [i_4]), (((max(0, 0))))));
    }
    var_23 = (min(((20 ? 4435087398810106895 : (~4435087398810106874))), ((max(var_9, (var_0 >= 1))))));
    var_24 |= (var_0 < (((var_7 || (~0)))));
    #pragma endscop
}
