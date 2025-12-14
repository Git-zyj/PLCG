/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((63618 ? 6154238343435947422 : 2618))) >> (var_7 - 17916)));
    var_18 = 3667779565450897229;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_10;
        var_19 = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_4 [i_1] [12]);
        arr_8 [13] &= 12360;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_1] [i_1] = (((((arr_4 [i_1] [i_1 + 1]) ? (var_9 > var_2) : ((var_1 ? (arr_11 [i_1] [i_1] [1]) : (arr_11 [i_1] [i_2] [i_3 - 2]))))) - (((((1 ? 44475 : 44475)))))));
                    var_20 += (arr_5 [i_1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_21 = ((max(1373648074547183984, 974710113634774357)) < ((((arr_20 [i_5 + 1]) >> (((arr_20 [i_5 - 1]) - 55569))))));
                    var_22 = (((arr_16 [i_4 + 2]) >> ((((var_4 ? var_7 : 196)) - 17917))));
                }
            }
        }
    }
    var_23 = 9223372036854775790;
    #pragma endscop
}
