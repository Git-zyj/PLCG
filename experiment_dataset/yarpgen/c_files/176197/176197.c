/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (((arr_5 [1]) ? 1223559393 : 1158662347));
                var_15 = 3136304949;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_12 [i_2] = ((((max(var_4, 3136304948))) ? var_12 : ((-1111348117314329157 ? ((3136304949 ? var_3 : var_12)) : (-1111348117314329155 > 1)))));
                arr_13 [2] [i_3] = (min(((((-16 != (arr_11 [i_3]))))), (arr_10 [i_2] [i_3] [i_3])));
                var_16 -= var_1;
                arr_14 [19] [i_3] = ((-9 ? ((max(var_1, ((0 ? var_6 : (arr_2 [18])))))) : ((-26 ? 1111348117314329156 : ((var_9 ? var_12 : 0))))));
            }
        }
    }
    var_17 &= var_3;
    #pragma endscop
}
