/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((~var_13) ? ((~(3665400492 > -15181))) : var_9)))));
    var_20 = var_13;
    var_21 = (min(var_21, ((max(18446744073709551614, var_0)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = 1612134112845582267;
        var_22 = (max(var_2, ((64971 ? (arr_3 [i_0]) : (arr_1 [i_0] [i_0])))));
        arr_5 [10] = (arr_2 [i_0] [i_0]);
        var_23 = (max(var_23, (((12 >> (29006 - 28976))))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_9 [i_0] [i_0] = (((arr_8 [i_0] [1] [i_1 + 1]) * (max(var_8, (arr_8 [i_0] [i_0] [i_1 - 1])))));
            var_24 = (max(var_24, ((((arr_3 [i_0]) ^ 5923034991669905654)))));
            arr_10 [6] [6] = -13116709564917388068;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_25 = (arr_7 [3]);
            arr_13 [i_0] [1] = ((~(arr_8 [i_0] [1] [i_2])));
        }
    }
    var_26 ^= (((((((max(0, var_2))) && ((min(-5186876510957874524, var_5)))))) ^ 15664));
    #pragma endscop
}
