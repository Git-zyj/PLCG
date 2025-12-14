/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((18922 ? (min(((3976570748532374838 ? 3976570748532374837 : 14470173325177176777)), 3976570748532374834)) : (((~(~var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 += ((8388544 ? (((((max((arr_5 [i_0] [6] [i_0]), var_2)))) % (9696623281830345218 / var_6))) : 31129));
                    arr_9 [i_2] [i_2] [i_2] = ((((((arr_2 [i_0 + 1]) ^ (((arr_1 [2] [17]) ? var_1 : (arr_6 [i_2] [i_1])))))) ^ 9696623281830345236));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_14 = var_5;
                                var_15 = (max(var_15, ((((((((((arr_17 [i_7] [i_7] [i_5 - 2]) ? 268 : 1))) ? (arr_22 [i_7] [i_4] [i_3]) : ((8929296289826273335 & (arr_21 [i_3] [1] [i_4] [i_5] [i_4] [i_5] [i_7])))))) ? (min(((-(arr_11 [1] [i_5]))), var_1)) : ((((((min(14470173325177176778, 8750120791879206412))) || -var_10)))))))));
                            }
                        }
                    }
                    arr_24 [0] [0] [i_5] &= (((arr_16 [i_3] [i_3] [i_3]) / ((-44 ? 1 : 14470173325177176770))));
                    var_16 = (min((max(2001811865, (arr_11 [i_3] [i_5 + 1]))), -2001811839));
                }
            }
        }
    }
    #pragma endscop
}
