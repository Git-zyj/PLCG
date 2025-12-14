/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((max((arr_0 [i_0]), (arr_0 [i_0])))) : ((255 ? var_10 : (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 = -4170657507781510362;
                            var_14 = (max(var_14, ((min(((max(var_2, ((min(30, 1)))))), 41)))));
                            var_15 = var_9;
                        }
                    }
                }
                arr_9 [i_0] [i_0] = (((arr_4 [i_0] [i_1] [i_1]) + ((-2078614385979652371 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_1])))));
                var_16 = (!(arr_3 [i_1] [i_1] [i_0]));
            }
        }
    }
    var_17 = (min(var_17, ((min(var_10, 4129122372)))));
    #pragma endscop
}
