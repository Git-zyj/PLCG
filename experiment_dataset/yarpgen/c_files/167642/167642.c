/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_11 ? (!var_8) : var_19));
    var_21 += (~var_18);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_22 = (max(var_9, (((((arr_6 [i_2] [2]) || (arr_1 [i_0 + 4] [7]))) ? (arr_2 [i_0]) : var_17))));
                    var_23 = (((arr_2 [i_0 + 4]) == (((((((!(arr_1 [i_1] [i_2])))) <= (!36028797018955776)))))));
                }
                var_24 = ((((max(-47, var_2))) ? var_15 : 131));
                var_25 = (((((arr_4 [i_0] [i_0 + 3] [i_0]) - -40)) - 52661));
                var_26 = (((max(((21446 ? (arr_5 [i_1] [i_0 - 1] [i_0 + 4]) : (arr_0 [i_0 + 4] [i_1]))), 30)) == ((~(arr_5 [i_0 - 1] [i_0 + 4] [i_0 + 3])))));
            }
        }
    }
    var_27 = (((((var_19 & var_9) ? ((-17679 ? var_14 : var_15)) : -17679)) <= ((max(var_3, (-17679 <= var_14))))));
    var_28 |= -var_1;
    #pragma endscop
}
