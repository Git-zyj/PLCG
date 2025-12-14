/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 *= var_10;
                var_16 = min(((-((var_1 ? 18446744073709551615 : (arr_3 [i_1]))))), (arr_3 [i_0]));
                var_17 = ((-(min(var_3, (arr_2 [i_1 + 4] [i_1 + 4])))));
                var_18 = ((((min(var_0, var_8))) ? var_11 : (arr_2 [i_1 + 3] [i_1 - 2])));
                var_19 = 0;
            }
        }
    }
    var_20 = (615448946 == 13175437743457479980);
    var_21 = var_12;
    var_22 = ((+(((!var_9) ? (!8749017740742447324) : var_5))));
    var_23 = 8322352676920146431;
    #pragma endscop
}
