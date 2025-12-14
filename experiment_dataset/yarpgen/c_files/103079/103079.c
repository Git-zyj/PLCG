/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((24964 ? 38774 : ((min(60057, 35469)))))) ? 65528 : 24964));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = var_2;
                var_21 -= (max((arr_0 [i_0 - 1]), ((((max((arr_2 [i_0 + 2]), 40572))) * ((min(43753, 28611)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {
                    var_22 += arr_1 [i_3];
                    var_23 |= (~28627);
                }
            }
        }
    }
    #pragma endscop
}
