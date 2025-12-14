/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_4;

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_13 = ((((arr_2 [i_2 + 2] [i_0 + 1]) + var_6)));
                        arr_9 [i_2] [i_2] = (((((((max(6804217186689104042, var_10))) ? var_3 : (arr_8 [i_2 - 1] [i_2] [i_3] [11])))) ? (((((((arr_4 [2]) ? (arr_2 [i_1] [12]) : (arr_6 [i_2] [i_2] [14] [i_2])))) != (max(var_8, (-127 - 1)))))) : (((((((-127 - 1) + 75))) != (~14696013738901500938))))));
                        arr_10 [5] [i_2] = max(var_6, ((-108 ? 1205822842 : 3089144467)));
                    }
                }
            }
        }
        var_14 = (((((((-(arr_2 [8] [16])))) ? ((-32 / (-127 - 1))) : (max((arr_3 [6]), (arr_2 [9] [6]))))) / (((arr_0 [i_0 + 1] [i_0 - 2]) ? (arr_7 [i_0]) : 1073741824))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_15 = (((49186 ? (arr_4 [i_4]) : (arr_2 [i_4] [1]))));
        arr_14 [1] [14] = var_9;
        var_16 += -3089144454;
    }
    #pragma endscop
}
