/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = (max(var_12, ((max(var_5, (min((arr_1 [i_2]), (arr_3 [i_2]))))))));
                    var_13 &= (max((arr_4 [i_2]), (max((arr_1 [i_1 - 1]), (arr_1 [i_1 + 2])))));
                }
                var_14 = (((((-2348549549733024369 ? (max(var_4, var_2)) : (arr_0 [i_0 + 2] [i_1 + 3])))) ? (((474652539 ? ((2348549549733024388 ? 32 : 2348549549733024359)) : ((13616651748913771394 ? 2348549549733024382 : -2348549549733024394))))) : var_4));
            }
        }
    }
    var_15 = ((-((((2348549549733024374 ? var_4 : var_6))))));
    #pragma endscop
}
