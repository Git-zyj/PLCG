/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_16 ? var_10 : var_14));
    var_19 &= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    arr_6 [i_0] [i_2] [4] = ((((max((arr_0 [i_0] [7]), (arr_0 [i_1] [i_2])))) > ((var_7 ? (-2147483647 - 1) : var_0))));
                    var_20 = var_9;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_21 = 7031941627663799163;
                        var_22 = min(var_7, ((-(max(var_11, 9223372036854775806)))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_23 -= ((7599688104266918426 != (--8203)));
                            arr_14 [i_2] [i_2] [i_2] [i_3] [i_3] = (7599688104266918445 ? 1 : -8203);
                        }
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_24 += ((-(min(-10, -20))));
                        var_25 = -8203;
                        arr_18 [i_0] [i_0] [0] [i_2] = var_17;
                        arr_19 [i_0] [i_0] [i_2] [i_5] [7] [i_2] = (max(((var_1 ? (arr_13 [1] [i_1] [i_2 - 3] [i_5] [i_2]) : var_8)), (arr_11 [i_2 + 3] [i_2] [i_2] [0] [i_2])));
                        arr_20 [i_2] [i_1] [i_2] = ((!(((1544 ? ((min((arr_2 [i_2 + 2] [i_0]), var_3))) : 41584)))));
                    }
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_26 = (min(var_13, (((~(!10847055969442633196))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_27 = (min(var_27, (((var_3 ? ((-(!var_14))) : (!1538))))));
                                var_28 |= (!365979558);
                            }
                        }
                    }
                    var_29 = 8199801488956489383;
                }
                var_30 = 10316936837266901245;
                arr_30 [i_0] [i_1] = var_10;
            }
        }
    }
    #pragma endscop
}
