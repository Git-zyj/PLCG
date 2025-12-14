/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (((arr_0 [i_1]) > 9223372036854775807));
                    arr_8 [i_1 + 2] = ((((min(-9223372036854775787, 4294967295))) ? (!var_6) : ((max((arr_7 [i_0] [i_1 - 1] [i_2] [i_0]), var_9)))));
                    var_14 &= (((min(var_1, 2073326113)) & -1012022636));
                    var_15 = (max(var_15, (((((var_9 ? (arr_5 [i_1 - 1] [i_1 - 3]) : var_11)) == ((((var_4 != (1909725667477638 ^ var_8))))))))));
                }
            }
        }
    }
    var_16 = ((3759610891 >= (((((((min(var_1, 1)))) == 4294967288))))));
    var_17 = (min(var_17, ((min(var_10, ((9223372036854775791 - (((0 ? 239 : 1))))))))));

    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_18 = (max(var_18, (((!((((149 || 28) ? (max(var_4, 18446744073709551610)) : (((((arr_11 [8]) && var_11))))))))))));
        var_19 = 26909;
        var_20 = var_1;
        arr_13 [i_3] = (((255 < var_5) && ((!(arr_9 [i_3 - 1])))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                {
                    var_21 = (((((var_11 && var_3) ? var_4 : -2770957488056439254)) != ((2305843009146585088 ? (max((-9223372036854775807 - 1), var_8)) : (min(-2770957488056439254, var_8))))));
                    var_22 = (min(var_22, (2770957488056439253 != 65519)));
                    var_23 = (min((max(var_8, var_4)), 9223372036854775807));
                }
            }
        }
        arr_26 [2] [i_4] = ((((1 && (((arr_17 [i_4]) && 2073326119)))) || (((arr_10 [i_4] [i_4]) && (!5)))));
    }
    #pragma endscop
}
