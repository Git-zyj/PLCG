/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 -= ((~(var_9 & var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = var_1;
                var_16 *= var_2;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] [i_3] = ((((max((arr_0 [i_2] [i_3]), var_6))) ? ((var_8 >> (((arr_0 [i_2] [i_2]) - 19784)))) : (~var_10)));
                arr_11 [i_2] [i_3] = ((!(arr_5 [i_3])));
                var_17 = (!var_6);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_17 [i_4] [i_4] [i_4] [i_2] |= var_3;
                            arr_18 [i_2] [i_3] [i_4] [i_5] |= (((!-12) == (arr_6 [i_3])));
                        }
                    }
                }
                var_18 = ((((((arr_2 [i_2]) ? (arr_1 [i_2]) : (arr_2 [i_2])))) ? ((var_11 & (arr_15 [i_2] [i_2]))) : (-1 || 2047)));
            }
        }
    }
    #pragma endscop
}
