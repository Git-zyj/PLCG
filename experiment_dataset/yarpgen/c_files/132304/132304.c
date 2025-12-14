/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_1, (min(var_8, 136))))) ? ((370328329623713834 ? var_10 : 114)) : (((!(var_9 || 33554432)))));
    var_15 -= var_8;
    var_16 = ((!((var_13 <= (136 <= var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((-(max((arr_3 [i_0] [4] [i_0 - 1]), (~122)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = ((!(((~(~1))))));
                                var_19 = ((!(((-((max(1, 60465))))))));
                                arr_12 [i_0] = min((arr_6 [i_0] [i_0 + 2] [i_4 - 2]), ((((arr_2 [i_4 - 3]) || 33554430))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= (1907576177 > 5678011875089975269);
    #pragma endscop
}
