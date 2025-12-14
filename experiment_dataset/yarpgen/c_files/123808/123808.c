/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (min(((513345860 + (max(0, 29102)))), var_8));
                    var_20 = (var_5 <= 115);
                    arr_6 [i_1] [i_1] [i_0] = (arr_0 [i_0 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = ((min(var_7, 3558307001990649535)));
                                var_21 = 21116;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
