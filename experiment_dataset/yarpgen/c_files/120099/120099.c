/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = (min(1, 47));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((-((((arr_0 [i_0]) >= 1)))));
        arr_4 [i_0] = (min((arr_0 [i_0]), (arr_0 [i_0])));
        arr_5 [i_0] [i_0] = (arr_0 [i_0]);
        arr_6 [i_0] = (((min((arr_1 [i_0]), (arr_1 [i_0]))) << (((arr_0 [i_0]) - 2346281704))));
        arr_7 [i_0] = (max(25769803776, 0));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] = ((1 | (arr_8 [i_1 - 4])));

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            arr_14 [i_1] = (!var_1);
            arr_15 [i_2] [i_1] = (((0 - 5899) - (((arr_8 [i_1]) - (arr_12 [1] [i_2] [i_2])))));
            var_12 = (!1);
        }
        var_13 = ((-8002388720692276872 ? 0 : 728242113));
        arr_16 [i_1] = (((arr_8 [i_1 - 3]) != var_8));
    }
    for (int i_3 = 4; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_21 [i_3] |= (((arr_19 [i_3 + 1]) & (max((arr_9 [i_3] [i_3 - 4]), (arr_19 [i_3 - 3])))));
        arr_22 [i_3] [i_3] = -5894;
    }
    #pragma endscop
}
