/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-var_13 ? (max(var_10, 0)) : -1318659023))) ? (((((min(28672, var_9))) & 8127991603097685738))) : (((((79 ? -1318659023 : var_9))) ? (((8404317090847210316 << (((((((-2147483647 - 1) - -2147483644)) + 5)) - 1))))) : -var_5))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 = (min((((((~(arr_0 [i_0])))) ? 6040283462902353835 : -1318659046)), var_2));

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_16 = (min((+-1802190454736271244), (281474976710655 | -1318659040)));
                            arr_14 [i_2] |= (arr_12 [i_0]);
                            var_17 = ((((((arr_10 [i_4] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]) / 91))) > (min(-4804510903098490587, (arr_10 [i_4] [i_4] [i_4] [i_4] [i_3 - 3])))));
                            arr_15 [i_3] = ((((((var_3 ? (arr_0 [i_1]) : 536870911)))) ? (((~((2147483635 ^ (arr_8 [i_0] [i_4] [i_0] [i_4])))))) : (min(var_7, ((((arr_1 [i_4]) - 241)))))));
                            arr_16 [i_1] [i_1] [i_3] [i_3] [i_4] = var_11;
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_18 = (min(((((-(arr_8 [i_0] [i_0] [i_0] [i_0]))))), var_6));
                var_19 = var_4;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] |= (arr_7 [i_0] [i_0]);
                            arr_24 [i_0] [i_7] [i_5] [i_0] [i_7] [i_7] [i_0] = ((-1318659039 >= (((!((min(var_11, var_7))))))));
                            var_20 = (~(arr_19 [i_7] [i_6] [i_5] [i_0]));
                        }
                    }
                }
                var_21 = ((((max((arr_7 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1 + 1])))) ? -7691 : var_0));
            }
            var_22 = (((((((arr_5 [i_1 + 1] [i_1 - 1] [i_0]) <= var_1)))) <= (((arr_5 [i_0 + 1] [i_0 + 1] [i_1]) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : 1318659016))));
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_23 = ((min((min(var_12, 119), (-2147483647 - 1)))));
            arr_27 [i_8] [i_0] = ((-((var_0 * (!var_0)))));
        }
    }
    #pragma endscop
}
