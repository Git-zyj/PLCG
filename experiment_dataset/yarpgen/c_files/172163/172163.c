/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (arr_0 [1]);
        var_15 = 44584;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 ^= -1;
                    arr_6 [i_2 + 1] [i_1] [i_1] [i_0] = (((((((arr_3 [i_1] [i_2]) ? var_6 : (arr_0 [1])))) ? 1 : -11658028859073566051)));
                    var_17 = (min((arr_5 [i_1]), (arr_0 [6])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_18 = -1;
        arr_10 [i_3] = ((min(var_12, (arr_8 [i_3] [1]))));
        var_19 = ((((min((max(1, var_0)), (((var_4 - (arr_9 [i_3]))))))) ? ((((-6410964968921567208 ? 2684 : 56)) + (max((arr_9 [6]), (arr_9 [i_3]))))) : (min(-1, -6))));
    }
    var_20 ^= (((((~(min(0, -20))))) ? var_2 : var_4));
    var_21 ^= var_1;
    #pragma endscop
}
