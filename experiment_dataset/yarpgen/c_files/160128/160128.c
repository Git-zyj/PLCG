/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_3;
    var_18 = var_13;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= ((1 <= (((arr_4 [i_1 + 1] [i_1 + 2]) ^ (arr_4 [i_1 + 1] [i_1 + 2])))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] |= ((9017 ? 43769 : 56519));
                    var_20 ^= ((min(9632565225120716092, 2909264362)) * 0);
                    arr_10 [i_1] [i_0] = (+(min((arr_1 [i_0]), (arr_0 [i_2] [i_2]))));
                }
            }
        }
        var_21 = (arr_0 [i_0] [i_0]);
        var_22 += (!149827930);
    }
    var_23 = var_8;
    #pragma endscop
}
