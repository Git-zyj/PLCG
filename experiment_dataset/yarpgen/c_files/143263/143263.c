/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((max((arr_1 [i_0]), (~var_5)))) ? (arr_1 [i_0]) : ((((var_1 ? var_1 : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_2]);
                    var_12 = ((((min(1, (arr_6 [i_0] [i_1] [i_2])))) ^ var_3));
                    var_13 = ((var_7 ? ((max(var_3, var_8))) : ((((var_9 ? -29630 : 1))))));
                    arr_8 [i_0] [i_0] [i_0] = (((29622 % var_4) - ((max((arr_5 [i_2] [i_2 + 1] [i_2 - 2]), (arr_5 [i_2 + 2] [i_2 + 2] [i_2 + 2]))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_16 [i_4] = ((((max((1 - var_6), (((arr_13 [i_3] [i_3] [i_4]) ? (arr_9 [i_3]) : var_6))))) ? (((((86 ? var_4 : var_4))) / (~var_7))) : (((-(arr_9 [i_3]))))));

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_19 [i_4] [i_4] [i_5] = ((!((min((((arr_13 [i_3] [i_3] [i_4]) ? (arr_9 [i_4]) : (arr_17 [i_3]))), ((max((arr_18 [i_3] [i_4] [i_4]), var_11))))))));
                var_14 += (max((((((var_10 && (arr_18 [i_3] [i_3] [i_5])))) << ((((1 ? -29634 : -1480421678)) + 29640)))), 17));
                var_15 = ((var_4 ? (((-179 ? ((max(var_5, var_11))) : ((72 ? var_8 : var_9))))) : var_7));
                var_16 = (min(var_16, ((((var_1 || var_0) ? (((((((8191 ? (arr_10 [i_4] [i_4]) : 251))) && var_11)))) : -1)))));
            }
            var_17 = 1480421678;
            var_18 = var_7;
        }
        var_19 *= (((arr_10 [i_3] [i_3]) << (((arr_10 [i_3] [i_3]) % (arr_10 [i_3] [i_3])))));
        var_20 &= ((65379 ? ((78 ^ ((var_6 ? -116 : (arr_13 [i_3] [i_3] [4]))))) : -var_6));
    }
    var_21 |= 1;
    #pragma endscop
}
