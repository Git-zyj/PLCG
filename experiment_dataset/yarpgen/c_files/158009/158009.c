/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [2] = (951583042 >= 5889197642354117591);
                    var_21 = (min(var_21, (arr_0 [i_0 - 1] [i_0])));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (min((~var_9), -5889197642354117587));
                    var_22 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
