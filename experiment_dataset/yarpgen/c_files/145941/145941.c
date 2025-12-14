/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 += 93;
                arr_6 [i_0] [i_1] [i_1] = (min((((var_5 ? var_3 : (arr_0 [i_0])))), (arr_2 [i_0] [i_1] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_13 [i_2] &= ((-((max((arr_12 [i_3]), (arr_8 [i_2] [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_21 += var_10;
                            var_22 = (min(var_22, -619176557));
                        }
                    }
                }
                var_23 = (max(var_23, ((((arr_14 [i_2] [i_3]) ? ((36 ? 1 : ((max(-91, -33))))) : ((max(0, 36))))))));
                var_24 = (min(var_24, -0));
            }
        }
    }
    var_25 = (min((min(162, -482328651)), (~2147483647)));
    var_26 &= var_0;
    var_27 = var_14;
    #pragma endscop
}
