/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(var_15, var_1)));
    var_17 = (min(var_17, (((((max(var_7, var_2))) / ((max(var_13, 220))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_18 -= (((min(17043553914511374555, ((min((arr_0 [i_0] [i_1 - 3]), (arr_4 [i_0] [i_1] [i_1])))))) + (28 > 841154689135707762)));
                arr_5 [i_0] [i_1] = -220;
            }
        }
    }
    var_19 = 12761600824325900307;
    #pragma endscop
}
