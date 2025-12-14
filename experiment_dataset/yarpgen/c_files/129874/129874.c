/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -12934;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = ((~(~28677)));
        var_18 = min(-28361, var_5);
        var_19 = (max(var_19, (((3386171588 ? (!2941920371) : 204)))));
        var_20 -= (((max(28677, (!46069)))));
        var_21 = ((-((225 % ((16 ? var_8 : 77))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        var_22 = -25992;
        var_23 ^= var_9;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_24 = (min(var_24, (((54 ? 100 : (!22546))))));
        arr_10 [i_2] = ((50890 ? 2303107697 : var_5));
        arr_11 [i_2] [i_2] = 1528;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_15 [5] [i_3] = -19466;
        var_25 = ((2705351646 ? var_13 : (735007756 || 1043774038)));
        arr_16 [i_3] = 7421;
    }
    var_26 &= 5490;
    var_27 = ((((((((var_6 ? 487943924 : var_1))) ? ((var_3 ? var_3 : 159)) : (4 & -14393)))) ? (((!(var_2 > 1865)))) : ((~((7706 ? 4 : 47))))));
    #pragma endscop
}
