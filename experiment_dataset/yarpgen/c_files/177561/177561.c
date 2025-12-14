/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 = ((!(((~(((!(arr_0 [i_0] [i_0])))))))));
        var_13 = 62;
        var_14 = arr_0 [i_0] [i_0];
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 = ((((!(arr_1 [i_0] [i_0]))) ? ((max(522361649, (arr_1 [i_0] [i_0])))) : (((!522361652) % (arr_1 [i_0] [12])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = ((-((((((arr_1 [i_1] [15]) ? (arr_0 [i_1] [i_1]) : -1712238946))) ? 121 : (arr_0 [i_1] [i_1])))));
        arr_6 [i_1] [13] = (max((-581370866 % 522361672), -52859));
    }
    var_18 = var_1;
    var_19 = (max(var_19, (!-159)));
    #pragma endscop
}
