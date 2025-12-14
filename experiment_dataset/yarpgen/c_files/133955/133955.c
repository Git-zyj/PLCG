/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (max(((min(1073741824, (arr_0 [i_0])))), ((min((arr_1 [i_1]), (arr_1 [i_0]))))));
                arr_8 [i_0] [i_0] [i_1] = ((max(7042378645340395484, (arr_3 [i_0]))));
            }
        }
    }
    var_13 = 127;
    var_14 = ((((max(var_9, (var_8 & 1346858564)))) ? var_11 : -31848));
    #pragma endscop
}
