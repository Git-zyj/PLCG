/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3563668802;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = 0;
                    var_17 = (arr_8 [i_0] [11] [11] [i_0]);
                    arr_10 [i_1] [i_2] = (min(((((arr_4 [i_0] [i_1] [i_2]) && (arr_4 [i_0] [i_0] [i_2])))), (max((arr_4 [i_1] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (286593188 || 2147418112)));
                                var_19 = (min(var_19, ((min((-438051601 == 3), (min((((arr_8 [i_0] [1] [i_0] [1]) + (arr_7 [i_0] [i_1] [i_2]))), (arr_9 [i_0] [i_1]))))))));
                                arr_15 [i_0] [i_1] [5] [i_0] = (arr_6 [10] [10] [10]);
                                arr_16 [4] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((286593188 ? 4008374087 : 2147418097))) > ((max(((4008374107 << (18446744071562133504 - 18446744071562133484))), 4008374107))));
                                arr_17 [i_0] [i_0] [i_0] [9] [i_0] = (min((~2720926083), ((((arr_12 [3] [1] [i_2] [11] [3]) ? (2430031533 && 1) : 1)))));
                            }
                        }
                    }
                    arr_18 [i_0] [3] [i_1] [i_2] &= -1568;
                }
            }
        }
    }
    var_20 = ((((max((min(-955783008952468114, 2)), (286593193 | var_0)))) ? ((((var_3 ? var_8 : 1564)))) : var_10));
    #pragma endscop
}
