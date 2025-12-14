/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_16 ? ((((82 ? var_4 : 82)) + var_3)) : (((((max(var_9, 1))) ? ((2147483647 ? 27387111 : 27387111)) : (!var_9)))))))));
    var_20 |= (((var_6 ? ((max(473502617, var_2))) : ((var_15 ? var_6 : 1494995808)))));
    var_21 = (min((min((2929149044928231741 & 4294967295), -2929149044928231742)), (((((min(var_17, -27387112))) == (var_11 & var_13))))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0] = (((((max((arr_4 [i_1]), var_1)))) ? (((((min(var_16, 0))) ? (!var_0) : ((min(0, (arr_0 [i_0]))))))) : (-27387112 - 8300362466772629485)));
            var_22 = (min(var_22, (max(242, 0))));
        }
        var_23 = (max(var_23, -2929149044928231742));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (!347655888)));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_25 ^= var_10;
            var_26 -= -2005832454;
            var_27 += (25899 ? 9350527505227094134 : 17803979226811814948);
            var_28 = ((~var_14) % (!var_3));
        }
        var_29 = (min(var_29, var_4));
    }
    #pragma endscop
}
