/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [7] [i_2] = ((~5608040711185676609) ? 64 : 5608040711185676601);
                    arr_10 [i_0] [1] [i_2] = (((((arr_7 [12] [i_1] [i_2] [i_1]) || var_6))) >> var_9);
                    arr_11 [i_1] [i_1] [i_1] = (min(-5130994299596915336, 3667676368));
                }
            }
        }
    }
    var_14 = ((((max(var_12, ((5608040711185676609 ? 627290928 : -10695))))) ? ((var_13 & (max(-714979298, 562915593682944)))) : (((((255 & var_1) != ((234 >> (4194303 - 4194288)))))))));
    var_15 = 1948375432;
    var_16 = ((max(((72057592964186112 ? var_6 : var_1), var_6))));
    #pragma endscop
}
