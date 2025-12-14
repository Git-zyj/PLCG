/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (~var_7);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = -7544830004718225487;
                            var_14 |= 13156740787415591510;
                        }
                    }
                }
                arr_12 [i_0] [i_1] |= ((1813980755 != ((var_0 & (var_3 == 32745)))));
                arr_13 [18] = ((((min(var_6, var_8))) - var_10));
            }
        }
    }
    var_15 = (max(var_15, ((min(var_10, var_6)))));
    var_16 |= ((-19850 == (2482705979 || 127)));
    #pragma endscop
}
