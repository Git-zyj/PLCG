/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 2027268316336434305;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min((arr_4 [i_0]), (((!10873643392887503292) ? (arr_4 [i_0]) : (11212 > 188)))));
                var_14 = (((arr_2 [i_0]) ? 188 : ((-(((arr_3 [i_0] [i_1]) << (var_5 - 10040368156447263695)))))));
                var_15 = (arr_5 [i_0] [i_0]);
                var_16 = (min(var_16, var_11));
            }
        }
    }
    var_17 = (min(var_17, ((((max(1, 126)) >> (var_3 + 3052))))));
    #pragma endscop
}
