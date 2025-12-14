/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((21628 && (((-57 & (arr_0 [14] [i_1]))))));
                    arr_6 [i_0] [i_2] [i_2] = ((((!((!(arr_2 [14])))))));
                    var_16 = ((((!(((arr_5 [i_0] [i_1] [i_2]) || (arr_4 [15] [i_1] [i_2]))))) || (((arr_1 [1]) || (((arr_0 [i_1] [i_2]) || 1467388138))))));
                    arr_7 [i_2] = 242;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_17 = ((+((((-72 ^ 21627) == 1)))));
        arr_10 [10] [i_3] = (((arr_8 [i_3]) != (((((!(arr_8 [i_3]))))))));
    }
    #pragma endscop
}
