/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -13;
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_17 = (min(var_17, 243));
                    var_18 += ((-246 ? ((0 ? 23 : (arr_8 [i_0] [i_1] [i_2 + 1]))) : (((arr_8 [i_2] [6] [i_2 + 1]) % (arr_8 [i_0] [i_1] [i_2 - 1])))));
                }
                var_19 = ((-(arr_5 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
