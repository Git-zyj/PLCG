/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (!-var_3)));
    var_18 = (-127 - 1);
    var_19 ^= (--116);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (+-3532758920523602637);
        arr_4 [i_0] = -1994815484;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((~(arr_0 [15]))));
        arr_9 [i_1] = -110;
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 = (max(var_20, 109));
        var_21 = ((!(arr_11 [i_2] [i_2])));
        var_22 -= (~4247927700972704597);
        arr_14 [i_2] = (arr_0 [i_2]);
        arr_15 [i_2] = ((((!(arr_5 [0])))));
    }
    #pragma endscop
}
