/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min((((((min(var_10, var_3))) ? ((min(-27635, 27635))) : ((min(8, var_9)))))), -var_11));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_14 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_15 = ((((min((!9223372036854775807), (118 / -27641)))) ? -1 : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_1] [i_2] = 16987;
            var_16 = (arr_2 [i_2]);
        }
        arr_12 [18] = ((~(250 | 27665)));
    }
    var_17 = -var_7;
    #pragma endscop
}
