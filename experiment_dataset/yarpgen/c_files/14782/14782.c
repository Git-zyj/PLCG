/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = var_17;
                arr_6 [i_0] = 881431767;
                arr_7 [i_0] [i_0] [i_1] = (arr_0 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = 1218727248;
                                arr_20 [i_6] [i_5] [i_2] [i_3] [i_2] = ((200 ^ (((((-3956531463202176923 ? 58 : 2337531258))) ? var_1 : ((-3956531463202176923 ? (arr_9 [i_3]) : (arr_5 [11])))))));
                                var_20 = ((((-191017919 ? ((((arr_16 [i_2] [i_2] [i_2] [i_2]) ? 1885686889 : (arr_10 [i_3] [i_3] [i_6])))) : (((arr_16 [i_6] [7] [7] [i_6]) ? var_13 : var_1)))) <= ((((!(arr_13 [i_2])))))));
                            }
                        }
                    }
                }
                arr_21 [i_2] [3] [i_2] = 3956531463202176923;
                var_21 = (max(var_21, (((((((arr_9 [i_2]) ? (arr_5 [i_2]) : var_2))) ? (~var_12) : ((((arr_10 [3] [i_3] [i_3]) / 56))))))));
                var_22 ^= (64 <= var_1);
            }
        }
    }
    var_23 = (var_13 ? (45148 > var_8) : (var_4 % -471878525));
    #pragma endscop
}
