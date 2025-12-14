/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_20 += -16;
        var_21 = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (((min((!15), 0))) ? (arr_1 [i_0] [i_0]) : ((((((21372 ? 4277461298 : 4277461281))) ? (!0) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_22 = 0;
            var_23 = (var_6 >= 15);
            var_24 = (-29193 != 3465);
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            var_25 = (var_2 ? (((arr_8 [i_1] [i_1] [i_1]) << (218 - 199))) : (arr_0 [i_1 - 2]));
            var_26 = (arr_10 [i_1 - 2] [i_1] [i_3 + 1]);
            var_27 += var_3;
            var_28 = 4277461281;
        }
        var_29 = max((max(20, 2162493731)), (((!(((var_12 ? 2132473564 : var_2)))))));
    }
    var_30 = var_16;
    var_31 = var_13;
    #pragma endscop
}
