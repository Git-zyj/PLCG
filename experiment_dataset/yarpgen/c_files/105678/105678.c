/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((((max((min(1, var_13)), (((var_1 ? var_9 : 1)))))) ? ((((max(22024, var_19))) ? -355088609 : 18446744073709551615)) : ((min(((~(-32767 - 1))), 65528))))))));
                    arr_7 [i_0] [i_1] [i_2 - 3] [i_1] &= var_17;
                    var_21 ^= (((1 != 5639644715877841265) ? ((var_15 ? 1746374854 : -124)) : var_6));
                }
            }
        }
    }
    var_22 = 1;
    var_23 = min(var_3, var_4);
    var_24 = (max((((!(1 && 55324)))), var_8));
    var_25 &= (((((~(max(0, var_3))))) ? (((((-1271737069 ? 1 : 1))) ? (136072637976112517 >= 1745935185) : (~var_11))) : var_15));
    #pragma endscop
}
