/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] |= (((((((((arr_0 [i_0] [i_1]) & 9223372036854775807))) ? 1998908201 : (((arr_4 [i_1] [i_0] [i_0]) & 3150489593))))) ? (((((var_14 ? 4194288 : 4294967287))) ? ((max((arr_1 [i_0]), var_12))) : (max(var_10, 13770646368071023653)))) : 24));
                arr_7 [i_1] = ((((((106 % 7374104375333770733) != (arr_2 [i_0 - 1] [i_0 - 1])))) + (13684 < 9223372036854775807)));
                arr_8 [i_1] = ((((((1002490141484796718 > (max(var_0, -9223372036854775807)))))) > var_5));
                arr_9 [i_1] [i_1] [i_1] = 46145;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            {
                arr_14 [i_3 - 1] = (-9223372036854775807 - 1);
                arr_15 [i_3 + 2] = -409238856;
                arr_16 [i_2 - 1] [8] [i_2] = var_4;
            }
        }
    }
    #pragma endscop
}
