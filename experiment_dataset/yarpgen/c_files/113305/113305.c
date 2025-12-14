/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (max((!1639897835601222976), ((-(min((arr_2 [i_0] [16]), var_4))))));
                var_12 = ((11028541822818761971 ? (-16301 < -16311) : (max(((((arr_0 [i_1]) ^ (arr_1 [i_0] [i_0])))), var_0))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 = (min(var_13, ((min((arr_5 [i_0] [i_1] [i_2]), (-787408970 && var_4))))));
                    var_14 = (min(var_14, 16318));
                    arr_8 [i_0] [i_0] [i_0] = (max(1, 119));
                    arr_9 [i_0] [i_1] [i_2] = ((~(arr_1 [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
