/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_8;
    var_21 = 64;
    var_22 &= ((((min((((-42 + 2147483647) << (((var_2 + 1976380531) - 7)))), var_9))) && ((!(((58 ? var_13 : -64)))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [0] &= -1;

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = ((((((arr_0 [15]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0] [i_0 + 4])))) ? (arr_3 [i_0]) : (((((arr_0 [9]) <= (arr_1 [12])))))));
            var_23 ^= ((var_14 ? (((((-490521359 ? 2147483647 : -23957))) + (arr_0 [i_0 - 1]))) : 58));
            arr_6 [i_0] [i_0] [i_0] |= 45;
            var_24 = (((arr_0 [i_0 - 2]) ? (((-64 ? 20 : var_3))) : 3128391663));
        }
        var_25 ^= ((((!(arr_4 [i_0 + 4] [i_0 + 1] [i_0 + 4])))) >> (((arr_3 [14]) - 1331915287)));
        var_26 = (((((((-1 ? 0 : var_5))) ? -64 : (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_0 [i_0]))))) <= (arr_0 [i_0])));
        var_27 = 45;
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_28 = ((((max((-26647 <= 2147483647), ((-1 ? 1 : 1))))) ? -52 : (max(1569819776, (arr_1 [i_2 + 4])))));
        var_29 = -0;

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_30 = ((64 ? -54 : ((11286 ? 45 : -1))));
            var_31 -= -64;

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_14 [i_2] [i_3] [i_4] = (((-2 + 2147483647) >> (((arr_10 [i_2 + 2]) - 1129913909))));
                arr_15 [18] [18] [18] [18] = (((((91 ? 1 : 81))) ? -2013068271 : (((-2013068281 ? -2309488673647098661 : -1)))));
            }
            arr_16 [13] [i_2 + 1] = ((18450 > (((arr_1 [i_3]) ? (arr_8 [i_2] [i_2 + 4]) : (arr_8 [i_2] [i_2 + 2])))));
            var_32 = (min(var_32, (max(var_7, ((min((((arr_10 [3]) << (((-2013068288 + 2013068312) - 24)))), (arr_10 [i_2 + 2]))))))));
        }
    }
    #pragma endscop
}
