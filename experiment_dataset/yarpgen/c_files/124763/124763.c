/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = 4093392945306813475;
                                var_14 = ((32767 ? 14752 : ((max((-127 - 1), 14748)))));
                            }
                        }
                    }
                    var_15 = (((((-10622 ? 209 : 59968))) ? 10096090894841113665 : (~50790)));
                }
            }
        }
    }
    var_16 &= var_11;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 8;i_6 += 1)
        {
            {
                arr_19 [i_5] [i_6] |= 15;
                arr_20 [i_5] [i_6 - 4] [1] = (((~((max(50783, (-127 - 1)))))));
            }
        }
    }
    #pragma endscop
}
