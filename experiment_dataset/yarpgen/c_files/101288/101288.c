/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((16383 ^ (~var_10)));
    var_16 = (max(var_16, 11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((-((~((1 ? -579756677901814056 : -1))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = -82;
                                var_18 ^= ((-((-90 ? 133693440 : 1117103813820416))));
                            }
                        }
                    }
                    var_19 = (-(29 % 3758113090630551320));
                }
                var_20 = (((~-1117103813820416) & 1));
            }
        }
    }
    var_21 = (max((((3 ? 2147483647 : 112))), var_13));
    #pragma endscop
}
