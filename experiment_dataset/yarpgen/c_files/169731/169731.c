/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (min(((max(var_6, var_18))), ((((max(5067549531369318720, var_6))) ? (!1) : (max(1173325531, 1173325538))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 = ((var_8 - (min((max(10309837860276949980, 31822)), (arr_4 [i_0] [3] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_22 = ((~(127 | 25357)));
                                var_23 += (((((arr_9 [i_0] [i_0] [0] [i_2] [i_3 - 1] [2]) == (arr_5 [i_4 - 1] [7] [i_2 + 1]))) ? -1643325540 : (arr_6 [i_0] [i_1 + 1] [i_1 + 1])));
                                var_24 |= (arr_6 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_25 += var_18;
                }
            }
        }
    }
    var_26 = var_12;
    var_27 = (min(var_27, (((+(((var_7 / var_10) ? var_3 : 1)))))));
    #pragma endscop
}
