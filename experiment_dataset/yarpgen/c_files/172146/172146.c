/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, -71));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 ^= -3;
        var_13 = (max(var_13, (((((7205 ? 38463 : -30689))) ? 25351 : (max(((2975246699 ? 1985757431447231819 : 6609550108628162785)), (((-10633 ? 12923 : 31420)))))))));
        var_14 ^= (min(32, 12758508364656459948));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((min(-6609550108628162783, 3819))) ? (max(8252300631774371656, 8881)) : (((30694 ? -29600 : 1)))));
        var_15 = (max(var_15, (((-16 ? (min(312751642, 14737)) : 12627)))));
        arr_7 [2] = ((((max(-1866175683175672627, ((1372873935 ? -7581513741032849291 : 5625175797270813970))))) ? -1444878584 : 92));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_16 ^= -17939;
        var_17 = (max(var_17, 10646));
    }
    var_18 += var_2;
    var_19 ^= 344207949;
    #pragma endscop
}
