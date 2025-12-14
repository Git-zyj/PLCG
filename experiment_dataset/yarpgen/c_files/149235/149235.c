/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = var_10;
                var_17 = 104;
                arr_6 [i_0] [i_1] [18] = ((-1133038796 ? var_13 : (((!5619) * 1133038795))));
                arr_7 [i_1] = 4274396918;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 *= ((~((((max(var_10, (arr_3 [i_2] [i_3 + 1])))) ? (var_1 || 6080765056516183110) : (arr_5 [i_0] [i_3] [i_3])))));
                                var_19 ^= var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (var_15 == 983896255);
    var_21 += (((!var_14) >= ((var_15 ? ((1133038795 ? 2305843009213691904 : var_7)) : ((max(0, 9223372036854775800)))))));
    #pragma endscop
}
