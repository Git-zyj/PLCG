/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_10 = (max((((!(arr_0 [i_0] [i_0])))), (arr_0 [i_0] [i_0])));
        var_11 = ((((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (max((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (((arr_0 [i_0] [i_0]) & 2491293217))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_12 = 50769;
        var_13 += ((!(arr_2 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_14 = (arr_2 [i_1] [i_3]);
                        var_15 = -96;
                        arr_14 [i_1] [i_1] [i_3] [i_4] = ((~(arr_12 [i_1])));
                    }
                }
            }
        }
        var_16 = (arr_5 [i_1]);
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_20 [i_5] [i_6] = ((((max(1, (max(1, (arr_15 [i_6])))))) ? (((((max((arr_13 [i_5] [i_5] [i_6] [i_6] [i_6]), (arr_5 [i_5])))) || 16777215))) : 1));
            arr_21 [i_5] [i_5] [i_6] = ((arr_1 [i_5] [i_6]) ? ((((arr_9 [1]) ^ (arr_19 [i_6])))) : (max((arr_1 [i_5] [i_6]), (arr_3 [i_5]))));
        }
        arr_22 [i_5] = (min((~58350744), 0));
    }
    var_17 = var_9;
    #pragma endscop
}
