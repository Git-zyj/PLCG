/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((!(((~((255 ? 4294967295 : var_11))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (max((((((min((arr_2 [i_2]), (arr_7 [i_0] [9] [2] [i_2])))) > (!-56)))), (max(0, ((((arr_6 [i_1] [i_0]) > var_12)))))));
                    arr_10 [i_0] [6] = (max(((((arr_7 [i_2] [i_2] [i_2] [i_2]) + (arr_7 [i_2] [i_1] [7] [i_0])))), (((arr_7 [i_2] [i_1] [i_0] [i_0]) ? (arr_7 [10] [7] [i_1] [7]) : var_12))));
                }
            }
        }
    }
    var_19 = (max(3247796508231505496, 1));
    #pragma endscop
}
