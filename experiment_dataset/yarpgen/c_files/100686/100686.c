/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((~var_1) ? ((var_11 << (var_7 + 6245175998958317299))) : 56)));
    var_13 = (var_3 - var_7);
    var_14 = ((var_11 <= (min(var_1, (var_1 & var_6)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) >= (max(((max((arr_1 [i_0]), (arr_2 [i_0])))), (~var_2)))));
        var_16 = (min(var_16, (arr_2 [i_0])));
        arr_3 [i_0] = (((var_3 % (var_7 >= -8641119250504769869))));
        var_17 -= (((arr_0 [i_0]) ? (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))) : (((arr_1 [i_0]) ? 60103 : (arr_2 [i_0])))));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_18 += (arr_5 [i_1 - 1] [i_1]);
            arr_6 [i_0] [i_1 - 2] [i_1] = (max(-110, (min(var_6, (arr_4 [i_0] [i_1 + 1])))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = ((((((arr_5 [i_0] [i_2]) - ((max(var_2, (arr_8 [i_0] [i_0]))))))) ? (((max(32744, 7995)))) : (max(1034224820, 3260742476))));
            var_20 = ((((~(arr_8 [i_0] [i_2]))) / 2046));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_21 = (min(var_21, (0 >= 523164003)));
            var_22 = (arr_0 [i_3]);
        }
    }
    var_23 = (!var_8);
    #pragma endscop
}
