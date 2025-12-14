/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_6 [21] [i_0] [i_1] = (((!39360) | ((max((arr_4 [i_0 + 1]), (arr_4 [i_0 - 1]))))));
            var_20 = var_15;
        }
        var_21 = (min(var_21, (((((arr_0 [i_0 + 1]) % (arr_3 [i_0 - 2] [i_0 + 2])))))));
        var_22 = (max(var_22, (~26165)));
        arr_7 [i_0] = (max(((((!(arr_3 [i_0] [19]))) ? (arr_5 [18] [i_0]) : (((!(arr_4 [i_0])))))), (arr_2 [14] [i_0 + 1])));
    }
    var_23 = (min(var_23, ((max((((32761 > var_9) ? (!var_7) : -var_0)), ((min(var_7, (((var_12 + 2147483647) >> (var_0 - 8277303192743799116)))))))))));
    var_24 = var_13;
    var_25 *= var_19;
    #pragma endscop
}
