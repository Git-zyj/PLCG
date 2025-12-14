/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0]) >> (((arr_1 [i_0]) - 445727114711460353))));
        arr_2 [4] = (((arr_1 [i_0]) != 2779));

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_19 = -7445708317326792439;
            arr_6 [i_1] [i_0] = ((-(((-9 || (arr_1 [i_1]))))));
            var_20 = (((arr_3 [i_0] [i_0] [i_1 - 3]) ? (arr_3 [1] [i_0] [i_1 - 2]) : -2805));
        }
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            arr_10 [i_0] = (arr_5 [i_2 + 2]);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_17 [7] [i_0] [i_0] [i_2] [8] [2] = ((5 ? 2782 : -105));
                        arr_18 [i_0] [i_2] [i_2] = (-(arr_5 [i_3 + 2]));
                    }
                }
            }
            arr_19 [i_0] [i_0] = ((-(arr_12 [i_0] [i_2 + 3] [i_2 + 3] [i_2 + 2])));
        }
        var_21 = 830082386;
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        arr_22 [i_5] |= (arr_4 [1]);
        arr_23 [i_5 + 1] = -14980;
    }
    var_22 = (~var_1);
    #pragma endscop
}
