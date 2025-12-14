/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_17 = ((var_0 ? ((77 ? var_1 : (arr_2 [19]))) : 3520829002));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = (((arr_8 [i_0] [4] [i_2]) - (arr_8 [i_0] [i_1] [i_2])));
                    var_18 = (((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_5 [i_0] [i_2])));
                }
                var_19 = (min((min(1128650799, 1)), (((~(((arr_6 [1] [i_1]) ? 1 : (arr_9 [16] [i_1] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
