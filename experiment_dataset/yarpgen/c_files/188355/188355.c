/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_17 |= (((((var_5 - (arr_1 [i_0])))) ? (arr_1 [i_0]) : 1));
        arr_3 [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((~5928714037210351122) != -7125213211392023313)))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_19 = (min(var_19, ((((!-7125213211392023289) * ((((arr_4 [i_1]) != (arr_6 [i_1] [i_2])))))))));
            var_20 = (min(var_20, ((max(var_6, (max(((max(var_13, var_2))), 7125213211392023289)))))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_21 |= ((-((((((arr_4 [i_1]) << (var_1 - 1146160356799255212)))) ? (arr_12 [i_1] [i_1] [i_1]) : ((var_9 ? (arr_12 [i_1] [4] [i_1]) : var_8))))));
            arr_13 [i_1] [i_3] = ((var_13 != (arr_10 [i_1] [i_1] [i_1])));
        }
    }
    #pragma endscop
}
