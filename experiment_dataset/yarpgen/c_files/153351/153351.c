/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += -32032;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (arr_2 [i_0]);
                    var_18 = 1;
                    arr_8 [i_0] [i_1] [i_0] = 2147483647;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 *= (1 & var_8);
                                var_20 ^= (4123938035 <= -26583);
                                arr_14 [i_0] = (((((((((var_1 + 2147483647) << (var_7 - 42228)))) + var_11))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (max(var_9, var_15))));
                            }
                        }
                    }
                }
            }
        }
        var_21 = 1;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_22 = var_10;
                        var_23 = (max(var_23, ((min(var_7, ((var_4 ? 12839 : 1)))))));
                        var_24 ^= var_0;
                    }
                }
            }
        }
        arr_27 [i_5] = (((var_6 ? var_10 : (arr_25 [i_5] [i_5] [i_5] [i_5]))) == ((-(arr_25 [i_5] [i_5] [i_5] [i_5]))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] = (((!var_10) < -26599));
        arr_31 [i_9] [i_9] = ((((!(arr_12 [i_9] [i_9] [i_9] [i_9] [i_9]))) ? (((!(arr_16 [i_9])))) : var_3));
        var_25 = min(var_8, (arr_21 [i_9] [i_9]));
    }
    var_26 = ((var_4 ^ var_10) >> (var_10 - 22815));
    #pragma endscop
}
