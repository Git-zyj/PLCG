/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 += ((((((((8284 ? 8284 : var_5))) ? (((var_12 ? var_16 : (arr_1 [i_0])))) : -1554628993))) ? (arr_7 [4] [i_1] [4] [i_2]) : var_8));
                    var_18 = var_2;
                }
            }
        }
    }
    var_19 = (max(var_19, var_6));
    var_20 = (((((((var_16 ? var_14 : var_12))) * (((var_3 + 9223372036854775807) >> (var_13 - 229201691))))) & var_13));
    #pragma endscop
}
