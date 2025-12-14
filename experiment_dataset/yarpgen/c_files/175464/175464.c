/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = -1;
                                var_22 = (~(~28));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 = (arr_2 [i_6] [4]);
                                var_24 = (arr_4 [i_0]);
                                var_25 = (max(var_25, (((((max((arr_3 [i_0] [i_1]), 41830))) ? ((((arr_6 [i_0] [i_0] [i_0] [i_0]) & (var_6 > var_10)))) : (max(-79, (arr_17 [i_0] [i_0] [i_2] [i_1] [i_6]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_26 += -1545625815;
                                var_27 = (max(var_27, var_10));
                                var_28 = ((-14 ? var_12 : ((~(arr_1 [i_0])))));
                                arr_22 [i_0] [i_1] [i_7] [3] [i_7] = (((2397001270 || 2397001247) << (((min((max(-1545625815, var_12)), -79)) + 91))));
                            }
                        }
                    }
                    var_29 -= (((max(var_10, 6052050468403743132)) ^ (((arr_19 [i_1]) ? (4210341833111520578 ^ -4210341833111520592) : ((max((arr_1 [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_30 = (max(var_30, -66));
                }
            }
        }
    }
    var_31 = (((var_1 || var_17) && (max((var_2 && var_18), var_15))));
    #pragma endscop
}
