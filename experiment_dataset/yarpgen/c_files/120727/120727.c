/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 -= var_4;
                    arr_6 [i_0] [i_1] [i_1] [i_0] = (max((min(((-(arr_5 [i_0] [i_0]))), ((3342238820204963783 ? var_14 : 0)))), var_9));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_0] = 15912599383539899170;
                        arr_12 [i_0] [i_1] [i_2] = 4294967272;
                        var_21 = var_2;
                    }
                    var_22 = ((var_7 < (((var_9 >> (var_2 == var_13))))));
                    var_23 = (!-1833629722);
                }
            }
        }
    }
    var_24 = ((((min(((981476128376703385 ? var_9 : var_2)), var_0))) ? ((min(var_11, var_13))) : (((var_5 != ((min(-58, var_3))))))));
    var_25 = (((((max(3342238820204963783, var_4)) == var_6)) ? var_7 : var_10));
    #pragma endscop
}
