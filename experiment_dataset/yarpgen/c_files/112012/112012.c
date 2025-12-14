/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((max(var_5, (-3624152098027135946 || 5200425437236127781))) << ((((var_6 / (var_6 >= var_10))) - 2840470862))));
    var_16 = ((+(min((var_2 ^ var_5), var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = ((11313 ? -5200425437236127786 : 5200425437236127789));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = var_12;
                    arr_8 [i_1] [i_1 - 2] [i_2 - 1] = ((((arr_4 [i_0] [i_1] [i_2 + 1]) || (arr_5 [i_1 - 2] [i_2]))));
                    var_18 = ((~((((arr_4 [i_1 - 2] [i_1] [i_2 - 1]) >= (arr_3 [i_1] [i_0] [i_0]))))));
                    var_19 = (min((min((-2147483647 - 1), (((arr_4 [i_2] [i_0] [i_0]) + (arr_6 [i_0]))))), (-5200425437236127782 < var_11)));
                }
            }
        }
    }
    #pragma endscop
}
