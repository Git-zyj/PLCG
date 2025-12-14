/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_4] [i_2] [1] [i_2] [1] [1] = arr_2 [i_0];
                                var_12 += ((((((((arr_5 [i_3] [i_4] [4]) - 17218918674585443680))) ? (!-95) : (max(17643383893488712461, 17643383893488712446)))) > (((max(254, (arr_7 [i_4])))))));
                                arr_12 [i_2] [i_2] [i_2] = ((var_10 != (max(((var_8 ? 118 : (arr_6 [i_2] [i_2] [i_3]))), var_0))));
                            }
                        }
                    }
                    var_13 = (((((arr_2 [i_0]) - (((16434 > (arr_6 [i_2] [i_1] [i_2]))))))) ? 13537044992567798986 : (((((144373003 + 1) && var_8)))));
                    arr_13 [i_0] [i_0] [i_2] [i_2] = 49737;
                    arr_14 [i_2] [i_1] [11] = 144372998;
                    arr_15 [i_0] [4] [5] [i_2] = 1;
                }
            }
        }
    }
    var_14 = ((var_9 << ((min(var_6, (min(var_8, 1)))))));
    var_15 = ((!((min(4909699081141752634, (21114 != 1))))));
    var_16 = (max(var_16, 3183023930));
    #pragma endscop
}
