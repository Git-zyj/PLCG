/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (((arr_0 [i_0]) ? var_6 : ((-(arr_3 [i_1 + 1] [i_1 - 1])))));
                var_11 = (max(var_11, (!13044)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = ((~(((((-1843511451304078296 ? -1843511451304078280 : 1212290909908621544))) ? (!var_7) : ((215 ? var_9 : (arr_8 [i_0] [i_1 - 2])))))));
                            var_13 = (arr_3 [i_1] [i_1 - 1]);
                            var_14 = (max(var_14, ((((((arr_8 [i_1 - 2] [i_2]) >= var_7)) ? (((arr_7 [i_1 + 3] [i_1] [i_2]) ? (arr_6 [i_1 + 2] [i_0] [i_2]) : var_6)) : ((((((arr_1 [i_0] [i_1 + 1]) ? var_0 : var_5))))))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = 1;
    #pragma endscop
}
