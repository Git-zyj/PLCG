/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((~((var_9 ? var_11 : ((min(242, 4294967295))))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_21 = (min(var_21, 4294967282));
        arr_2 [1] = 4294967295;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = (max(((~(max(2156358658, (arr_0 [i_2 - 1] [i_2 + 3]))))), ((((~-3765240765789815189) && ((min(3438471476, 2668951643140310963))))))));
            arr_10 [i_2] = (min(11, (arr_7 [i_1] [i_2 + 3] [i_2 + 3])));
            var_22 = (min(var_22, 4245821490));
        }
        var_23 = ((-(max(2044139005, (arr_4 [i_1])))));
        arr_11 [i_1] = (min((arr_5 [i_1]), 2044139002));
    }
    var_24 = (-1100648026 >= var_10);
    #pragma endscop
}
