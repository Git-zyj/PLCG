/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_14 = (+(((arr_3 [i_0]) ? var_12 : (arr_3 [i_0]))));
            var_15 = 0;
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_16 = 1;
                    var_17 = 21893;
                }
            }
        }
        var_18 += -5870030645874920222;
    }
    var_19 = var_11;
    var_20 = var_13;
    #pragma endscop
}
