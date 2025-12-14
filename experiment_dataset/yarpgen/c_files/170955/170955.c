/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (((var_6 || (arr_1 [12] [i_1]))));
                var_20 &= (((arr_0 [i_0]) ? var_9 : (arr_0 [i_0])));
                var_21 = (min((((var_12 && (!var_3)))), (((max(127, (-127 - 1)))))));
                var_22 = ((((max(6709974937685153895, (arr_5 [i_1])))) ? (arr_0 [i_0]) : (((min(2378344692817967433, (((903980572 || (arr_0 [9]))))))))));
            }
        }
    }
    var_23 = var_10;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_24 = (max(var_24, (((+(max((arr_10 [i_2] [i_3] [i_4]), var_12)))))));
                    var_25 = (((arr_3 [i_4] [i_3]) || var_14));
                    var_26 = 20787;
                }
            }
        }
    }
    #pragma endscop
}
