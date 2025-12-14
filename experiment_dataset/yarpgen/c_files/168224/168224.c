/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 += ((~((144 ? 1 : 524287))));
                    var_19 = (~742599254);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                {
                    arr_16 [i_3] = ((7 ? -2107887093 : 4294443000));
                    var_20 = 285597109;
                    arr_17 [i_3] [i_3] [i_5] [i_5 - 1] = ((-((~(arr_2 [i_3])))));
                }
            }
        }
    }
    var_21 = ((var_17 | (((var_15 ? var_9 : (3965462586851785059 && 4294443000))))));
    var_22 = ((min(742599267, 742599269)));
    #pragma endscop
}
