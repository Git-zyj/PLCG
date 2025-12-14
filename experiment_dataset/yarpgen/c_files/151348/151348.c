/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [11] [i_0] = 32767;
                var_20 = (max((((((32767 ? (arr_3 [i_0] [8]) : 506494585))) ? (((241 ? 506494595 : -32762))) : ((-32767 ? (arr_4 [i_0] [1]) : 0)))), (arr_1 [i_1] [10])));
            }
        }
    }
    var_21 += var_9;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_22 = ((134217727 ? (-1 >= 32) : ((+(min((arr_11 [6] [i_3]), (arr_7 [1])))))));
                var_23 = (min(var_23, (min((arr_6 [i_2]), (((arr_6 [i_3]) ? (arr_6 [i_3]) : 0))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_24 = (max(-1, (arr_0 [i_4 - 1] [i_5])));
                            arr_20 [i_2] [i_3] [8] [i_4] = (--1475);
                        }
                    }
                }
                arr_21 [i_2] [i_2] [10] |= (((arr_17 [2] [i_3] [i_2] [2]) ? (((arr_15 [0] [i_3]) ? (arr_15 [4] [i_3]) : (arr_15 [6] [i_3]))) : (((!(arr_16 [i_2] [i_3] [i_3] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
