/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] = 117440512;
                    arr_9 [i_2] [i_1 + 2] &= ((-68719476736 ? 166 : (((((!(arr_1 [i_2] [i_2])))) | -32767))));
                    arr_10 [i_1] [i_0 - 4] [i_0] = (arr_0 [i_1 + 1]);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_3] = (max(138, (var_5 / var_4)));
                        arr_15 [i_1] [i_1 + 1] [i_1] [i_3] = 3398492589;
                        var_19 = ((((~(((-80181590 < (arr_4 [i_1]))))))) ? (min((3 ^ 9034), ((min(8191, 1))))) : 1876971420);
                    }
                }
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
