/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_10 ? ((var_10 ? var_10 : var_4)) : 48)), var_2));
    var_19 ^= (((((var_1 ? var_4 : 9043))) ? ((max(21127, 1))) : ((((var_15 ? 1 : 24338))))));
    var_20 ^= var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = ((((min(180, 12))) * (arr_5 [i_0])));
                var_22 ^= (!((((((arr_2 [i_1]) < (arr_2 [i_1]))) ? (min(-1474874580964166128, (arr_4 [i_0]))) : 1))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_23 = (((arr_0 [i_2]) ? ((1 ? 205 : 1)) : (((arr_3 [2]) ? -123 : (arr_3 [8])))));
        var_24 ^= (arr_1 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_25 = (max((((-653544832 / ((max((arr_8 [i_3]), 1)))))), 1482365956));
        arr_10 [i_3] = (min((~32767), ((max((((var_3 == (arr_9 [i_3])))), (arr_9 [i_3]))))));
        var_26 = (arr_8 [i_3]);
        var_27 ^= ((((min(1, (max((arr_9 [i_3]), 1))))) ? ((-((((arr_8 [i_3]) && 1309885799))))) : (arr_9 [i_3])));
    }
    #pragma endscop
}
