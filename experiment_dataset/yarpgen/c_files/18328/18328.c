/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (min((((((((arr_0 [i_0] [i_0]) ? 22978771 : (arr_3 [i_1 - 1])))) && var_15))), (arr_2 [i_1 + 1] [9])));
                var_21 = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) / (((((arr_5 [i_0]) >= -3269474139257255032)) ? ((-(arr_4 [i_0]))) : -1134876110))));
                arr_6 [i_0] = (arr_5 [i_0]);
            }
        }
    }
    var_22 = (min(52323, var_13));
    #pragma endscop
}
