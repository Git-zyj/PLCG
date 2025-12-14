/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_16 &= (((((min(var_14, var_15)) <= var_7)) && ((((-1798877696 + 2147483647) >> (var_9 - 572961872))))));
            var_17 = var_13;
            var_18 = (arr_4 [i_0] [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_19 = (max(((var_13 ? (max(var_10, var_8)) : (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (((44369 >> (((max(4294967291, (arr_6 [i_0 - 1] [13] [i_0 - 1]))) - 4294967271)))))));
            var_20 = ((70 & (min((min(25, var_12)), (min(4294967244, (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
            var_21 = (max(((~(arr_4 [16] [i_2] [i_2]))), (var_9 % var_9)));
        }
        var_22 = 57688;
        var_23 = (max((min((arr_8 [i_0] [i_0]), ((min(2, var_3))))), (~var_10)));
        arr_11 [0] [i_0] = ((((((max(-3584201804282293735, (arr_6 [i_0] [i_0] [i_0])))) ? var_8 : (arr_10 [i_0] [i_0] [i_0]))) & (7837 | 0)));
    }
    var_24 += (min(var_10, (max(3954643295, 244))));
    #pragma endscop
}
