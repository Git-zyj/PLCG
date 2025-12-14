/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 ? (max(var_1, var_11)) : var_8));
    var_18 = (!((var_13 <= ((31323 ? 3371130440403023 : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = 8871592866883990084;
                var_20 = (((((((max(1063755160190038686, -614870147))) ? (min((arr_5 [i_0]), var_1)) : (-1840656931581085329 <= -111)))) ? (3095911074 * 13863) : var_9));
                var_21 = (((((17382988913519512942 ? -3177 : (3176 && 44)))) ? -1840656931581085333 : -58));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_22 = var_16;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_2] [i_3] [i_4] [i_5] [i_2] = var_6;
                                arr_22 [i_2] [i_3 + 3] [i_4] [i_2] [i_6] = ((28365 | ((var_12 ? (arr_20 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6 + 2] [i_3 + 1] [i_2]) : 1621749670118363507))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_28 [i_2] [i_2] [i_4] [i_7] [i_2] = (min((((!(((902226016 ? 13848 : 31713)))))), 614870138));
                                var_23 |= ((((((var_15 ? -14 : 1351991337)) * (!4265917665133891034))) / (((((max(var_12, var_12))) ? (min(-115, 66578283)) : var_7)))));
                                arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_7] = ((13863 ? (min(var_1, var_0)) : (min(var_14, -37))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
