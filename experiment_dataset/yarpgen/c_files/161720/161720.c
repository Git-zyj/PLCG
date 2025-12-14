/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = ((!(((min(var_18, var_16)) != (((1 ? var_4 : 1880500353)))))));
    var_21 = 36905;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0 + 1] = (!((((min(var_7, 0)) ? 16982525821144701893 : (arr_9 [1] [i_0] [i_0] [i_0 - 1])))));
                                arr_17 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] |= (((((~(arr_2 [i_0])))) ? (+-1) : (((((arr_9 [i_1] [i_2] [i_3] [i_4]) ? 0 : (arr_7 [i_3] [i_2] [i_1] [i_0]))) << (((arr_1 [i_3]) - 16428))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
