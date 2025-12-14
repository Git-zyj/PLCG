/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!-var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [10] = ((((((arr_2 [i_1 + 1]) + ((max(1, (arr_0 [i_0] [i_1]))))))) ? 211 : ((((max(32, 223))) - ((min(var_5, 56)))))));
                var_11 = (min(var_11, -var_5));
            }
        }
    }
    var_12 = 45;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            {
                var_13 -= (((((arr_12 [i_3 + 1] [i_3 + 1]) - 13692624614201507538)) | (((((~(arr_12 [i_2] [i_3 - 2]))))))));
                var_14 = var_1;
            }
        }
    }
    var_15 += ((var_2 | (~1)));
    #pragma endscop
}
