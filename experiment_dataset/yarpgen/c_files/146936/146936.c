/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((var_3 ? ((max(238, var_5))) : ((max(var_1, var_5)))))), var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 *= max(var_4, var_7);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_13 = 117153810;
                        var_14 = ((((max(21873, (max(22844, 7936792690623780704))))) ? ((((-(arr_4 [i_0]))))) : ((+(min((arr_3 [i_1] [i_1]), var_8))))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_15 = (((((22871 && (arr_10 [17] [i_1] [i_2])))) * var_6));
                        var_16 = (~113);
                        var_17 = (max(var_17, ((min((((!((min(var_3, 42691)))))), (arr_4 [7]))))));
                        var_18 = (arr_6 [i_0]);
                    }
                    var_19 += (min(((1 | (arr_4 [i_0]))), (~69)));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_20 |= ((-16750 <= (((arr_10 [i_0] [i_5 - 1] [i_6 - 2]) % (arr_10 [i_0] [i_5 + 1] [i_6 + 1])))));
                                var_21 += var_7;
                                var_22 = var_2;
                                var_23 = (min(var_23, (((((((-79 + 2147483647) >> ((((min((arr_4 [i_5]), var_0))) - 120))))) ? (arr_4 [i_1]) : ((10560738555584162668 ? 10 : ((min((arr_15 [i_6 + 1] [i_5] [i_1]), 42694))))))))));
                                var_24 = ((~((413508930 ? var_6 : (max(var_8, var_7))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, ((min(((min(var_3, var_2))), ((var_5 ? (var_8 * var_8) : var_1)))))));
    #pragma endscop
}
