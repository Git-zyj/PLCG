/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = ((((((((arr_2 [i_0] [i_2]) < 13519454019304037871))) / (arr_2 [i_1 + 1] [i_1]))) % ((((min(var_10, 0)) != (((((arr_4 [i_0] [i_1] [i_2]) && 3708376927)))))))));
                    arr_8 [i_1] [i_1 + 1] [i_1] = ((-(((min(720572710, 12766631360244359628)) & (arr_2 [i_0] [i_2 - 1])))));
                    arr_9 [i_1] [i_1] [i_2 - 1] = var_4;
                    var_17 = ((!(((-(((arr_1 [i_1]) << (3708376927 - 3708376909))))))));
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
