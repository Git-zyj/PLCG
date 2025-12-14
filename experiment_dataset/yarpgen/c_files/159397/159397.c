/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (0 || -27924);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_0] [i_0] = ((((18446744073709551615 ? 0 : 2))) ? (max(-1, (arr_3 [i_0]))) : var_11);
                    arr_11 [i_2] [i_0 - 2] = ((+((((27492 >= -190172862) >= (((arr_2 [18] [18]) / -127)))))));
                    var_18 ^= (((((-((var_8 ? -30756 : -1))))) && ((((((18446744073709551615 ? -7766951979909331290 : 580514480))) ? (~1) : (!-8500))))));
                    var_19 = (max(((((min(1, (arr_7 [i_2] [10] [10])))) ? (-580514480 & 1) : (min(0, 8386560)))), (((~(arr_1 [1] [1]))))));
                }
            }
        }
    }
    var_20 = (0 > 10);
    #pragma endscop
}
