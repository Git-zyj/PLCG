/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((min((((arr_0 [i_1]) ? 1090252605 : var_13)), (arr_2 [10] [13] [i_0])))))));
                var_16 = (max(var_16, (arr_0 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 ^= (min((arr_6 [i_2]), (min((-240711492 * 3726719898), (((var_7 ? 515581201 : var_3)))))));

                            for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                var_18 = (min(var_18, (var_12 != 31340)));
                                var_19 = (max(var_19, (((!(731183756495764416 || 1414889696989016571))))));
                                var_20 = (max(var_20, ((((((-(4294967295 * 11058404136695008305)))) ? var_8 : (arr_4 [i_0] [i_0] [i_0]))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_21 = (min(var_21, (!var_12)));
                                var_22 = (min(var_22, 2338806646));
                                var_23 = (min(var_23, ((((0 ? 65535 : 31659))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_8 = 2; i_8 < 17;i_8 += 1)
                            {
                                var_24 = (min(var_24, (((~((var_3 ? var_13 : 284659860)))))));
                                var_25 = (min(var_25, var_3));
                                var_26 = (max(var_26, var_7));
                            }
                            arr_20 [i_6] [6] &= (((min((min(-8388608, 2921286819839922999)), var_0)) / -28687));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
