/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(~7494165283823297378)));
    var_14 = ((1987 ? ((252 >> (var_1 + 4693337231253352683))) : ((((max(-601656557, 0))) ? (~var_9) : 601656556))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = ((2036088749 ? (((arr_5 [i_0] [18] [i_2]) ? var_5 : 2522689037)) : ((54937 * (((arr_5 [i_0] [i_1] [i_0]) ? (arr_4 [i_0] [7]) : 28524))))));
                            arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] = min((arr_8 [i_2] [i_1] [i_2] [i_3] [i_2] [i_3]), ((!(arr_3 [i_0] [i_1]))));
                        }
                    }
                }
                arr_10 [i_0] [i_0] [i_1] = ((~(max((arr_6 [i_0] [16] [16] [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_16 = -601656571;
    #pragma endscop
}
