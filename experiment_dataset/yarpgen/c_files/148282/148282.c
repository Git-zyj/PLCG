/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((((((((511 << (((((-127 - 1) + 156)) - 6))))) ? (((((arr_2 [i_0] [i_0]) >= 127)))) : ((121 ? 13886 : 4247883329))))) % (min(127, ((var_16 ? (-127 - 1) : (arr_5 [i_2]))))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((32755 ? (-32767 - 1) : 2147483647));
                    var_18 = (max(var_16, (min((((0 ? (arr_7 [i_0] [i_1] [i_0]) : (arr_7 [11] [i_1] [i_0 - 1])))), (min(var_2, var_8))))));
                }
            }
        }
    }
    var_19 -= var_13;
    var_20 = (max(var_20, var_3));
    #pragma endscop
}
