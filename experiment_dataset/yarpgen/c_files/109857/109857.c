/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((102 <= (max(((max(112, var_16))), var_0))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 2] [i_1] [i_2 + 2] = ((((max(3484, 1706462879))) | ((~(((arr_5 [i_2 - 1] [i_1] [i_0 + 1]) ? -2532871585180326751 : 115))))));
                    arr_10 [i_2 - 1] [i_1] [i_0 - 1] &= ((-(((-118 / -118) / (min(121, 3630475053888046618))))));
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
