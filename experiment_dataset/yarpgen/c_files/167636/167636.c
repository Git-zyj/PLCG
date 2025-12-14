/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_15 = (min(var_15, (((24 ? (arr_0 [i_1 - 2]) : ((-(arr_1 [i_1 - 3]))))))));
            var_16 = (arr_1 [i_0]);
        }
        for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_2] = (min((((!(arr_1 [i_0])))), (max(909501902, 127))));
            var_17 = (arr_3 [i_2]);
        }
        var_18 += (arr_5 [i_0]);
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        arr_9 [i_3] |= (arr_3 [i_3 - 2]);
        var_19 = arr_7 [i_3];
    }
    var_20 = var_12;
    #pragma endscop
}
