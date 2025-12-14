/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((-(((var_15 != ((-413955939123141930 ? -13682 : 0))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_1] [i_2] = ((((((((var_8 ? var_6 : 4343260171901060021))) ? ((35544 - (arr_7 [i_0] [i_2]))) : ((var_15 ? var_12 : (arr_1 [i_0])))))) - (((arr_5 [i_2] [i_1 + 2]) - (arr_5 [i_2] [i_1 + 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = 1;
                                var_21 ^= ((((2923416652589363117 >= (-2147483647 - 1))) || (1 != var_1)));
                                arr_16 [15] [0] [i_1 + 3] [i_2] [i_1] = (((arr_8 [i_1 + 3] [i_2 - 1] [i_2]) - (max((min(var_9, var_8)), (max(8388607, (arr_1 [i_2 + 1])))))));
                                var_22 = (max(var_22, (!30014)));
                                var_23 = 1;
                            }
                        }
                    }
                    var_24 = (max(12625, 23283));
                    var_25 = ((+(max(((((arr_0 [i_0]) ? var_18 : var_0))), var_17))));
                    var_26 = ((~((127 ? (arr_14 [i_0] [i_0] [i_1] [i_1 + 1] [i_2]) : (max(35539, (arr_11 [i_2 - 1])))))));
                }
            }
        }
    }
    var_27 = var_1;
    var_28 = ((var_17 + (((~(!var_18))))));
    #pragma endscop
}
