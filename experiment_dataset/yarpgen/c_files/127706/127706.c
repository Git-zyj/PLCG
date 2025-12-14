/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -1362830898;
    var_14 = (max(var_14, ((((min(var_12, (max(var_3, -1362830898)))) / ((min(-1362830898, var_12))))))));
    var_15 = 25882;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = -70;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = ((-1362830898 || ((((max(var_4, var_0)) | 10913)))));
                            var_18 = 255;
                        }
                    }
                }
                var_19 = (max(var_19, (arr_7 [i_1 - 1] [i_1] [i_1] [i_0] [i_1] [i_1])));
                var_20 = ((((((arr_7 [i_1 + 2] [i_1] [i_1 + 1] [i_0] [i_1 + 2] [i_1 + 2]) + (arr_7 [i_0] [i_1] [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 2])))) ? ((11 ? (arr_7 [10] [i_0] [i_1 + 1] [i_0] [i_1 - 3] [i_1 - 1]) : (arr_7 [i_1 - 3] [i_1] [i_1 - 2] [i_0] [i_1 - 3] [i_1 + 1]))) : (((arr_7 [i_0] [12] [i_1 + 2] [i_0] [i_1 + 2] [i_1 - 3]) ? -26597 : 39674))));
            }
        }
    }
    #pragma endscop
}
