/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((-(arr_0 [i_2 - 1])));
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((!(-32741 == -32741)));
                    arr_9 [i_1] = (-(((arr_2 [i_1]) % ((max(var_12, (arr_1 [i_1 - 2])))))));
                    arr_10 [i_1] [15] [9] [i_2] = (min((((arr_4 [i_2 - 2] [i_2 - 1] [i_1 + 1]) + (arr_3 [i_2 + 1] [i_2] [i_1 - 3]))), 9223372036854775807));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_20 [i_5] = (max((111 % 33622), 6));
                    arr_21 [i_3] [i_3] [i_5] [i_3] = ((((((((~(arr_1 [i_4])))) ? (33622 ^ -1921746686) : (~var_12)))) ? (arr_2 [i_5]) : ((((var_3 ^ (arr_2 [i_5]))) & 44738))));
                    arr_22 [i_3] [1] [1] [i_4] = var_5;
                    arr_23 [i_5] [i_4] = (min(((min((arr_19 [1] [i_4] [i_5] [i_5]), var_2))), (max(2, (((29371 ? 5 : var_4)))))));
                }
            }
        }
    }
    #pragma endscop
}
