/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [17] = ((var_0 ? 70368743129088 : (arr_2 [i_0])));
                arr_6 [i_0] [i_0] [i_1] = ((((max(((((arr_1 [i_0]) < (arr_4 [i_1])))), ((-270669121 ? var_2 : (arr_4 [i_0])))))) ? (((!(arr_2 [i_1])))) : (((((63 <= (arr_3 [i_0] [i_1])))) - var_11))));
                var_12 &= (arr_0 [i_0]);
            }
        }
    }
    var_13 = (min(var_13, var_9));
    var_14 = ((~(min(46, (~var_6)))));
    #pragma endscop
}
