/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (min(((var_4 ? (~var_5) : -1)), var_2));
    var_15 = ((31 ? 53269 : 1298203040));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = ((-var_7 ? ((max(((12265 ? 12267 : -38)), 12283))) : ((-12292 / (arr_6 [i_0])))));
                    var_17 = (max(var_17, ((((((max((arr_4 [i_1 + 2] [8] [i_1]), 53244)))) <= (~-4133264591755682069))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 = 3878064484;
                                var_19 += ((12274 ? ((max(var_0, (arr_0 [i_1 + 3])))) : (max((416902834 && 16), 24))));
                                arr_16 [2] [i_1 - 2] [i_2] [i_3] [i_4 + 3] [i_0] = ((~((max(var_6, var_10)))));
                                var_20 = (max(var_20, 31));
                                var_21 = (min(var_21, ((((((53248 ? var_5 : (arr_11 [i_0] [i_0] [i_0])) - 416902812)))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [i_0] = (arr_2 [i_0] [i_1 - 2] [i_0]);
                }
            }
        }
    }
    var_22 += ((~(--15)));
    #pragma endscop
}
