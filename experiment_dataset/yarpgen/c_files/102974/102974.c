/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_0] = (arr_4 [i_2 - 1] [i_2] [i_2 - 3]);
                    var_16 = (min(var_16, (((1742767117 ? -1742767126 : 32767)))));
                    var_17 = (+-1742767086);
                }
                var_18 = (min(var_18, ((min(((var_9 ? (((arr_6 [i_1]) ? (arr_5 [i_1]) : var_3)) : (!-1742767117))), (((753211939 != (((arr_6 [15]) + 53725))))))))));
            }
        }
    }
    var_19 = (min(var_19, (((var_9 ? (-753211938 & 30405) : (((((1742767116 ? 49744 : -1742767146))) ? -1742767117 : (max(1742767090, 753211938)))))))));
    #pragma endscop
}
