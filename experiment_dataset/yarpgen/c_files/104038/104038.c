/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (min(var_6, ((!((max(var_6, var_11)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 = 808014283;
                        arr_12 [i_3] [i_1] [i_1] = (min((arr_3 [i_3]), 65523));
                        var_15 = (max(var_15, (arr_3 [i_1])));
                    }
                }
            }
        }
        var_16 = (max(var_16, ((min(var_2, (arr_0 [i_0]))))));
    }

    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        arr_15 [i_4] = ((65523 ? 12 : 13475014822734615035));

        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_17 -= (max(var_10, ((!(1363533245 <= var_6)))));
                arr_22 [i_6] = ((((var_4 ? 4971729250974936581 : (arr_19 [i_5 - 1] [i_5 - 1] [i_6] [i_4 + 1]))) < (~1)));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_18 = (min(12, (max((arr_6 [i_4 - 2] [i_4] [i_5 - 1]), (arr_6 [i_4 - 2] [17] [i_5 - 2])))));
                var_19 = ((min(0, 4971729250974936601)));
                var_20 = (max(3518582379, ((((min(3, (arr_6 [3] [3] [3])))) ? (((-2147483647 - 1) - 4971729250974936599)) : (13722980630705795395 * var_10)))));
            }
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_21 ^= 29;
                            arr_33 [0] [i_10] [i_8] [i_8] [i_10] [0] = (arr_7 [i_8 - 3] [i_8 - 1] [i_8 - 2] [i_8 - 2]);
                            var_22 &= (+(max((arr_28 [i_4 + 2] [i_4 + 2] [i_8 + 1] [i_5 + 1] [i_4 + 2]), (arr_28 [i_4] [i_5] [i_8 - 1] [i_9] [i_4]))));
                            arr_34 [i_10] = ((+(max((((arr_2 [i_5] [i_5]) / (arr_3 [i_9]))), (arr_4 [i_4 - 1])))));
                        }
                    }
                }
            }
            var_23 = (max(var_23, var_11));
        }
    }
    #pragma endscop
}
