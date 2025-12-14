/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, (((~((~(((arr_5 [i_0] [i_0] [i_0]) & var_5)))))))));
                    var_11 = 8236117336059842173;
                }
            }
        }
    }
    var_12 = ((-var_3 + (min((max(var_7, 21724)), (((var_2 ? var_5 : var_6)))))));
    var_13 = ((max((var_2 ^ var_2), (((248 ? 8388352 : 194))))) + (var_4 << 7));
    #pragma endscop
}
