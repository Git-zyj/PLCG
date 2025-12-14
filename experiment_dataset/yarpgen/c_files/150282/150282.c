/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_6 ? ((var_5 ? -32757 : 11953721932083535955)) : (min(11953721932083535955, -2000936058)))) == ((((var_8 < (max(18446744073709551615, 6493022141626015661))))))));
    var_15 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (((((33554424 ? (11953721932083535955 < 6493022141626015670) : (!1)))) == ((1 ? 2350154579 : 15057))));
                var_16 = ((~((var_0 >> ((((~(arr_1 [i_0]))) - 11496314958365747171))))));
            }
        }
    }
    #pragma endscop
}
