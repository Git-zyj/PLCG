/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-1 * ((var_4 ? var_12 : var_7)))) == ((var_14 ? 1787168591 : (2036424738705069983 <= var_2)))));
    var_16 = var_4;
    var_17 = (61361 || -632948586);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 -= ((~((((max((arr_0 [i_1 + 1]), -10))) ? ((((arr_0 [15]) > 16410319335004481633))) : (arr_2 [i_0])))));
                    var_19 = (~-10);
                }
            }
        }
    }
    var_20 = (min(var_20, (32 && 2249439510403609282)));
    #pragma endscop
}
