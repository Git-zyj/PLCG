/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((~(arr_0 [i_1]))))));
                var_18 = ((((arr_4 [i_0] [i_0] [i_1 - 3]) ? (arr_4 [i_0] [i_1 + 1] [i_1 - 1]) : var_0)));
                arr_6 [i_1] = min(3181910908196337912, 11590767894883863566);
            }
        }
    }
    var_19 = (max(((((var_1 != var_11) ? (var_2 >= var_0) : var_5))), var_2));
    #pragma endscop
}
