/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (arr_0 [1] [i_0]);
        arr_3 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (var_3 != var_2);
        var_19 = (~(arr_7 [i_1]));
        var_20 = (((((1 ? 1 : 511))) / 36028797018701824));
        var_21 = (arr_4 [i_1]);
    }
    var_22 += ((~(((((15 ? 65025 : 0))) ? (((min(13138, var_7)))) : (max(-5815950576573411371, var_10))))));
    var_23 = ((0 || (((889637613 ? -19941 : 2779946518)))));
    var_24 = (min(var_24, ((max(-4412, 15)))));
    var_25 = (!1);
    #pragma endscop
}
