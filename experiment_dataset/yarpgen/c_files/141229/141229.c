/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((29 ? 4076031962356725028 : 1));
    var_15 = var_13;

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((max(-1, 1)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_17 = (arr_10 [i_0] [i_0 + 3] [i_0]);
                        arr_11 [3] [i_1] [i_2] [i_3] = ((-123 ? 254 : -7459458853036578133));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_18 = (((arr_7 [i_4 + 1] [i_4] [i_4] [i_4]) ^ (arr_6 [i_4 + 3] [i_4])));
        arr_14 [i_4] = (((min((arr_7 [i_4 + 1] [i_4] [i_4] [i_4]), (((1 ? 2031616 : 30851))))) & (!265849667)));
        arr_15 [i_4] = (((arr_2 [i_4] [i_4]) ? (((!(arr_4 [i_4 + 1] [i_4 + 2])))) : (arr_6 [i_4 - 1] [i_4 + 2])));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = (arr_7 [i_5] [10] [10] [i_5 + 2]);

        for (int i_6 = 4; i_6 < 17;i_6 += 1)
        {
            var_19 *= ((((min((arr_20 [1] [i_6 + 2]), (arr_20 [i_5] [i_6 + 2])))) && ((((arr_20 [i_6] [i_6 - 4]) ? (arr_20 [i_5 + 1] [i_6 - 4]) : (-2147483647 - 1))))));
            arr_22 [i_5 + 2] |= (max(((max(((1 ? 255 : (arr_9 [2]))), (((arr_5 [i_5] [i_6]) ? (arr_10 [5] [i_5] [i_5]) : (arr_13 [10] [1])))))), (((((6 ? (arr_5 [i_5] [i_6]) : (arr_8 [i_5] [i_6 - 1] [i_6])))) ^ (((-2147483647 - 1) ? 3093396333371302191 : -2908))))));

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_20 = (max(var_20, (((((((arr_4 [i_6 - 2] [i_5 + 3]) | (arr_4 [i_6 - 1] [i_5 + 3])))) ? (arr_4 [i_6 + 2] [i_5 + 3]) : (arr_4 [i_6 - 2] [i_5 + 2]))))));
                var_21 = -2013265920;
            }
        }
    }
    var_22 += var_13;
    var_23 = (max(var_23, (((((((-127 - 1) && 9223372036854775807))) >= ((var_0 ? 255 : var_7)))))));
    #pragma endscop
}
