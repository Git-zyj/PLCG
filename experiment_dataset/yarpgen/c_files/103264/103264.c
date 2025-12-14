/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((~(max(1817688248, 1817688248))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (max((17419429010371139752 << 1), ((min(32947, 2249)))));
        arr_3 [i_0] = (max((!37044), ((37044 || ((max(3742012595, 1027315063338411863)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [1] [i_1] = (((min(-97, 6054965511564591216)) * (((((max(511, 17419429010371139738)) >= ((min(1, -1414704494)))))))));
                        var_17 = 17419429010371139752;
                        var_18 = 140;
                    }
                    var_19 = 17419429010371139763;
                    var_20 = (max((1 | 17419429010371139752), ((((!1027315063338411865) >= (min(0, 94)))))));
                }
            }
        }
        var_21 = -731169825278982741;
    }
    #pragma endscop
}
