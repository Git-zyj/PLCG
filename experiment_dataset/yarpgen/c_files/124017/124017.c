/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((-1363067759 ? 46214 : 31));
                    arr_8 [i_0] [i_0] [i_2] = (min(((max(31, (arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 2])))), ((134215680 ? (arr_7 [i_0 - 2] [i_0 + 1] [i_0 + 2]) : 3744114220))));
                    var_13 = ((((-(arr_6 [i_0 - 1] [i_1] [i_2]))) | ((65535 ? var_2 : (arr_6 [i_0 - 2] [i_2] [i_0 - 2])))));

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_3] [i_1] [i_2] = (min(55292, 65533));
                        var_14 = (arr_2 [i_0 + 2] [i_3 - 3]);
                    }
                    var_15 = (1 / 11913390869942631778);
                }
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
