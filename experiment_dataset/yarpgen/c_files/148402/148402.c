/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((!((min(30726, 48))))))));
                arr_6 [i_1 - 1] = (((((48 | (arr_0 [i_1 - 1] [i_0])))) ? ((((arr_0 [i_1 - 1] [i_0]) <= (arr_0 [i_0] [i_1])))) : -208));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] = (!208);
                            arr_14 [i_0] [i_2] [i_2] [i_3] = ((-(48 * 182)));
                            var_15 *= (((((min((arr_1 [i_3]), (arr_11 [i_3] [19] [6] [17] [17]))))) / ((54 ? var_8 : (arr_11 [i_0] [i_0] [i_2] [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_16 = var_9;
    var_17 = (min(63, (((!(208 < 201))))));
    var_18 = var_9;
    var_19 = var_0;
    #pragma endscop
}
