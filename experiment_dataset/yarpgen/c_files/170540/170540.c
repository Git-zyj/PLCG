/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_14 = (((((arr_7 [i_0 + 3] [i_2 + 1] [i_2 + 3]) ? (arr_7 [i_0 + 3] [i_2] [i_2 + 1]) : (arr_7 [i_0 + 2] [i_2] [i_2 + 3]))) % (arr_1 [i_0 + 3])));
                    arr_8 [i_0] [i_1] [i_1] [0] = (((arr_6 [i_0]) ? (~var_4) : ((~(arr_2 [i_1])))));
                    var_15 = ((max((arr_7 [i_0 + 3] [i_1] [i_2 + 3]), (arr_6 [i_2]))));
                }
            }
        }
    }
    var_16 ^= ((((246 ? 884801593 : 884801600)) ^ var_8));
    #pragma endscop
}
