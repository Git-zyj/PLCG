/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = (i_1 % 2 == 0) ? (((((var_7 ? (((var_0 + 2147483647) << (((arr_2 [i_1]) - 146)))) : var_6))) ? (((var_5 != (((!(arr_3 [21]))))))) : 180)) : (((((var_7 ? (((var_0 + 2147483647) << (((((arr_2 [i_1]) - 146)) - 47)))) : var_6))) ? (((var_5 != (((!(arr_3 [21]))))))) : 180));
                arr_7 [i_1] = ((-(((var_13 != ((min((arr_2 [i_1]), (arr_3 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, 1379415864));
                            var_16 = var_2;
                            arr_13 [i_1] [0] [i_2] [0] [i_2] = max(var_12, (117 && var_0));
                            var_17 = (((arr_3 [i_0 - 1]) ? (((!(arr_12 [12] [i_2 + 2] [i_2 + 1] [12])))) : (!80)));
                            arr_14 [6] [i_1] [i_2] [16] [22] = 255;
                        }
                    }
                }
                var_18 &= (~80);
            }
        }
    }
    var_19 = (((((-1379415865 ? 80 : 98)))) ? ((((128 ? var_8 : var_3)))) : var_7);
    #pragma endscop
}
