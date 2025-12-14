/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max((((((var_3 ? 208 : var_0))) / ((var_6 ? var_8 : var_9)))), var_3);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [0] = (arr_0 [i_0]);
        var_12 = (max(var_12, var_10));
        var_13 = (min(var_13, (((151 ^ (((897372366 / var_7) >> (-2034532383 - 2260434911))))))));
        arr_3 [i_0] [i_0 + 4] = (552518250 ? ((197 - (max(0, var_1)))) : (arr_1 [i_0 + 2]));
        arr_4 [i_0] = (-((1937783823 ? (arr_1 [i_0 - 1]) : 252)));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] [20] = (max((((var_0 ? (arr_6 [i_1 + 1] [i_1]) : (arr_6 [i_1 + 1] [11])))), (((arr_6 [i_1 + 1] [i_1]) + 3759819011))));

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_1 + 1] [i_1] [i_1] = 897372355;
            var_14 = ((!(((+(((arr_8 [i_1] [i_1]) - (arr_5 [i_2] [i_1]))))))));
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_15 = (((((0 & (arr_12 [i_3])))) ? ((var_7 ? 177 : 3)) : (!56)));
        var_16 |= var_8;
        var_17 = (((arr_12 [i_3]) >= var_9));
        arr_13 [i_3] = 382419358;
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_18 [i_4] = (((arr_17 [i_4]) || ((((arr_15 [i_4]) ? 0 : 68)))));
        var_18 = (var_4 / (((56 ^ (arr_15 [i_4])))));
        var_19 -= (~(arr_16 [i_4]));
        var_20 = (max(var_20, ((~(arr_16 [i_4])))));
    }
    var_21 = ((var_6 ? ((((!(((var_9 ? 149 : 2020025938))))))) : var_5));
    #pragma endscop
}
