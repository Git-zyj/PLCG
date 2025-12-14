/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_0);
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_13 |= (arr_1 [18] [18]);
                            arr_11 [20] [15] [i_1] [1] [i_1] [i_3] = (arr_4 [11] [i_3] [i_3]);
                            arr_12 [1] [i_3] [19] [9] = (!1143231432);
                            arr_13 [i_2] [i_2] [i_1] [i_2] [i_1] [i_1] = (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_3]) && ((((arr_6 [i_0] [i_3]) ? -1143231430 : 14265360249492024386)))));
                        }
                    }
                }
                var_14 = (max(var_14, (((((((((arr_9 [i_0] [i_0] [i_0] [1] [11]) < (arr_5 [i_0] [i_0] [21] [24])))) - 0)) % ((((min(var_4, (arr_0 [i_0] [i_0])))) ? (1 + 1) : -328800124)))))));
                var_15 = (max(var_15, ((min(((~(arr_5 [16] [1] [i_0] [i_0]))), ((-(arr_5 [i_1] [i_1] [2] [2]))))))));
            }
        }
    }
    #pragma endscop
}
