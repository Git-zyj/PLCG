/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((2147483647 * (-32762 - 1433403967)))) ? ((max(var_0, 1))) : 1));
    var_21 = ((var_3 ? -25152011 : (max((~var_7), (max(1048575, 1433403945))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = (((arr_1 [i_0]) ? 7601808027310924929 : (-2147483647 - 1)));
        arr_3 [i_0] = -5220883659888259191;
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = max((((0 && (arr_5 [i_1 - 3])))), ((var_9 ? 4293918718 : -18)));
        var_23 = (((arr_4 [1] [i_1 + 1]) >> (((arr_6 [i_1 - 1]) - 639751440))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_24 = 11492;
        var_25 |= var_19;
    }
    #pragma endscop
}
