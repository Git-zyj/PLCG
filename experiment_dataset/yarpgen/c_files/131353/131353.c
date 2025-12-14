/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = 15910576185705802408;
                var_11 += ((3375682008456534572 << (((arr_0 [12] [16]) - 2332769059))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = (max(var_12, 6589));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 ^= ((-48 << (6616 - 6616)));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = (((-6587 * (((arr_4 [i_0] [i_0]) >> (-123 + 154))))));
                                arr_15 [i_0] [i_3 + 1] = (arr_1 [i_0]);
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] = (((arr_3 [i_2]) & 14130));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_19 [i_0] = 6605;
                    arr_20 [i_0] [i_1] [i_0] = (arr_11 [i_0]);
                    var_14 = (min(var_14, 48013));
                }
                var_15 = 14153;
            }
        }
    }
    var_16 = (((120 | (8069134112393119991 ^ 1814))));
    #pragma endscop
}
