/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] = var_17;
                                var_18 = (!1114164045);
                                arr_14 [i_1] [i_1] [i_2 - 1] [i_2 - 1] [17] [i_1] [8] = ((((1848604874 || (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]))) ? (((arr_5 [i_1 - 1] [i_1] [i_1]) ? (arr_5 [i_1 - 1] [23] [i_1]) : 56902)) : ((3180803256 ? var_8 : var_16))));
                            }
                        }
                    }
                    var_19 = (min(var_19, ((((((0 ? -1848604871 : 1422817897))) && ((max(-1848604866, -1848604851))))))));
                    arr_15 [i_1] [i_1] = (max(1407476316, (((!(arr_2 [i_0]))))));
                }
            }
        }
    }
    var_20 ^= (((((var_10 ? var_12 : var_7))) ? (var_1 - var_3) : ((max(var_5, 3180803250)))));
    var_21 &= var_6;
    #pragma endscop
}
