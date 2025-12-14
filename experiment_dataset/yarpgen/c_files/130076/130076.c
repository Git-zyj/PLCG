/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((var_17 - (arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, ((((((127 ? 7545 : 1180614675))) ^ (((((106 ? (-2147483647 - 1) : (arr_7 [10] [i_1] [i_0])))) ? (((arr_9 [i_0] [i_1] [i_3] [3]) << (var_11 - 3510920313))) : (((-1180614676 ? 4294967295 : var_6))))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max(((min((arr_7 [i_3] [i_3 + 1] [i_1 + 1]), var_6))), ((1540138040 ? 8184 : (((-1256464554 ? 1256464553 : 4294967295))))));
                        arr_13 [i_3] [i_2] [i_0] = (((arr_4 [i_1 - 1] [i_2] [i_3]) / ((113 ? (~1180614675) : ((var_8 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_7 [i_1] [i_2] [i_1])))))));
                    }
                }
            }
        }
        arr_14 [0] = (max((max((!17), var_13)), ((((arr_4 [i_0] [i_0] [i_0]) + (arr_4 [i_0] [i_0] [i_0]))))));
    }
    #pragma endscop
}
