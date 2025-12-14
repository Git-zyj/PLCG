/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((min((((var_16 ? var_15 : 48685))), 13733190584525471132)), var_1);
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = max(var_17, (var_5 - var_12));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 ^= (((((var_15 != (max(var_16, 127))))) == ((min(123, -124)))));
                                var_21 = ((((max(-127, 1073741823))) & (max((max(var_16, var_7)), (((var_13 ? 16832 : var_2)))))));
                                var_22 -= var_1;
                            }
                        }
                    }
                }
                var_23 = (min((-97 - 127), 4194296));
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_6] = (arr_14 [1] [i_1] [i_1] [i_6] [19]);
                                arr_20 [i_1] = 27997;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_24 = ((((((arr_8 [i_9] [i_1] [7] [i_1] [10] [i_0]) >= var_2)) || (var_1 % -127))));
                            var_25 = ((-((((arr_24 [i_1] [i_1]) ? var_12 : var_7)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
