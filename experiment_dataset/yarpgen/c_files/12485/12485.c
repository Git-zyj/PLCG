/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_11 = (min(var_11, (arr_5 [i_3] [i_0])));
                        arr_8 [i_0] [i_0] [i_2] [i_3] [i_3] = (arr_2 [i_0] [i_0] [i_3]);
                    }
                    var_12 = ((((((13 + (arr_6 [i_1 + 2] [i_2] [i_2] [i_1 + 2] [i_0] [i_0])))) ? var_3 : (13 > 238))));
                }
            }
        }
    }
    var_13 = ((var_6 / (-1 + var_4)));
    var_14 = var_3;
    #pragma endscop
}
