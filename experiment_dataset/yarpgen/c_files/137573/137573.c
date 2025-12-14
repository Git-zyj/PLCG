/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((!(9223372036854775807 && 9179786302815945986)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_1] [i_1] [i_1] [21] = var_13;
                                arr_13 [8] &= var_14;
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_4] = ((!((max((arr_4 [i_0] [i_1 - 1] [i_3 - 1] [i_3]), (arr_9 [i_1] [i_2 + 2]))))));
                                var_16 = (min(var_16, 4661));
                            }
                        }
                    }
                    var_17 = (min((!var_6), var_2));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    var_18 ^= (((((var_4 ? (!var_4) : ((min(var_15, 4688)))))) ? ((484994873 ? (max(var_4, (arr_8 [13] [i_6]))) : (!-484994874))) : ((((min((arr_3 [i_5] [5]), var_11))) ? ((2581901084 ? var_3 : var_5)) : -484994882))));
                    var_19 = (min(var_19, ((((((var_13 ? var_12 : var_12))) ? (((arr_8 [i_5] [i_6]) ? 6965021607690085118 : var_7)) : (arr_4 [i_6] [i_6] [i_6] [i_5 - 2]))))));
                    arr_21 [i_6] = var_14;
                }
            }
        }
    }
    #pragma endscop
}
