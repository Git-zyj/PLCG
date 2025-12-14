/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(var_8, (max(-35, 2736447920088556274)))) + 9223372036854775807)) << (((min(127, (max(var_1, var_0)))) - 127))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((((((((arr_7 [i_1] [i_1] [i_1]) ? 65524 : (arr_2 [i_0])))) ? var_5 : (8803185493901546239 % 407008182610093015))) | (((~((var_7 ? (arr_0 [i_0]) : (arr_6 [i_0]))))))));
                    var_15 &= 4294967295;
                    var_16 = (((((min((arr_3 [i_0]), (arr_3 [i_0]))))) % 8803185493901546228));
                }
            }
        }
    }
    var_17 &= (-(((((-8803185493901546248 ? 10784835853930061158 : 16747433845285578745))) ? 255 : (-35 + var_8))));
    #pragma endscop
}
