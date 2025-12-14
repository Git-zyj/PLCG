/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-1 ? -328483507 : 29662));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_11 = (max(var_11, (arr_6 [i_1] [i_1])));
                    arr_8 [i_1] &= ((20 ? (((arr_7 [i_0 - 1] [6] [i_2] [i_1]) ? 12 : 58)) : -var_2));
                    arr_9 [1] [i_1] &= -10;
                }
                var_12 = (min(var_12, ((((((328483506 ? -11485 : -20269))) ? ((1125897759358976 ? 196 : -328483520)) : (-328483507 % 37279))))));
            }
        }
    }
    var_13 ^= var_7;
    #pragma endscop
}
