/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (1 & 1)));
                    var_18 = (min(var_18, (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0])));
                }
            }
        }
    }
    var_19 = ((!((max(((max(0, 78))), ((-135437969 ? var_3 : var_4)))))));
    var_20 = ((var_2 ? (max(945182690741969908, 4397509640192)) : var_5));
    #pragma endscop
}
