/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 &= (min((~-0), (0 >= 4567)));
        var_12 += (min(4551, (((((arr_0 [i_0] [i_0]) + 2147483647)) << (4567 - 4567)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_13 = (max(var_13, ((((min((-12 >= 0), (max(1, 5)))) != ((((!(arr_4 [i_1]))))))))));
        arr_5 [i_1] = 152717214;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_14 = (max((((arr_6 [3]) ^ (arr_6 [i_2]))), (((-(-4568 - 0))))));
        var_15 = 0;

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_11 [i_2] = min((arr_7 [i_2]), ((((arr_6 [i_3]) != (arr_7 [i_2])))));
            arr_12 [i_2] [i_2] [i_2] = 2088552361;
            var_16 = (arr_7 [i_3]);
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_17 += (max(((min((186 >= 24687), ((-(arr_14 [14] [i_4])))))), (max(-1229, (min(13, -1697333196974525876))))));
            var_18 |= (max(((((-4568 - -77) >= (arr_8 [i_4] [i_4] [i_4 + 1])))), 11133));
        }
    }
    var_19 += (min(((min(4567, 4566))), ((max(18446744073709551601, var_7)))));
    var_20 += ((-(max(var_1, var_5))));
    var_21 = ((!(((var_2 ? ((max(65523, 0))) : (max(var_8, 27870)))))));
    #pragma endscop
}
