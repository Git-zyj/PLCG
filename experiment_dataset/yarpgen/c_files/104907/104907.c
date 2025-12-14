/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 &= ((1 ? -1 : ((((arr_4 [i_0] [i_1]) || (arr_4 [11] [i_0]))))));
                var_18 -= (((((arr_4 [i_0] [i_0]) ? var_9 : 1)) << (((arr_5 [i_1] [i_1]) + 71))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_19 = (max((((((150 ? var_8 : 65535))) ? ((-17 ? 34 : 60)) : (51 < 39))), 1466640894));
        var_20 = var_11;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_21 = (((arr_11 [i_3]) << (((arr_8 [i_3]) - 72))));
        var_22 = (((arr_6 [i_3]) ? 1 : (((((-1466640914 ? -8 : (arr_11 [8])))) ? ((551625620087391414 ? 16 : var_14)) : 7))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_23 = (((max(((7399 << (((arr_8 [22]) - 1080861003)))), 7397))) ? (min((-2147483647 - 1), (max((arr_13 [6]), var_9)))) : ((max(var_11, ((((arr_12 [i_4]) < 40426)))))));
        var_24 += (arr_8 [i_4]);
    }
    #pragma endscop
}
