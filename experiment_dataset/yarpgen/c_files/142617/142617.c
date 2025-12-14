/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = 8845;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, 63514));
                                var_18 = var_2;
                                var_19 = (max(var_19, (((((min(-9223372036854775806, var_5))) ? var_5 : (~5436902222314010525))))));
                                var_20 = (max(var_20, ((((max((65535 - var_12), ((min(var_0, 1)))))) ? (3336313646053691706 == 2099938543) : (-5882865 >= 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_28 [i_8] = (max((arr_27 [i_5] [i_5] [i_8 - 3] [i_8 - 3] [i_8] [i_5 - 2] [16]), ((min(15, -25847)))));
                                arr_29 [16] [i_8] [i_5] [i_7] [4] [i_6] [i_5] &= min(var_2, ((min(var_12, var_14))));
                            }
                        }
                    }
                    arr_30 [12] &= 459020802;
                }
            }
        }
    }
    #pragma endscop
}
