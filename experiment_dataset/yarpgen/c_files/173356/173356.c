/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_4 ? (min(var_0, var_5)) : (((min(-15391, var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_13 = (min(var_13, (arr_7 [i_0] [i_0] [2] [i_0] [i_0] [i_0])));
                        var_14 = ((-15391 ? (min(-253, ((-4790968608615653154 ? 208 : 7)))) : ((min(((min(var_8, 85))), 4)))));
                    }
                    for (int i_4 = 1; i_4 < 6;i_4 += 1)
                    {
                        var_15 = (min(-32757, (min(15407, (arr_5 [i_1] [i_0] [i_2])))));
                        var_16 = ((((((!var_0) ? ((-(arr_4 [i_0] [i_1] [i_1] [i_0]))) : var_4))) > ((((max(3640130451, 1568157564))) ? var_3 : (var_1 + 15062470126525095421)))));
                    }
                    var_17 = (23 && 0);
                }
            }
        }
    }
    var_18 = ((((max(((max(var_7, var_9))), var_7))) ? var_5 : (((-(!12367853682678961505))))));
    #pragma endscop
}
