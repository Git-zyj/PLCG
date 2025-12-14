/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_0;

    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((3110179281 ? 1331 : 58300))))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            var_21 = (((arr_0 [i_2] [i_2]) ? (arr_0 [i_0 + 1] [i_1]) : (arr_0 [i_0] [i_4 - 1])));
                            arr_13 [i_0] [i_1 + 1] [i_2] [i_0] [i_4] = (~var_2);
                            arr_14 [i_0] [i_0] [i_3] [i_4] = var_9;
                            var_22 = (arr_12 [i_0]);
                            arr_15 [i_0 - 1] [i_1] [i_2] = ((((((arr_8 [i_0] [i_1 + 4] [i_2] [i_1 + 4] [i_4]) ? 7236 : var_2))) ? 4737764832834594606 : (~7236)));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_23 -= (((((~(arr_12 [i_3 - 1])))) ? (arr_3 [i_2] [i_1] [i_0]) : (arr_7 [i_0] [i_2] [i_3])));
                            var_24 = (58300 != 58300);
                        }
                        var_25 += ((((!(~2373))) ? (((arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_0 - 1]) ? (((var_6 ? (arr_2 [i_0]) : 31573))) : (var_17 % var_14))) : (((58300 ? 58297 : ((1 ? 1 : (arr_17 [i_3 - 3] [i_1] [i_1] [i_1] [i_0 - 1]))))))));
                        var_26 = (max(var_26, var_4));
                    }
                }
            }
        }
        var_27 = (((arr_12 [i_0]) < ((58300 ? 1 : 58300))));
        arr_18 [i_0] = (((((-824251293 ? 26535 : 32456))) ? (arr_12 [i_0 - 1]) : ((((arr_6 [i_0 + 1]) < 1)))));
    }
    for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((((((arr_1 [i_6] [i_6 - 1]) ? var_7 : (arr_1 [i_6 + 1] [i_6 + 1])))) ? 1535034407781240697 : ((32767 / (arr_10 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1])))));
        arr_23 [i_6] = (max((((arr_4 [i_6 + 1] [i_6 + 1]) ? (arr_4 [i_6 - 1] [i_6 - 1]) : (arr_4 [i_6 - 1] [i_6 + 1]))), (((var_14 <= ((1 ? 4923 : (arr_3 [i_6] [i_6] [i_6]))))))));
    }
    var_28 = ((!(((-1535034407781240697 ? (((min(var_6, var_14)))) : ((var_17 ? 1 : 1184788025)))))));
    #pragma endscop
}
