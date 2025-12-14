/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += -2;
    var_20 = ((((var_9 % -8) ? var_17 : (4294967290 <= -8))) | ((min(var_18, (!var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 &= ((-((~(1671693263 == var_0)))));
                                var_22 += (min(-2, (((1 ? var_8 : -129899812)))));
                                var_23 ^= (min((min(var_5, 2623274013)), (((var_4 ? (3 * 35273) : var_4)))));
                            }
                        }
                    }
                    var_24 = (min((!1), ((1 ? 0 : 2623274035))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    var_25 = (max(var_25, 1));
                    var_26 = (-(!var_7));
                    arr_17 [i_0] [i_1] [19] = (-1 > -66);

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_27 = var_4;
                        var_28 = 331307927;
                        arr_20 [i_0] [i_1] [i_1] [i_6] = (~1);
                        var_29 *= (var_16 > 1);
                    }
                }
                var_30 = 3936883796;
            }
        }
    }
    var_31 -= ((((~((var_16 >> (var_18 + 1741504054985359323))))) << (((!((max(var_9, (-127 - 1)))))))));
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 20;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_32 ^= 4697747551826810066;
                                var_33 &= (~14249488577514584717);
                                var_34 += (min((((var_5 ? 1 : 17978))), 3567211841));
                                var_35 = min((min(var_11, ((6090222361604579880 ? var_7 : var_10)))), ((max((0 / 222), 2309048191))));
                            }
                        }
                    }
                    arr_36 [i_7] [4] [i_7] [i_7 - 1] |= (min(var_17, var_2));
                }
            }
        }
    }
    #pragma endscop
}
