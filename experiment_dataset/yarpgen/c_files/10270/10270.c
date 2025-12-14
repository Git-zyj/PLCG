/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (min((min((arr_0 [i_0]), var_12)), (arr_6 [i_1 - 1] [i_1 - 1] [i_2])));
                    var_18 += (arr_6 [i_0 - 1] [i_0 - 1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    var_19 = min((min((arr_12 [i_3] [i_3] [i_3] [i_3]), (((arr_8 [i_3]) ? var_7 : (arr_9 [i_3] [i_4]))))), (max((!var_3), var_8)));
                    var_20 = max(((((max((arr_12 [1] [i_4 + 1] [i_4 + 1] [1]), var_6))) ? var_15 : -var_9)), (~var_12));
                }
            }
        }
    }
    var_21 &= ((var_2 ? var_13 : var_3));
    #pragma endscop
}
