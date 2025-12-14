/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((20 ? -216 : ((60 ? ((31 ? 1016 : 31)) : var_5))));
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (max(var_13, (((((((arr_2 [i_0]) ? (191 != 4) : ((40 << (((arr_2 [i_0]) + 888208887))))))) ? (min((max(25, 2276513199)), (arr_1 [i_0]))) : 63)))));
        arr_3 [i_0] = 9640;
        arr_4 [i_0] = 2276513186;
        var_14 &= -2147483625;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_15 ^= ((-(((arr_6 [i_3] [i_4]) ? 3425774658 : 2018454110))));
                        var_16 = ((1 ? ((1934368889 ? (arr_13 [14] [16] [i_3] [16]) : 7322082787721557869)) : (arr_13 [i_1] [i_1] [i_3] [i_4])));
                    }
                }
            }
        }
        var_17 = (min(var_17, ((205 ? (((arr_8 [15] [2]) ? (arr_8 [i_1] [1]) : (arr_8 [4] [i_1]))) : -64))));
    }
    var_18 = 194;
    #pragma endscop
}
