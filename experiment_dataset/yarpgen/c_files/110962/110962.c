/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (65535 | 2489254331);
                    var_20 += (min(-var_3, ((10349 ? ((var_12 ? 0 : 2120492804)) : (arr_8 [i_2 - 1] [i_2 + 2] [i_2 + 2])))));
                }
            }
        }
    }
    var_21 = var_8;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_22 ^= -1073741824;
                    arr_18 [i_3] [i_4] [i_3] = (max((arr_11 [i_3]), 184));
                    var_23 |= ((((var_2 ? var_7 : 7)) | (max((1 >= 255), -32704))));
                }
            }
        }
    }
    var_24 = (min(((25 ? ((var_13 ? -5716852521954893756 : var_2)) : (((0 ? var_18 : 64))))), 1));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                var_25 += (((-2147483647 | -47) <= (arr_8 [i_6] [i_6] [i_7])));
                var_26 = ((((~((((arr_5 [i_6] [i_6] [7]) <= (arr_19 [i_6] [i_6])))))) | (((((var_17 ? (arr_9 [i_6]) : -4))) ? (~62785) : ((min(0, (arr_16 [i_6] [i_6]))))))));
                var_27 = ((~(((((1 ? var_0 : 407976486)) < (arr_3 [i_6] [i_6]))))));
                var_28 -= (max((max(((-8516389973938857497 ? 30 : (arr_10 [i_7]))), (arr_9 [i_6]))), 36));
                var_29 *= var_17;
            }
        }
    }
    #pragma endscop
}
