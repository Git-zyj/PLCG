/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min((18 / 896), (1 % -6802))) % var_8));
    var_20 = var_0;
    var_21 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_22 += (arr_1 [i_1 + 2] [i_1 - 1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_23 = -1879727599;
                        var_24 = (((arr_8 [i_0] [i_1 - 2] [i_2] [i_3]) && ((((arr_9 [i_0] [i_0] [2] [i_0]) ? (arr_0 [0] [i_0]) : (arr_7 [i_2] [i_3]))))));
                        var_25 = (min(var_25, ((-(arr_1 [i_1 - 2] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_13 [i_1] [i_0] [i_1 - 2] [i_0] [i_1] = (arr_10 [0] [i_1] [i_1 + 1] [i_1 + 1]);
                        var_26 = (((arr_8 [i_2] [4] [5] [i_1 + 1]) % ((((arr_3 [i_1]) != 2199022206976)))));
                    }
                    var_27 = (-1870109135 > 1870109139);
                    var_28 = arr_6 [9] [i_1] [i_0];
                    var_29 = (arr_11 [i_0] [i_1 + 2] [i_1 - 1] [i_1] [i_2]);
                }
                var_30 = ((((!(arr_2 [i_1 + 1]))) && ((((4294967275 ? 1870109158 : 21))))));
                var_31 -= ((-2032 * (((((((arr_3 [5]) && 1870109135)) || 8388608))))));
                var_32 = (((((9 ? 42082 : 1870109158))) ? 839679888 : (((((arr_3 [2]) ? 4095 : (arr_4 [i_1] [i_0] [i_0])))))));
            }
        }
    }
    var_33 = 3455287425;
    #pragma endscop
}
