/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((610544243 + 2162874246504081327) ? ((19750 >> (-4908597036420053297 != 15517835293165660284))) : var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_1] = (min(2162874246504081327, (max(var_5, -8782092401766633354))));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_3] [i_3] [1] [i_1] = (((max((((arr_0 [4]) ? var_3 : 12957)), (arr_4 [i_1 - 1]))) != (122531281 > 3484475200)));
                        arr_13 [i_1] = (max((arr_5 [i_1]), (max(((min((-9223372036854775807 - 1), var_9))), (max(15326174459991939350, var_8))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
