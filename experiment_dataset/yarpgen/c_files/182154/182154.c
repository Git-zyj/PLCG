/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (245 < 1);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = ((6 * 250) << (((min(249, 9187343239835811840)) - 242)));
                            arr_9 [i_1] [i_1 - 1] [i_2] [i_3] = ((((min(5, 255))) ^ 0));
                            arr_10 [i_1] [i_1] = (((min((max(9259400833873739775, 431857417716998031)), (max(9187343239835811835, -33)))) - -4));
                            var_18 = -1;
                            var_19 = (max(((~(max((-9223372036854775807 - 1), 0)))), (((!(431857417716998029 != 114))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            {
                arr_17 [i_4 - 1] [i_4 - 1] [i_4 - 2] = ((!(!245)));
                var_21 = (min((((~(54577 % -33)))), 9259400833873739776));
            }
        }
    }
    #pragma endscop
}
