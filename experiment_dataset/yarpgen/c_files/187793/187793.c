/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((-72 > (arr_3 [i_1 + 1] [i_1 + 2])))) != (!var_4))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = (min(((((min((arr_4 [i_0] [i_1] [i_1]), var_16))) ? 62 : var_8)), (((!(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                var_18 = (arr_1 [i_0]);
                            }
                        }
                    }
                    var_19 += (arr_9 [6] [i_1 + 2] [i_1] [i_1 + 2]);
                }
            }
        }
    }
    var_20 -= 1204119132939558133;
    #pragma endscop
}
