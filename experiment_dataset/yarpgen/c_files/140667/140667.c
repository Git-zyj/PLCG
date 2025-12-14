/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 &= 32767;
                        var_14 = (!((min(((-(-32767 - 1))), 127))));
                    }
                }
            }
        }
        var_15 = (8070450532247928832 + 32737);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = 159;
        var_16 |= (min((arr_2 [i_4]), ((min(32760, 780218109)))));
    }
    var_17 = 780218097;
    #pragma endscop
}
