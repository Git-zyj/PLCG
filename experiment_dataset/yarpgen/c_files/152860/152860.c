/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = ((((arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1]) ? var_9 : (arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 2]))));
                    var_19 = (min(var_19, ((((((~(arr_6 [i_0])))) == ((((min(-32755, -840126563))) ? (arr_1 [i_1] [i_0]) : (min(var_15, var_3)))))))));
                    var_20 = ((~(min(76, var_17))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            {
                var_21 ^= ((!(arr_13 [i_3] [i_3] [i_4])));
                arr_15 [i_4] [i_4] [1] = (-((-var_13 | (arr_12 [i_3 + 1] [i_4 + 2]))));
                var_22 = (((((arr_13 [i_3] [i_3] [i_4]) ? (((arr_12 [i_3] [i_3]) - var_4)) : -79)) * (((((16 & (arr_12 [i_4] [12]))))))));
                arr_16 [8] [0] &= (~56);
            }
        }
    }
    var_23 = (((min(var_13, -0)) <= ((((var_0 > ((min(var_3, var_15)))))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                {
                    var_24 = ((-((var_13 ? (-11 | 65535) : 710437861))));
                    arr_26 [5] [i_6] [i_7] = -11;
                    var_25 |= ((15314216007511216608 ? (-75 < -3) : ((65519 | (arr_24 [i_7] [i_7] [i_7] [i_7 - 1])))));
                    arr_27 [i_6] [i_7 + 2] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
