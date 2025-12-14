/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((min((arr_1 [i_0]), (arr_3 [i_0] [i_1 - 3] [i_0])))) ? -94 : (arr_3 [i_1] [11] [i_1 - 4]))) * (((arr_0 [i_0]) * (arr_3 [i_0] [i_1 - 2] [i_1 + 3])))));
                arr_7 [i_0] = (((((((max(-1215836611447920112, 216))) ? ((((arr_2 [i_0]) ? 960 : 18))) : (arr_5 [i_1 - 1] [i_1 - 2])))) == (2307037050211043598 & -88)));
            }
        }
    }
    var_19 |= 1659391786;
    #pragma endscop
}
