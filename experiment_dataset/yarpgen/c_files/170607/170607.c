/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 |= (((arr_2 [i_0]) ? (min(31246, -2034055118)) : (((!(arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = (((((((min(var_4, var_7))) ? ((var_0 ? var_8 : (arr_0 [i_0]))) : var_15))) == ((-(min(3506640898, (arr_2 [i_0])))))));
        var_20 += (((arr_1 [i_0] [i_0]) ? var_8 : 20178));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = ((var_16 + (arr_6 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    arr_14 [1] [i_2] [i_1] [1] = (max(((((arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1]) > (((var_13 ? var_1 : 1)))))), var_3));
                    var_22 += (((min((((51 ? 31131 : var_5))), ((var_7 ? var_0 : var_9)))) <= ((min(2147483647, var_16)))));
                    var_23 = (((arr_9 [i_1]) ? (arr_0 [i_3]) : 80));
                    var_24 = ((!(((76 ? 0 : 76)))));
                }
            }
        }
        arr_15 [i_1] = (arr_0 [1]);
    }
    var_25 = var_12;
    #pragma endscop
}
