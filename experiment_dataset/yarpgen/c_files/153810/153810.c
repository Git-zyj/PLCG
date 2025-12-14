/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (((!3778960822) ? (141 + 141) : 9785));
            arr_5 [i_0] [i_1] = ((((119 ? var_7 : (arr_2 [i_0])))));
        }
        var_18 = (max(var_18, ((max(((+(((arr_1 [i_0]) + -1)))), (-4035712135216714623 - -105))))));
        var_19 = (((arr_3 [i_0]) % ((-(arr_3 [i_0])))));
        var_20 += (arr_4 [i_0] [i_0]);
        var_21 = (max(var_21, (((-((max((arr_3 [i_0]), (arr_3 [i_0])))))))));
    }
    var_22 = var_4;
    var_23 = (max(var_23, var_8));
    #pragma endscop
}
