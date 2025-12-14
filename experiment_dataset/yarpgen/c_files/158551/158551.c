/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [1] [i_2] = 23982;
                    arr_7 [i_2] [10] [i_2] [i_2 - 1] = ((46574 ? (max(-336654326, 9051999324455507051)) : ((min((arr_3 [i_2 - 1] [i_2 - 1]), (~0))))));
                    var_11 = (((max((max(var_6, 3)), (!1))) == (arr_1 [10])));
                }
            }
        }
    }
    var_12 = (~var_8);
    var_13 = var_3;
    var_14 = (min(var_14, var_1));
    #pragma endscop
}
