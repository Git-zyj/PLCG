/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_14 ^= ((((~(arr_3 [i_1]))) | ((-(arr_3 [i_1])))));
                    arr_9 [i_0] [i_0] = var_2;
                    var_15 = (min(var_15, (((((((arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : var_10))) ? ((max((((var_0 == (arr_8 [i_0] [i_1])))), (~var_2)))) : (((arr_3 [i_1]) ? var_4 : ((~(arr_2 [i_0]))))))))));
                    var_16 = (min(var_16, (((~((-(arr_0 [i_1]))))))));
                    var_17 = (max(((max(((((arr_1 [i_0]) && (arr_7 [i_0] [i_1])))), (arr_6 [i_0] [i_2 + 1] [i_2 + 1] [i_2 + 1])))), (((arr_1 [i_0]) + (max(var_3, 5814007826339598813))))));
                }
            }
        }
    }
    var_18 = ((~var_9) ^ var_11);
    #pragma endscop
}
