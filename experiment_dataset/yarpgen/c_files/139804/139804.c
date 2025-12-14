/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(max(1614, 7577))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((-6804 ? ((134217600 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1]))) : ((-(arr_4 [i_1 - 1])))));
                arr_7 [3] [3] [3] = (arr_3 [i_0] [i_1] [i_0]);
                arr_8 [i_0] [i_1] = (arr_5 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_14 [i_2] = ((134217604 ? (((arr_0 [18]) ? (arr_0 [i_2]) : (arr_2 [i_2] [i_3]))) : (arr_0 [i_2])));
                var_17 = ((((((((134217600 ? (arr_12 [i_3]) : (arr_9 [i_2])))) ? (arr_13 [i_3]) : (arr_3 [i_2] [i_3] [i_3])))) ? (arr_9 [i_2]) : ((-207158360 + ((1 + (arr_2 [i_2] [i_2])))))));
            }
        }
    }
    var_18 = var_3;
    var_19 = var_2;
    #pragma endscop
}
