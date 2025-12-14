/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = (!var_8);
                arr_6 [i_0] [i_0] = ((((1 ? ((min((arr_0 [i_1 + 3]), -70))) : ((83 ? 25 : 204)))) <= 50));
                arr_7 [i_1] = (min((((!((((arr_0 [2]) ? (arr_2 [5]) : 18241154526609028547)))))), -1081768854744464035));
            }
        }
    }
    var_18 = ((1 >> (205589547100523069 - 205589547100523048)));
    var_19 = ((((((var_1 ? var_9 : 160876182))) ? ((var_7 ? var_9 : var_7)) : (((31801 ? 3 : 42730))))));
    #pragma endscop
}
