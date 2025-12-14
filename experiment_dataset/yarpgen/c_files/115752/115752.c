/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (min((arr_6 [20] [i_0] [20] [i_1]), ((((~43012) / 1)))));
                    arr_8 [15] [i_1] [i_2] = ((((arr_5 [i_2] [i_1] [i_0]) ? ((((arr_6 [i_0] [i_0] [i_0] [i_1]) <= var_6))) : (12476161395389730992 >= var_11))));
                }
            }
        }
    }
    var_16 = 4194303;
    var_17 = 18446744073709551615;
    var_18 = (!var_13);
    var_19 = ((((min((max(1700582954, 4294967295)), 1))) ? var_9 : ((0 | (max(8796093022207, var_4))))));
    #pragma endscop
}
