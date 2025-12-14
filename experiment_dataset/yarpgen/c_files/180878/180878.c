/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (!2028118854);
    var_20 ^= (var_14 && 2028118855);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= var_3;
        var_21 = (max(var_21, 18));
        var_22 = var_1;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_1] [i_2] [i_3] = (arr_8 [5] [i_2] [i_2]);
                        var_23 |= var_10;
                        var_24 = -16;
                        var_25 = (arr_9 [i_1] [i_2] [i_3] [i_2]);
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_17 [i_1] [i_3] [i_1] [i_1] |= (((max((!17503949054477962698), ((var_6 ? 18 : -1)))) - -2028118843));
                        var_26 = (max(var_3, (arr_3 [i_1] [i_2])));
                        var_27 = -13;
                    }
                    var_28 *= ((((108 ? -2028118851 : -4839569344750002591))) ? (18446744073705357312 * var_12) : (((-(arr_4 [i_2] [i_2])))));
                }
            }
        }
        var_29 = (arr_15 [i_1] [i_1] [i_1] [i_1]);
        arr_18 [0] |= 48464;
        var_30 = (max(var_30, (((var_0 == (~var_16))))));
    }
    var_31 = ((9223372036854775807 * (!var_0)));
    var_32 |= ((0 ? -1 : var_1));
    #pragma endscop
}
