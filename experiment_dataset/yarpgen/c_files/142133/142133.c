/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((min(4006174686, 2385274461)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 |= (min((((-(((!(arr_6 [i_2] [i_2] [i_2]))))))), (-226322655 | 1664492886056729156)));
                    var_13 = (min((--9223372036854775807), 43));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_23 [i_5] [i_3] [i_4] [14] [i_6] [i_6] [14] = (arr_21 [i_3]);
                                var_14 = (arr_21 [i_7]);
                                var_15 = (((-32767 - 1) ? (!2754214917) : 21948));
                            }
                        }
                    }
                    arr_24 [i_5] = 2754214917;
                    var_16 = ((-((-((2127111177 ? var_3 : (-2147483647 - 1)))))));
                    arr_25 [i_5] = max((!-14), 90);
                }
            }
        }
    }
    var_17 += ((!-1664492886056729159) ^ (var_0 - var_2));
    #pragma endscop
}
