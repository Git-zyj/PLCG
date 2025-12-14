/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 255;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] = (max(((max((arr_0 [i_0] [i_1]), (((arr_0 [i_0] [i_0]) && 7114324998054705839))))), (((-7114324998054705851 == -2147483644) ? ((var_13 ? 1 : 88640905)) : (((~(arr_6 [i_0] [i_1] [i_0]))))))));
                arr_8 [i_1] = ((!(arr_4 [i_0])));
                arr_9 [i_0] [i_1] [i_1] = ((-(arr_2 [i_0])));
                arr_10 [i_0] [i_1] [i_1] = (arr_6 [i_0] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
