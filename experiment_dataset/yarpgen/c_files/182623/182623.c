/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((4026531840 ? 1 : -27909))) ? (max(4611686018418999296, 1)) : -32747))) || ((!((max(1, 4775286)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = max((((1 ? 1 : (2 + 1)))), 7404476926123861551);
                arr_7 [i_0] = ((((((3981603112336940270 ? 2147483648 : 5012701117511710354)) ? (((1 ? 28488 : 1))) : (min(1, 7404476926123861568))))));
            }
        }
    }
    var_16 = ((11042267147585690065 ? ((var_10 + ((252 ? 0 : 32150)))) : ((((max(-1, 89)))))));
    var_17 = (((((-425 ? ((11042267147585690046 ? 2571094984 : 548706985365793390)) : var_13))) ? ((min(64, (-9223372036854775807 - 1)))) : (((((1125899906842112 ? 105 : -32))) ? (((1 ? 28 : -59))) : 2693170548192841223))));
    #pragma endscop
}
