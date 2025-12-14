/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (25029 ^ 8126112187823028402);
                    var_14 = (min(46883, (min(1888643667, 18446744073709551615))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_15 = (((5944271833774511818 + var_0) ? (((arr_1 [i_4] [i_5]) ? (((25029 ? 2 : 29))) : (((arr_7 [i_3] [i_4] [i_5]) ? var_0 : 255)))) : ((min(((max(65535, 109))), (~253))))));
                        arr_16 [1] = (((((arr_11 [10] [i_4] [i_3] [3]) ? 6 : 16105579043106569062))) ? -5632 : ((5650 ? 17995607699539277456 : 14293314624474479834)));
                        var_16 = (arr_15 [i_3]);
                    }
                }
            }
        }
        var_17 |= (~0);
        var_18 = ((969662332 % (268435456 / 250)));
    }
    var_19 = var_9;
    #pragma endscop
}
