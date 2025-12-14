/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] &= (arr_5 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = (!1073610752);
                            var_20 = (((((-(arr_4 [i_0])))) ? (arr_2 [i_0]) : ((3221356540 ? ((var_12 ? 1073610756 : 3221356543)) : (((arr_12 [i_0] [i_1] [i_1] [i_3]) ? 3221356541 : 32702))))));
                            var_21 = 1073610753;
                        }
                    }
                }
            }
        }
    }
    var_22 = (!(((1073610768 ? -1131517354910211427 : ((min(var_16, var_13)))))));
    var_23 = 1073610755;
    var_24 = ((((((-32767 - 1) ? (((-3608465354269767641 ? -32717 : var_17))) : var_0))) ? var_12 : ((var_11 ? -32711 : (!-32707)))));
    var_25 = var_4;
    #pragma endscop
}
