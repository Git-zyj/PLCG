/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-var_10 + 2147483647) >> (-32 + 43)));
    var_16 = (((var_1 | (min(-85, var_9)))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((!(((arr_2 [i_0] [i_0]) || var_5)))) ? (3866284032902086147 > 32767) : (((((1 ? -30518 : var_1))) ? (arr_1 [i_0 - 1] [i_0]) : ((-(arr_1 [i_0 - 1] [i_0 - 1])))))));

        for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = (((!var_10) < ((((min(var_14, (arr_2 [i_0] [i_1 - 1])))) + (1 < 17179869152)))));
            var_17 *= (((((arr_2 [i_0 + 1] [i_1 - 2]) ? 16 : (arr_2 [i_0 + 2] [i_1 - 2]))) * (-11684 * -7902)));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_18 = ((min((arr_0 [i_0 - 3]), ((var_1 ? var_9 : -7902)))));
            arr_10 [5] = ((((((arr_4 [i_0] [1] [i_0 - 2]) - 252))) ? var_1 : ((-(var_6 + -11)))));
        }
        var_19 = (arr_1 [i_0] [i_0 + 1]);
        var_20 = (min(var_20, ((((((-((-(arr_7 [i_0])))))) ? ((min(13910, (arr_0 [i_0 - 1])))) : ((((((arr_9 [0]) >> (arr_2 [i_0] [i_0]))) <= -7917))))))));
    }
    var_21 |= ((-7889 ^ ((~((var_14 ? -23 : -7938))))));
    #pragma endscop
}
