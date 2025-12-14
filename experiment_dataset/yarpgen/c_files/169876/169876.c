/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((~(max(var_8, var_7))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = ((((((((-5821369903972397393 ? (arr_1 [i_0]) : (arr_1 [i_2])))) ? (((arr_3 [i_0]) & (arr_7 [i_2 + 3]))) : (arr_0 [i_0])))) ? 6153942778503855596 : (((4232386535 & (arr_7 [i_0]))))));
                    arr_10 [17] [i_2] [19] = (((((((65535 ? 4232386510 : 14266720986905397773))) && ((!(arr_8 [i_2 + 2] [0] [i_0] [i_0]))))) ? ((((16552782713125591642 ? 228 : 1341178379974786847)) << (var_11 - 8868826866381652726))) : (arr_2 [i_1])));
                }
            }
        }
        arr_11 [5] [5] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
        arr_12 [i_0] [i_0] = (arr_2 [i_0]);
    }
    #pragma endscop
}
