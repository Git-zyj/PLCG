/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((var_8 ? (var_3 / var_2) : (var_4 > 7762878324418740370))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((((((arr_0 [i_1 + 2] [i_1 - 2]) ? 7762878324418740370 : (arr_2 [i_1 + 1] [i_1])))) ? (max(8089587781935339478, 7762878324418740368)) : ((((arr_2 [i_1 + 1] [11]) ? 2756624257 : (arr_3 [i_1 - 1] [5])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 = ((((min(var_8, (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((max((arr_1 [i_0]), (arr_1 [i_2]))))));
                            var_13 = ((((((((arr_5 [i_2] [i_2] [i_2]) < -16384)) ? ((-(arr_2 [i_2] [i_3]))) : 2))) % (arr_0 [i_1] [i_3])));
                        }
                    }
                }
                var_14 += (((arr_4 [i_1 - 1] [i_1] [i_0]) >= (arr_5 [i_1] [i_1] [i_1 - 1])));
                arr_8 [i_0] = (((arr_0 [i_0] [i_1 + 2]) % (arr_0 [i_0] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_15 = ((((((((!(arr_7 [i_0] [i_1] [i_0] [i_0])))) << ((max(-22984, var_7)))))) || (((max(1, var_9))))));
                            var_16 -= (!((((arr_12 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1] [i_0]) + (arr_12 [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1] [i_0] [i_0])))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [4] = ((var_9 ? (((+(max((arr_5 [i_1] [i_4] [0]), var_1))))) : ((var_3 ? ((var_6 ? (arr_5 [i_0] [i_1 - 1] [i_0]) : var_8)) : (arr_10 [i_4] [i_4] [i_4])))));
                            var_17 = (((((-7762878324418740365 || (arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 1])))) > (-716858615534785512 > var_4)));
                        }
                    }
                }
            }
        }
    }
    var_18 |= var_7;
    #pragma endscop
}
