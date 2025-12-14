/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= 1;
    var_20 |= ((((var_11 ? (max(144115188075593728, var_12)) : ((var_9 ? var_3 : 144115188075593728))))) ? (~var_10) : 144115188075593728);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 |= (max((arr_0 [i_3]), (min(-1, ((0 << (2251589674 - 2251589662)))))));
                                arr_14 [i_0] [i_3] [i_0 - 1] [i_3] |= 41569;
                                var_22 -= -1868092220;
                                arr_15 [i_0] [i_0 - 1] [i_4] = (max((min(18302628885633957888, (((4902932128506969536 << (((arr_10 [i_0] [i_0] [i_0] [i_0]) - 12665451429155024858))))))), ((max((~1), (~var_11))))));
                            }
                        }
                    }
                }
                var_23 = (((-((var_17 ? 0 : 1846993863)))));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_24 = ((~(((((~(arr_1 [i_0 - 1])))) ? (((arr_21 [i_0 - 1] [i_1] [i_7]) ? var_3 : var_17)) : 1))));
                                var_25 = (max(var_25, (((-2 ? (((~(arr_2 [i_0 - 1] [i_6 - 3])))) : (((((23971 ? (arr_23 [i_1]) : (arr_22 [i_0] [1] [i_5] [i_6 - 1])))) ? (1 & 41582) : (min(1, 2043377625)))))))));
                                arr_24 [i_7] [i_1] [5] [i_1] [i_0 - 1] = ((~(arr_9 [0] [i_0 - 1] [i_6 - 2] [i_6] [i_7])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            {
                                arr_31 [i_9] [i_1] [i_8] [i_9] = ((~((((min((arr_22 [i_0 - 1] [i_0 - 1] [10] [i_0]), var_13))) ? ((((arr_19 [i_0] [i_0]) ? 61137 : var_4))) : ((-21334 ? 13912457530078596273 : (-32767 - 1)))))));
                                arr_32 [i_0 - 1] [i_9] [i_5] [i_8 - 2] [i_9] = 13;
                                arr_33 [i_9] = ((~((~(arr_11 [9] [i_9 - 1] [i_8 + 2] [i_0 - 1])))));
                            }
                        }
                    }
                }
                arr_34 [i_0] [i_0] [i_0] = 1048544;
            }
        }
    }
    #pragma endscop
}
