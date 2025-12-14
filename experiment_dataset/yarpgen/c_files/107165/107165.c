/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [5] = (min((~-15279), ((~(arr_1 [i_2])))));
                    var_20 = (((((((127 ? (arr_4 [11]) : 0)) + var_15))) ? var_5 : ((((((arr_0 [i_0]) ? -1733305159 : 7653546250750664755))) ? (arr_4 [i_0]) : 2096471523))));
                }
            }
        }
    }
    var_21 = var_7;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_9 [i_3] = ((((-(arr_7 [i_3])))) ? var_10 : ((255 ? (arr_7 [1]) : (arr_7 [i_3]))));
        var_22 &= var_0;
        var_23 = (!1694328387);
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_24 = (arr_10 [i_4] [i_4]);
        arr_13 [1] = -21;
    }
    #pragma endscop
}
