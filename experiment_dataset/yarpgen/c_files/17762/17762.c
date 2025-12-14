/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += -3290434709270160547;
    var_15 = ((((((11844159658661812051 && 1612130262) ? (max(6602584415047739565, 7024550362085254411)) : 11844159658661812071))) ? ((((108 % 380601266) ? (!11844159658661812050) : 14804816929680232793))) : ((11844159658661812071 - (11844159658661812050 <= 6602584415047739545)))));
    var_16 = 18446744073709551606;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = 10856872481448364147;
        arr_4 [i_0] = ((((266300218727432142 ? -1 : 11844159658661812048)) * (-8692254168738027290 >= 54036)));
    }
    var_17 = (max(var_17, ((((8119389438929785924 == 11844159658661812067) <= ((8192 ? (8692254168738027299 << 0) : (18446744073709551615 % 31))))))));
    #pragma endscop
}
