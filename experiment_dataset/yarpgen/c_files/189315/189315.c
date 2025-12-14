/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (4162470352 | -22666);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 &= ((var_5 ? (max((((1 ? (arr_9 [15] [15]) : (arr_5 [i_0] [i_0] [i_0])))), (9223372036854775807 - 9223372036854775807))) : ((((!((min(0, 1)))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((((max(((6 ? 3627706625195050978 : 25876)), (!var_9)))) ? var_0 : (max((((1 << (9223372036854775807 - 9223372036854775802)))), ((-910855486 ? 1181914831 : 8965770374639703058))))));
                    var_16 = (min(var_16, (((max((max(145, (arr_9 [i_0] [i_1]))), var_2))))));
                }
            }
        }
    }
    var_17 &= ((0 ? ((((min(var_8, -8228897200485808575))) ? 4294967290 : 25427)) : 1));
    #pragma endscop
}
