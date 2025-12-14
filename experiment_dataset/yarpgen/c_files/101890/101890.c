/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_0 + 2147483647) << ((((var_19 << (var_17 - 57))) - 6225543224529815083))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (min((max((arr_5 [i_0 - 2] [i_0 - 4] [i_0 + 1] [14]), (arr_4 [i_0] [i_1] [i_2]))), (((!(arr_4 [i_0 - 1] [1] [i_2 - 2]))))));
                    var_22 = (min((arr_0 [i_0 + 2]), (((arr_0 [i_0 - 4]) >> 20))));
                    arr_6 [14] = 134;
                    var_23 = 4953445151571821764;
                }
            }
        }
    }
    #pragma endscop
}
