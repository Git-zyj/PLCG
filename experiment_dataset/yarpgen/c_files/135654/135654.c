/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((max(((var_4 ? (arr_1 [i_0] [i_1]) : 64)), ((((arr_3 [i_0] [i_1] [i_1]) ? var_2 : (arr_0 [i_0])))))) & (var_1 && 213)));
                var_16 = ((((((max(var_0, 494873461)) == 494873483))) + 494873479));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 ^= (max((arr_2 [i_0]), var_0));
                            var_18 = (max(((max((arr_6 [i_0] [i_1] [i_2] [i_2]), (arr_11 [i_3] [i_0] [i_1] [i_0])))), (max(((((arr_7 [i_0] [12] [12] [1]) || (arr_11 [i_3] [2] [12] [i_0])))), (min(2351887810264652872, (arr_7 [i_0] [i_0] [i_0] [11])))))));
                            var_19 = (((((((arr_2 [i_1]) < var_5)))) ? (((arr_2 [i_0]) & ((var_8 ? (arr_9 [11] [i_2] [11] [3]) : 2251799813685247)))) : (arr_1 [i_0] [i_3])));
                        }
                    }
                }
                var_20 = var_4;
                var_21 = (min(((((min(3643410863, var_14))) ? (((arr_7 [i_0] [i_0] [i_1] [i_1]) ? (arr_1 [14] [i_1]) : (arr_1 [i_1] [i_0]))) : (arr_9 [i_0] [i_0] [i_0] [i_1]))), (max(var_13, 3800093795))));
            }
        }
    }
    var_22 = (((var_14 - var_13) || (((var_5 ? (var_6 * var_7) : 10)))));
    #pragma endscop
}
