/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122040
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
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 += (max(-16, ((69 ? 1833639506 : -1833639507))));
                                var_12 |= (32752 != -10);
                            }
                        }
                    }
                    var_13 = -618309349;
                }
            }
        }
    }
    var_14 &= ((!(var_2 ^ 1833639506)));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [i_5] [i_5] = ((13 ? -7084 : 584521900457648211));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_15 = ((-29598 ? 18446744073709551615 : -1833639507));
                                var_16 = (((arr_27 [i_9] [i_7 - 1] [i_6 + 1]) ? ((~((~(arr_26 [i_8] [i_8]))))) : (arr_24 [i_5] [i_6] [i_6] [i_6] [i_9])));
                            }
                        }
                    }
                    var_17 = (min(var_17, ((((arr_20 [i_6 + 2] [i_6 + 1] [i_7 - 1]) ? 173 : (~11527))))));
                }
            }
        }
    }
    var_18 = (max(var_18, (((((!17749) ? -17749 : 16)) >> ((((max(-11239, -9666))) + 9681))))));
    #pragma endscop
}
