/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = ((~((~(!var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] &= (min((((!(arr_0 [i_0])))), (((arr_3 [i_0] [i_0]) - (arr_4 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = (((((((12161477769792566610 != 12161477769792566610) == ((var_0 << (arr_5 [i_1] [i_1]))))))) > (arr_4 [i_0])));
                            arr_15 [i_1] [i_2] [i_1] [i_0] = ((-6285266303916985006 ? ((((!(arr_3 [i_3] [i_1]))))) : (6285266303916985005 >> 1)));
                            var_19 = ((-((~(arr_9 [i_0] [i_1] [i_2] [i_1])))));
                        }
                    }
                }
                var_20 -= ((-(arr_5 [i_1] [6])));
                arr_16 [1] = (((arr_2 [i_0] [1]) ? (((-(arr_0 [i_0])))) : (max((arr_11 [i_0] [i_1] [i_1]), (arr_11 [i_0] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
