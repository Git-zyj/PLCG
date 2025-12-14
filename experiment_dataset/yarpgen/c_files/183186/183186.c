/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((max(var_4, 7756885259959066052)) ^ (-7756885259959066052 - -7756885259959066033))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] = ((((arr_3 [i_0] [i_1 + 1]) ? (arr_4 [i_0] [i_1 + 1] [i_0 + 2]) : (arr_4 [i_0] [i_1 + 1] [i_0 + 2]))));
                    var_14 = (!(((1 & 2061584302080) >= 15684988648161762259)));
                }
                arr_9 [i_0] = ((((((arr_2 [i_0]) == (arr_2 [i_0])))) - (max(((max((arr_7 [i_0]), (arr_1 [i_0] [i_1 + 1])))), (((arr_5 [i_0] [i_0] [i_0]) * var_4))))));
                arr_10 [i_0] [i_1] = (arr_3 [i_0] [i_0]);
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
