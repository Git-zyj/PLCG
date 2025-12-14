/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(((2402689487703004250 << (var_6 + 30083))), 16044054586006547370)), var_8));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (((arr_5 [i_0 + 4] [12] [i_0] [i_0 + 1]) ^ (((16044054586006547348 ? (arr_1 [i_0 + 3]) : -1736263442)))));
                    arr_8 [i_0] [9] [5] [i_0] = (arr_3 [i_0 + 3]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_16 = (min(var_16, ((max((arr_0 [i_3] [i_4]), (max((arr_7 [i_5] [i_3] [i_3]), var_1)))))));
                    var_17 = (max(var_17, (((-525885374 ? 8131666647226605589 : (((13 << (10644219335103644482 - 10644219335103644458)))))))));
                    var_18 += (((~(arr_17 [i_4 + 1] [12] [i_5]))));
                }
            }
        }
    }
    #pragma endscop
}
