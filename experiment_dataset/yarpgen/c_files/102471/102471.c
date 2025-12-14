/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 ^= 369450300;
                arr_5 [i_0] [i_0 + 3] = (((((-((1024140672776988799 ? 7705 : 25965))))) % (max((max(var_0, var_10)), (((15094372892642743755 ? 2291865390 : (arr_4 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((max(6046043244565354016, 12768))))));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                arr_12 [i_2] [i_1] [i_2] [i_1] [i_1] = max((max((~var_14), 3333867485225518106)), ((max(var_7, var_0))));
                                var_20 ^= ((1 < ((-(max((arr_9 [i_0] [i_1] [i_2] [i_3] [i_0]), 6))))));
                                var_21 = (max(var_21, ((((~(max(1, var_1))))))));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                arr_15 [i_0 - 1] [i_1] [i_2] [i_3] [i_0 - 1] [i_3] [i_0 - 1] = ((+((-(((arr_4 [i_0]) / var_8))))));
                                var_22 = (max(4299806541852486572, 1));
                            }
                            var_23 += var_6;
                        }
                    }
                }
            }
        }
    }
    var_24 = (max((((0 == (~var_11)))), 12760));
    #pragma endscop
}
