/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~-2858404265697830729);
    var_12 = (min(var_12, (((max(var_8, 28591))))));
    var_13 = (min(var_4, 2858404265697830728));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = (((arr_3 [i_0 - 1] [i_1]) ? var_5 : (arr_3 [i_0 - 1] [i_1])));
                    arr_8 [i_1] [i_1] [i_1] = ((28579 ? 521806559338402829 : -28595));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_11 [i_1] = (arr_6 [i_0 + 1]);
                    arr_12 [i_3] [i_1] [i_1] [i_0] = (arr_3 [i_0 - 2] [i_1]);
                }
                var_15 = (((var_7 ? var_1 : (((arr_3 [i_0 - 2] [i_1]) ? 1 : var_1)))));
                var_16 = ((((((4277245482 || -892337542) ? var_0 : var_9))) ? ((((var_1 >= (!var_6))))) : 4294967232));
                arr_13 [i_1] = (!var_2);
            }
        }
    }
    #pragma endscop
}
