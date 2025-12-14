/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, -98));
    var_15 = ((!((max(1, 1)))));
    var_16 = (min(var_16, ((((var_1 >> (var_6 - 11188522153167650160)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_1] = (((!1) ? ((((101 > (arr_9 [i_3] [i_0] [i_0]))) ? 0 : var_1)) : (415 - 1)));
                        var_17 = (((((((arr_6 [i_3] [i_2 - 1] [i_1] [i_0]) > var_2)))) * 16664730638635206179));
                        var_18 = (max((((arr_5 [i_3]) << (((arr_6 [i_0] [i_0] [i_2] [i_3]) - 9831229332691100177)))), (((((max(182, (arr_8 [i_3] [i_0] [i_1] [i_0] [i_0])))) && (((143 ? 1 : (arr_9 [i_1] [i_2 + 2] [i_3])))))))));
                        arr_12 [i_3] = min((((!(arr_4 [i_0] [i_0] [i_2 + 2])))), 415);
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_19 = (max(var_19, ((((min(((((arr_4 [i_0] [i_4] [i_2]) << (((arr_10 [i_0] [i_0] [i_1 + 2] [i_2 + 2] [i_0] [i_4]) - 9436211765929120332))))), (arr_5 [i_0]))) ^ ((min((arr_1 [i_1] [i_1]), (var_9 >> 30)))))))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] = var_8;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_20 = (49045 / 2147483647);
                        arr_19 [i_0] [i_0] |= (arr_10 [i_1 - 1] [i_2 + 1] [i_5 - 1] [i_5 - 2] [i_5] [i_1 - 1]);
                        var_21 ^= (2147483647 - 17770);
                        var_22 *= ((-(arr_6 [i_0] [i_1 + 1] [i_2 + 1] [i_5 - 1])));
                        var_23 = ((!(arr_10 [i_2] [i_2] [i_2] [i_0] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        var_24 = (((-9223372036854775807 - 1) > 5));
                        var_25 -= ((12957312780391658413 ? 7987361309364928477 : (arr_9 [i_6 - 1] [i_2 + 1] [i_1 + 2])));
                    }
                    arr_23 [i_2 + 2] = ((!((((((2147483647 ? 5 : 1))) ? 12957312780391658433 : 101)))));
                    var_26 = (max(var_26, 182));
                    var_27 += (((!(arr_13 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 2]))));
                }
            }
        }
    }
    var_28 = var_13;
    #pragma endscop
}
