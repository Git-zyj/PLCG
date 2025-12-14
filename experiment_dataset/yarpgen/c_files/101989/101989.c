/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((16853 ? 127 : -127));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = -var_6;
                var_14 = ((((((-19 != 9468180871122454397) ? (((162 >> (-80164312965372991 + 80164312965372997)))) : var_5))) ? ((((arr_2 [i_0 + 1]) ^ var_12))) : (((((arr_5 [i_0] [i_0 - 2] [i_0]) >= -126))))));
            }
        }
    }
    var_15 = (min(((min(var_6, var_1))), var_8));
    var_16 = 65535;
    var_17 = var_5;
    #pragma endscop
}
