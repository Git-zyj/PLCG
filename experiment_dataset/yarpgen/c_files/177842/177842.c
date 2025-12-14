/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                var_14 += (min(1, 137));
                arr_6 [i_0] = ((-((19 ? (arr_5 [i_0] [i_1] [i_1]) : 33691))));
                arr_7 [i_1 + 1] = 2868915078656320980;
            }
        }
    }
    var_15 = (((24 && var_6) + var_7));
    var_16 = (var_7 >= var_7);
    #pragma endscop
}
