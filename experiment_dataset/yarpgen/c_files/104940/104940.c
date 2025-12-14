/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [13] [12] [5] = ((((3641366701 ? 653600571 : 3641366703))) / (((!1370937659) ? var_10 : (((var_6 >> (3641366697 - 3641366682)))))));
                    var_15 = (((((((arr_1 [i_1]) >= var_10)) ? (arr_1 [7]) : 15097442015922236715)) <= (((arr_2 [i_0 + 3]) ? var_12 : (arr_2 [i_0 + 3])))));
                    var_16 = (((~(arr_3 [i_0 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
