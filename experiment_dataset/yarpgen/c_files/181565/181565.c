/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_5 ^ (max(var_5, 25045)))) % var_17));
    var_21 = (min(var_21, (127 >= var_13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_2 - 2] = (((min((arr_0 [i_1] [i_2 + 3]), (arr_0 [i_0] [i_2 - 2])))) ? (max(-56, (arr_0 [i_0] [i_2 + 4]))) : (arr_0 [i_2 + 2] [i_2 - 2]));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
