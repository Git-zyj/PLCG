/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 -= (max(0, 8));
                    arr_8 [i_1] = (max(((max(0, (arr_1 [i_0 + 1])))), (((arr_2 [i_0 - 2] [i_0]) | (arr_4 [i_0 - 1])))));
                    var_11 += (max((127 > 133), (max((arr_5 [0] [i_1 + 2] [i_1 + 2]), (((!(arr_4 [i_2]))))))));
                    arr_9 [i_1] = (min((1 > 110), (min((min(var_4, (arr_0 [i_0]))), (max(var_2, (arr_0 [7])))))));
                }
            }
        }
    }
    var_12 = (max(0, 0));
    var_13 -= var_5;
    #pragma endscop
}
