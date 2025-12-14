/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((3453843555122306636 & var_7) ? (max((83 + var_2), 1647243008)) : (((-1647243015 ? ((206 ? 192 : 1511204126)) : var_11)))));
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [5] [i_0] [9] = (((((216 == 45) <= 46705)) ? (((-2147483647 - 1) - (~27))) : (arr_6 [i_0] [i_0] [i_1])));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [10] [4] [i_4] = ((((((2147483630 >= 14992900518587244980) ? 14992900518587244990 : ((18446744073709551608 ? 1799936465 : 18446744073709551609))))) ? (arr_12 [i_0] [i_1] [i_2]) : ((-((min(37386, 186)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((min(-110, -1630193557))) ? (arr_20 [2] [i_6] [i_5] [i_0] [i_0]) : ((min(15, 18446744073709551608)))));
                                var_17 = (arr_18 [0] [0] [i_1] [i_7 + 1]);
                                arr_23 [i_0] [i_0] [i_1] [i_5] [i_6] [i_7] = (arr_12 [i_5] [i_5] [i_5]);
                                arr_24 [i_0] [5] [i_5] [i_6] [5] [i_1] = (((((((((arr_9 [i_7] [i_1] [i_1] [i_1]) || (arr_21 [i_1])))) << (14992900518587244980 - 14992900518587244979)))) ? ((17621080379890749379 ? 61756 : 3453843555122306665)) : (((((0 >= 10) || ((((arr_15 [i_7] [i_6] [i_0] [i_0]) ? (arr_2 [i_0] [i_7 - 1]) : 3779)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
