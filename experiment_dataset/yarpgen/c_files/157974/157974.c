/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 - 2] = (arr_1 [i_0 - 2]);
                arr_6 [i_0 - 1] = (max((arr_0 [i_0]), (!0)));
                arr_7 [i_0] = (arr_1 [i_1]);
                arr_8 [i_1] [i_1] = (3405678132 != 1);
                arr_9 [i_0 - 1] = (((((-(((arr_0 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_0])))))) ? ((min(((min((arr_3 [i_0]), (arr_1 [i_1])))), (((arr_3 [i_1]) ? (arr_2 [i_0] [i_0] [i_0]) : 1))))) : (min((((6064614109307682505 ? (arr_0 [i_0]) : (arr_1 [5])))), -629181442939241289))));
            }
        }
    }
    #pragma endscop
}
