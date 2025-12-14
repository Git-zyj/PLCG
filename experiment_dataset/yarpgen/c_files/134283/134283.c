/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max(21059, var_8)), (!var_1)));
    var_21 *= var_14;
    var_22 = (max(var_22, var_12));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_23 = (min(((8191 ? -31797 : -21060)), ((max((arr_4 [i_0] [i_0] [i_1]), var_6)))));
            arr_6 [i_1] [i_1] = arr_1 [i_1];
            var_24 = var_15;
        }
        var_25 -= (min(((max(var_13, var_5))), ((-(arr_1 [i_0])))));
        arr_7 [i_0] [i_0] = ((-((max(1, (arr_3 [i_0] [i_0]))))));
        var_26 = (min(var_26, (((((min((arr_3 [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))) ? ((-(arr_0 [i_0]))) : (arr_0 [i_0]))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_27 = (max(var_27, -0));
        var_28 = var_13;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_29 *= var_13;
        var_30 -= ((!(((((arr_11 [1]) <= 1)) || var_9))));
        var_31 = (min(var_31, (~1)));
    }
    var_32 = var_15;
    #pragma endscop
}
