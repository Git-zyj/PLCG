/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-((var_13 ? var_13 : var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 += ((((((-62 + 2147483647) >> (-6994565758999061063 + 6994565758999061091)))) != (max((arr_4 [i_0] [i_1] [i_2 + 1]), (arr_4 [i_0] [i_1] [i_2 + 2])))));
                    var_17 = (~-1862520986);
                }
            }
        }
    }
    #pragma endscop
}
