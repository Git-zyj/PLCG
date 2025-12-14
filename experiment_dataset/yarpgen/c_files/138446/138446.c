/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((((((var_4 >= var_15) || (var_10 | var_11))))) > (((var_14 >= var_8) - ((var_8 << (((-8899864254499607147 + 8899864254499607157) - 10))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (((((((var_8 - (arr_0 [i_0 - 2] [i_1]))) ^ (var_13 > 1)))) && ((((601604507218795810 % var_13) % ((((var_3 && (arr_3 [i_1] [i_0 - 1]))))))))));
                var_18 = ((1 >> (((1 <= ((1 >> (228 - 222))))))));
            }
        }
    }
    var_19 += (((((7184919369923875301 && -1827053238) < (var_13 + -2)))) << ((((((var_5 + 9223372036854775807) >> (var_1 + 36))) != (((var_7 << (var_16 - 21))))))));
    #pragma endscop
}
