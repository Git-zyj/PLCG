/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 3017888391203045976;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (118 == var_14)));
                var_22 = (((var_5 ? 0 : (arr_2 [i_0] [i_0 - 1] [i_0 - 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] = var_0;
                            var_23 = (arr_5 [i_3] [i_2] [i_1] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_24 = (min(var_24, (((-3 == (((~((((arr_7 [i_0] [5] [i_0] [2]) >= -3195)))))))))));
                            var_25 += (arr_12 [i_0] [i_0]);
                            arr_14 [i_0] [i_1] [i_0] [2] [i_0] [i_0 + 3] = (((!(!var_15))));
                            arr_15 [i_0] [i_1] [i_4 + 1] [i_1] = (((((2097151 - (arr_1 [i_4 - 1])))) ? (!-32760) : ((1 ? -1628910002 : 3176566473604332311))));
                            var_26 = 876540761569129377;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
