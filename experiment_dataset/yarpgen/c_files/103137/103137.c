/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_5 <= 4611650834055299072);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((arr_4 [i_1 - 3]) >= ((((!(arr_4 [i_1 + 2]))))))))));
                var_20 ^= ((((max((arr_2 [1]), -109))) ? (arr_3 [i_1 - 2] [i_1 - 1]) : var_3));
                arr_5 [8] [i_0] [i_1] = ((((((arr_0 [i_1 - 1] [2]) ? 2 : (arr_0 [i_1 + 2] [i_1])))) ? (((arr_0 [i_1 + 4] [6]) ? var_17 : 17167771270598440476)) : (arr_0 [i_1 - 3] [12])));
            }
        }
    }
    var_21 += var_6;
    #pragma endscop
}
