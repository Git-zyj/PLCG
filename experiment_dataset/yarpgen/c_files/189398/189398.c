/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 ^= arr_4 [i_1];
                arr_6 [i_0] [i_1] = ((((min(4294967267, 20)))) ? 2114638855 : (min(2143289344, (arr_5 [i_0] [i_1]))));
                var_17 = 878931094;
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = 4294967280;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    arr_15 [i_4] [i_4] = (((((arr_12 [i_2] [i_3] [i_4]) && (6 > 140737488355072))) ? 2408490476 : (min(2, 36))));
                    var_18 = (((((((arr_10 [i_2] [i_3] [i_3]) ? 2408490486 : 14))) ? 2133745125 : (max((arr_8 [i_2]), -7070034151930710915)))));
                    var_19 |= ((((((max(4294967267, 2902024796))) ? 4294967294 : ((4294967270 ? 4294967268 : 4294967249)))) != (arr_10 [i_2] [8] [i_4])));
                    var_20 = min(-6275478047265339871, (arr_8 [i_4 - 1]));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        var_21 &= ((((((arr_5 [9] [9]) ^ 12))) ? (max(38, -269508201029481447)) : ((((arr_3 [i_5 - 1] [i_5 - 1] [0]) >> (48 - 44))))));
        var_22 += arr_0 [i_5];
    }
    #pragma endscop
}
