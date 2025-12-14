/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(3023311367, ((((18374686479671623680 ? -8250 : 16270847718061634763))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 = var_8;
                            var_19 ^= ((((((20206 ? (arr_10 [i_3] [i_0]) : 106))) - ((18374686479671623680 + (arr_8 [i_0]))))));
                        }
                    }
                }
                var_20 = (((arr_4 [0] [i_0]) % (((((arr_3 [i_1] [i_1 - 2] [i_0]) > (arr_0 [i_1])))))));
                var_21 = ((-(max(1271655929, 3023311367))));
            }
        }
    }
    var_22 &= (max((((((268427264 ? 72057594037927928 : var_7)) != (var_9 != var_8)))), (((max(2305842459457880064, 8179)) >> (var_0 - 69)))));
    var_23 = ((max(var_13, var_3)));
    #pragma endscop
}
