/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_7 ? (((var_0 <= var_3) ? -5755836626171247786 : var_1)) : ((var_5 ? ((63 ? var_5 : 5755836626171247786)) : (((var_5 ? var_10 : var_3)))))));
    var_12 = (((((var_1 ? var_10 : var_5)) / -9046426368485238978)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((var_6 / 145) >> ((((7 ? var_8 : (90 == var_1))) - 11409)))))));
                var_14 = (((((var_3 <= var_4) ? ((((arr_5 [i_0]) ? var_2 : 7))) : (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_5 [i_0]))))) <= ((((((757611896 ? (arr_2 [i_0]) : (arr_2 [i_1])))) ^ (arr_1 [i_0] [i_1]))))));
                var_15 = (((((((((var_7 / (arr_5 [i_1])))) || (((-11926 ? (arr_5 [i_0]) : var_6))))))) | (((((2147483647 ? var_6 : -3649687249231191624))) ? 610311583 : (((3594334137 ? var_0 : var_7)))))));
            }
        }
    }
    #pragma endscop
}
