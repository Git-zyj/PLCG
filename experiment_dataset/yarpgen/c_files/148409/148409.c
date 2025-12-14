/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_12 = 1;
                    arr_8 [i_0] = (((min(((4294967295 ? 10093 : 144)), (var_6 && var_5))) >= (arr_7 [i_0] [i_1 - 1] [i_1 - 1])));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (((!1) ? (!var_6) : ((((arr_5 [i_0] [i_2 + 2]) || ((((arr_4 [i_1] [i_1] [i_1 - 1] [i_0]) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_1])))))))));
                    var_13 -= ((var_9 ? (((((~(arr_0 [i_1])))) ? var_9 : var_3)) : (arr_1 [i_2])));
                }
                arr_10 [i_0] [i_0] [i_1] = var_7;
                var_14 = (((1 * var_9) ? (max((arr_6 [i_0 + 3] [i_0 - 2] [i_0] [i_1 - 1]), var_4)) : (arr_6 [i_1] [i_1 - 1] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
