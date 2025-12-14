/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 - 1] = -var_12;
                    arr_7 [i_0] |= (((((min(-32763, 2147483639)))) ? (((arr_5 [i_0] [i_0] [i_2] [i_0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : ((-2147483640 ? 32762 : 32762)))) : ((-((min(-22966, (arr_0 [i_0]))))))));
                    arr_8 [i_0] [i_1] = var_15;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_3] = ((-32760 ? (((var_1 * (arr_9 [i_4])))) : (-9223372036854775807 - 1)));
                arr_15 [i_3] [i_4] = (max(((-((504536020 ? (arr_11 [i_3]) : var_13)))), (((((((arr_13 [i_3] [i_4]) ? var_12 : 17713711528822600443))) ? (arr_10 [i_4]) : (arr_10 [i_3]))))));
                arr_16 [i_3] &= ((((((arr_9 [i_4]) ? (arr_9 [i_3]) : ((95 ? 1879048192 : 22718))))) ? (-32762 >= -32766) : 504536003));
                var_16 = ((-((~(~9223372036854775807)))));
            }
        }
    }
    #pragma endscop
}
