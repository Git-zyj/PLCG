/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((arr_3 [i_0 + 2]) ? ((min(1, -1))) : ((3 ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_19 = 244;
                                var_20 *= 65535;
                                var_21 = (min(var_21, -6043425058698619571));
                                var_22 = (max(var_22, -3756424628569336752));
                                var_23 = (max(var_23, -32758));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                arr_18 [i_3] &= 14908;
                                var_24 = (arr_17 [i_0] [i_1] [i_2]);
                                var_25 = arr_2 [i_1];
                            }
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_26 = (max(var_26, (((var_17 | ((min((arr_19 [i_0 + 2] [i_2] [i_1] [i_0 + 2]), (arr_19 [i_0 - 2] [i_6] [i_2] [i_3])))))))));
                                arr_21 [i_6] [i_1] [i_1] [i_3] [i_6] [i_0] = 3;
                            }
                            var_27 += (((arr_20 [i_0 - 2] [i_0 + 2] [i_0 - 2]) ? (arr_20 [i_0 - 2] [i_0 + 2] [i_0 + 1]) : ((min(2, (arr_14 [i_2] [i_1] [i_2] [i_3] [i_0 + 2]))))));
                            arr_22 [i_1] = ((~(max(6043425058698619571, 0))));
                        }
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, var_9));
    var_29 = ((((-((max(100, 127))))) > (((min(var_0, var_16))))));
    #pragma endscop
}
