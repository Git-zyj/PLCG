/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_10 ? (((((6 ? (-2147483647 - 1) : var_0))) ? ((-6235454646508335226 ? (-2147483647 - 1) : 11323574540698334439)) : (max(var_3, 7123169533011217199)))) : (((~7123169533011217176) & (-2147483647 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = 46;
                var_20 = var_12;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 &= (min(((0 ? -739333620539431012 : 11323574540698334439)), (arr_0 [i_2])));
                                arr_15 [i_0] [i_0] [i_3] [i_4] = ((!(arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])));
                                arr_16 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = (((!7596) ? (max(14535563038958800429, -2967)) : (((-35184372088831 ? (((((arr_4 [i_1] [i_2] [i_4]) <= 2966)))) : (~9223372036854775807))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, 6806393348640138314));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_23 ^= (max((arr_14 [i_5] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6]), 7123169533011217176));
                                var_24 = (min((!9495828233885892246), -76284529706995213));
                                var_25 ^= arr_21 [i_2] [4] [i_6 - 1] [i_5] [i_2];
                                var_26 = ((((1 ? 118 : 9789))) ? (max(18446744073709551615, (arr_8 [i_0]))) : ((((!(arr_8 [i_0]))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_25 [0] [i_1] [i_1] [i_7] |= ((0 ? 3021474163785236082 : 21791));
                    var_27 = (94 ? 37 : 1);
                }
                var_28 *= (max(7591, ((var_7 ? (arr_12 [6] [i_1] [i_1] [i_1] [i_1]) : 4638543925903449773))));
            }
        }
    }
    #pragma endscop
}
