/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = (max(var_17, (((((~(!1605153266)))) + 8569564207189847645))));
        arr_2 [i_0] &= -1605153275;
        var_18 -= arr_1 [i_0];
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_7 [i_2] [i_2] [i_2])));
                                arr_15 [i_3] [i_4] [i_3] [i_2] [i_3] &= ((((((((1512492860 ? var_9 : 1605153275))) ? 10766 : (arr_11 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5])))) ? (((((arr_9 [i_3] [i_2]) && (arr_5 [i_3]))))) : (~-17556)));
                            }
                        }
                    }
                    arr_16 [i_2] = var_8;
                    var_20 = (max(var_20, (((-(~var_7))))));
                }
            }
        }
    }
    var_21 = var_6;
    var_22 = (max(var_22, -2199023255552));
    var_23 = (max(var_23, (((1605153255 ? (var_15 >= 39667554) : 47842)))));
    #pragma endscop
}
