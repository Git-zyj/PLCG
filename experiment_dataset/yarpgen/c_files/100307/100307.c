/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (((((-(arr_2 [i_0])))) ? (min((arr_4 [i_1 - 1] [i_1]), ((-(arr_0 [i_0] [i_0]))))) : 12792002564114107092));
                    var_12 = (min(var_0, (arr_1 [i_0])));
                    var_13 = (max((max(var_1, (arr_8 [i_1 - 1] [1] [i_2]))), (((!(arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
