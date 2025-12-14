/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(var_9, (((max(var_4, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((max((arr_3 [i_0]), (arr_2 [i_0] [i_1]))))) == ((((max((arr_3 [i_0]), (arr_0 [i_0] [i_0]))) > (max((arr_3 [i_0]), (arr_2 [i_0] [i_1]))))))));
                arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] = min(((min(31992, (arr_3 [i_1])))), (max((arr_0 [i_0 - 2] [i_1]), (min((arr_3 [i_1]), (arr_1 [1]))))));
                arr_6 [i_0] [i_0] [i_1] = (max(((~(max((arr_0 [11] [11]), (arr_2 [i_0] [i_1]))))), (~3012550761)));
                var_16 = (min(var_16, (((((((((min((arr_0 [i_0] [i_1]), (arr_1 [12])))) ? (arr_1 [i_1]) : (arr_0 [i_0 + 1] [i_1]))) + 2147483647)) << (219 / 386318562))))));
                arr_7 [7] [10] [i_1] |= (((arr_1 [i_0]) ? ((~(arr_0 [i_0] [i_1]))) : (arr_0 [i_0 + 1] [i_1])));
            }
        }
    }
    #pragma endscop
}
