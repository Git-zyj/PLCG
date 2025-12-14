/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max((min((!-3434230065976448052), (var_14 ^ var_0))), ((((14033665809026236575 > 3434230065976448052) <= var_10))))))));
    var_20 = ((3434230065976448050 > (min((var_1 <= var_12), (4413078264683315040 - var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (arr_0 [i_0])));
                arr_4 [i_1] [i_1] [i_1] = (arr_0 [i_0]);
                arr_5 [0] |= (min((arr_0 [i_0]), ((((arr_3 [i_0] [i_0]) >= var_3)))));
                var_22 *= (min((arr_3 [i_1] [i_1]), (~17435890623217681205)));
                var_23 = 254;
            }
        }
    }
    var_24 = (min((((-(3561199703 <= var_15)))), (min(var_17, var_4))));
    #pragma endscop
}
