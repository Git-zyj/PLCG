/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((((min(78, 181)))) / ((var_5 ? var_14 : -4226529846172463506)))) * var_1))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 *= 6;
                    var_17 = (~var_8);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((min((arr_0 [i_0]), (arr_0 [i_0]))) / ((2719291265 ? ((27741 ? 220 : (arr_3 [i_0]))) : -20318))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3] = (((((((1959665138660114786 ? 113 : (arr_6 [i_3] [i_4] [i_4] [i_4])))) ? (((arr_3 [i_3]) + 2034450762)) : var_9)) - ((max(4233565816, -118)))));
                var_18 = ((((((arr_1 [i_4 - 3]) ^ (arr_1 [i_4 - 3])))) ? (((arr_1 [i_4 + 2]) & 108)) : ((-32751 & (arr_1 [i_4 - 2])))));
            }
        }
    }
    #pragma endscop
}
