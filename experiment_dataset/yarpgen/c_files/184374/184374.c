/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = var_8;
                    var_14 = max((arr_6 [i_2]), ((17787379894561744524 ? 1977488227803896364 : (((max(var_5, (arr_3 [i_0]))))))));
                    arr_8 [i_0] [i_1] [i_0] = (2731252015 ^ -1977488227803896347);
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (((arr_0 [i_0] [i_0]) ? ((((var_3 >= (arr_5 [i_0] [i_0]))))) : (((659364179147807091 ^ var_7) & 17787379894561744544))));
                }
            }
        }
    }
    var_15 = ((var_11 != ((-115 % (((var_0 + 9223372036854775807) << (((var_0 + 5749919966409792133) - 47))))))));
    var_16 = (24 * var_9);
    #pragma endscop
}
