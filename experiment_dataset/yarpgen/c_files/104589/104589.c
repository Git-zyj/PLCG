/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (((((-6796104803520888658 && -113) | (((!(arr_7 [i_0] [i_1 + 1] [10] [i_3])))))) == (!226)));
                        var_21 += arr_0 [i_3];
                        var_22 |= ((((-(max((arr_2 [i_2] [i_1]), (arr_2 [i_0] [i_2]))))) % (((-(arr_1 [i_1 - 4]))))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_23 |= (((min(1358709557, -1358709557)) + 1358709540));
                            var_24 = (!1358709557);
                        }
                    }
                }
            }
        }
        arr_11 [i_0] = (((arr_9 [i_0] [17] [i_0] [i_0] [16] [i_0]) || (((arr_5 [i_0] [i_0] [i_0] [i_0]) && 1634083316))));
        var_25 ^= (((((!-1358709544) / (min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 5470558864660624790))))) ? -73055385 : 15);
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_26 *= -16153901045261624738;
        var_27 = ((((!(arr_9 [i_5] [11] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]))) || (arr_9 [i_5] [1] [i_5] [i_5 - 3] [i_5] [i_5])));
    }
    var_28 -= (((var_7 - var_4) != ((var_18 ? ((1 ? 4294967292 : 5470558864660624772)) : var_3))));
    var_29 = ((!((max(var_11, var_0)))));
    #pragma endscop
}
