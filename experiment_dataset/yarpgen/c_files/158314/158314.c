/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_9 != var_1);
    var_18 += max(((min(var_14, var_2))), var_3);
    var_19 = 18446744073709551597;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] = (!1023);
                    var_20 = (((var_9 ? var_10 : (arr_1 [i_1 - 1]))));
                    var_21 = ((2269496949 ? ((384 ? -32745 : 9860796464561533727)) : -23));
                    arr_11 [i_0] = (((arr_3 [i_0] [i_1 + 1]) * ((+(((arr_8 [i_0] [i_0] [i_0]) / -25673))))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_22 = ((1890467856 || (((~(~17643))))));
                        arr_15 [i_0] [i_1] [2] [7] = (((((arr_12 [i_0] [i_1 - 1] [10] [10] [i_3 + 3]) != (arr_6 [i_1 + 1] [i_1 - 3] [17]))) ? ((((((var_13 ? 4019928923 : 2025470348))) ? ((((arr_13 [10] [10] [10] [i_3 - 1]) ? (arr_1 [i_2]) : 17654))) : (arr_2 [i_1] [i_1] [i_0])))) : 4044186924395037241));
                        var_23 *= (max(var_4, (arr_4 [i_3 + 3] [i_3 + 3])));
                    }
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_18 [7] [i_0] = var_2;
                    arr_19 [i_0] = ((11083110101834574695 ? 14402557149314514347 : 98304));
                }
                arr_20 [i_0] [i_0] [i_0] = 2025470347;
                arr_21 [i_0] [i_0] = (min(25693, (min(-20, -1))));
            }
        }
    }
    #pragma endscop
}
