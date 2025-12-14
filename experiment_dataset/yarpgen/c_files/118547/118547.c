/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (((arr_7 [i_0] [i_0] [i_0] [i_0]) << ((((((((arr_4 [i_0] [i_0] [i_0]) | (arr_5 [i_0] [i_1 - 2])))) - (((arr_6 [i_0] [i_0]) - (arr_2 [i_0] [i_1]))))) + 7005428834242533092))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (max(((((max((arr_5 [i_0] [i_1]), (arr_1 [i_0]))) != (min(1649550503, (arr_3 [i_0] [i_0])))))), (arr_3 [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
