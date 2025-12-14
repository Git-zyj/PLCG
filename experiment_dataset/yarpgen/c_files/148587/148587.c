/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_14 = (((((-14 ? (((min(13, (arr_5 [i_2] [i_1] [i_0]))))) : (min((arr_6 [i_0] [i_1] [10]), (arr_2 [6])))))) != (max((arr_2 [i_0]), (arr_3 [i_2])))));
                    var_15 = ((max(((126 ? -43 : 113)), ((917598262331242062 ? (arr_5 [i_0] [i_1] [i_2]) : 13)))));
                }
                arr_7 [i_0] [i_1] [i_0] = (max((max((arr_6 [i_0] [i_0] [i_1]), 5599998955715563720)), (-14 != 14)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_17 [i_4] [i_4] = (arr_14 [i_4] [i_4] [i_4]);
                    arr_18 [i_3] [i_3] [i_3] [i_4] = ((8191 / ((61 ? 11657 : 41))));
                }
            }
        }
    }
    #pragma endscop
}
