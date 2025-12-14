/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_3] [i_3] = (((var_5 ? var_5 : 12254430714845583067)));
                            var_17 += (((((((~(arr_0 [i_0] [i_2])))) ? (((arr_1 [i_2] [i_2]) ? 1167091980 : var_15)) : -15024)) != (~1167091980)));
                            var_18 *= (arr_4 [i_3 + 2]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_19 = 1167091980;
                                var_20 = ((((((!(((var_12 ^ (arr_9 [i_5] [4] [i_1] [i_0])))))))) | (((((arr_7 [i_1] [i_1] [i_0]) / (arr_14 [i_0] [i_0] [i_4]))) * (arr_6 [2] [i_1] [i_0])))));
                                var_21 = (max(((-30951 ? (235544064 > 5513861395556556817) : 76)), ((((var_15 > (arr_17 [i_0] [i_1] [i_5] [i_5]))) ? ((min(43238, 76))) : (!var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
