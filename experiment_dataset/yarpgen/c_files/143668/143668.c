/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? (((arr_0 [i_0 - 1] [i_0 - 2]) ? (arr_1 [i_0 - 2]) : (arr_0 [i_0 + 1] [i_0 - 2]))) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = (min(((var_10 ? 88 : ((min(-84, var_1))))), (arr_1 [i_0])));
        arr_4 [i_0] = (max(((~(arr_0 [i_0 + 1] [i_0 - 1]))), (((arr_0 [i_0 - 1] [i_0 - 2]) | (arr_0 [i_0 + 1] [i_0 + 1])))));
    }
    var_12 = (min(var_7, var_2));
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_1] [i_1] |= ((((2620007465808738388 ? 17 : 75)) & ((min(77, 504)))));
                    arr_16 [i_1] [1] [1] = ((~((47018 ? -5279767470645970816 : (arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [1])))));
                    arr_17 [i_1] [i_1] [i_2] [13] = (((1 && 2039095647646999792) ? (~var_10) : (((((arr_12 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]) >= (((!(arr_10 [i_1] [2]))))))))));
                }
            }
        }
    }
    var_13 = var_5;
    #pragma endscop
}
