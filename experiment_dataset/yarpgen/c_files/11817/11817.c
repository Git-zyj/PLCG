/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_21 ^= (((arr_2 [i_0] [8]) | ((min(var_7, (!var_14))))));
                            var_22 = (min((((((max((arr_7 [i_0] [i_1] [i_0] [i_3]), (arr_10 [i_0] [i_0 + 1] [i_0] [i_2])))) ? (arr_6 [i_0] [i_2]) : 64403453064572039))), 8091742608561641252));
                            arr_11 [i_0] [i_2] [i_2] = ((~(min(var_8, (max(-1274150227, 1))))));
                            var_23 ^= ((((((max(var_19, 4042))))) ? var_3 : (((-((95 ? (arr_7 [i_3] [i_2 + 1] [i_0] [i_0]) : 254)))))));
                        }
                    }
                }
                var_24 = ((~(arr_0 [i_1 + 1])));
            }
        }
    }
    var_25 = var_11;
    #pragma endscop
}
