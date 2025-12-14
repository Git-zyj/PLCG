/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 *= 1;
                    arr_7 [i_0] [i_0 - 1] [i_0 + 1] = (((!((min(var_16, (arr_2 [i_0 - 2] [i_1 - 1])))))) || 7177920275786869783);
                    var_21 = ((4294967279 * ((-(max(8042, 2401702895))))));
                }
            }
        }
    }
    var_22 = var_0;
    var_23 ^= var_13;
    var_24 = -909544366396164699;
    var_25 = (!24242);
    #pragma endscop
}
