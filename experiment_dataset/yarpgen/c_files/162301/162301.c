/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (arr_6 [i_4] [i_4] [i_4] [i_4]);
                                var_15 = (min(var_15, ((((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_9 : -8388608))) < ((-var_9 ? (((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : 0))))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_0] = (-20983 ? (((!(var_1 * -20983)))) : 20983);
                    var_16 = (max(var_16, (((-410448306 < (((!((min(20986, var_1)))))))))));
                }
            }
        }
    }
    var_17 = (min(var_17, (max(var_8, var_8))));
    #pragma endscop
}
