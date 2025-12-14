/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -18653;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = -1452009009256033467;
                                arr_15 [i_4] [i_0] [i_2 - 1] [i_0] [i_0] [i_0] = ((((arr_14 [i_2 - 1] [i_0]) ? (arr_3 [i_2 - 2]) : (arr_14 [i_2 + 1] [i_0]))));
                                var_22 = (max(var_22, 1));
                                var_23 = (max(var_23, ((((((arr_3 [i_0]) >> (18650 - 18602))) + (arr_11 [i_2 + 1] [i_3 - 1] [8] [i_3] [i_4]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_24 = (min(var_24, (arr_7 [i_0] [i_6] [i_6])));
                            var_25 = (max(var_25, ((((((((((arr_9 [i_0] [i_1] [i_5] [i_5]) ? (arr_8 [i_0] [i_6] [i_5] [i_6]) : var_10))) ? (arr_14 [i_0] [i_6]) : (max(48737, (arr_18 [i_6])))))) ? ((((arr_9 [i_0] [i_1] [i_5] [i_6]) | (arr_17 [i_0] [i_1] [i_6])))) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_5]))))))));
                            var_26 -= (min(((min(-18654, -var_13))), (max(((((arr_3 [i_1]) ? 5007 : var_3))), (arr_12 [i_5] [i_0] [i_5] [i_1] [i_5])))));
                            var_27 -= -18658;
                        }
                    }
                }
                var_28 = 18653;
                arr_21 [i_0] [i_0] = (i_0 % 2 == 0) ? ((((((((((((arr_5 [i_0] [i_0] [i_1]) + 2147483647)) << (((arr_8 [i_0] [i_0] [i_1] [i_1]) - 180))))) ? (((~(arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])))) : 4900))) ? (-18654 != var_8) : -7578675900672421422))) : ((((((((((((arr_5 [i_0] [i_0] [i_1]) + 2147483647)) << (((((((arr_8 [i_0] [i_0] [i_1] [i_1]) - 180)) + 41)) - 7))))) ? (((~(arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])))) : 4900))) ? (-18654 != var_8) : -7578675900672421422)));
            }
        }
    }
    var_29 = (max((((38954 != (1 <= -5008)))), (~var_5)));
    #pragma endscop
}
