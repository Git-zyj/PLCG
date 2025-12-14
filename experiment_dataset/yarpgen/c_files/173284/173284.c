/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_2] [4] [4] [8] = ((max(((min(0, (arr_0 [1] [8])))), (arr_7 [1] [6] [5]))));
                    arr_11 [1] [i_2] [1] = ((10799090430446316337 ? 16384 : 15756496254587614025));
                }
            }
        }
    }
    var_11 -= ((var_0 - ((var_0 ? (((10799090430446316338 ? 1 : var_4))) : (var_9 + var_6)))));
    var_12 = (66 * 126100789566373888);
    #pragma endscop
}
