/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_2 [i_1]);
                arr_5 [i_0] [i_1] [i_1] = ((min(var_7, var_3)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_15 [12] = ((var_8 ? ((((max(-1366097514097751532, (arr_8 [i_2])))) ? var_8 : 1816)) : (((~(min(1805309553, 1366097514097751527)))))));
                    arr_16 [i_2] [i_3] [i_4] = (max(((-1366097514097751532 ? 1 : (-2147483647 - 1))), ((((var_1 ? var_9 : var_7)) / (13183622491814726062 != var_9)))));
                    arr_17 [8] [i_3] [i_3] [i_4] = ((+(((var_1 != ((max((arr_7 [i_3] [i_3]), var_7))))))));
                    arr_18 [i_3] = ((var_8 * 1) ? (arr_6 [i_3]) : ((((var_2 > (arr_6 [6]))))));
                }
            }
        }
    }
    var_11 = (((!((min(var_7, 15182895246115024566))))) ? (max((var_6 | var_4), var_7)) : (54 > -55));
    var_12 = ((--0) & var_3);
    #pragma endscop
}
