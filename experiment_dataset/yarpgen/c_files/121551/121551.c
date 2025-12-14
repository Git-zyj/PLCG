/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = var_16;
    var_20 = (max(((((min(var_3, 267911168))) ? (((max(var_16, var_2)))) : (max(var_6, var_9)))), (~var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (min((min((arr_6 [i_1] [i_1 + 3]), (arr_0 [i_0]))), (max(186, 265958462))));
                    var_22 = min(-265958453, 1);
                    arr_9 [12] [i_1] = (arr_1 [i_1 - 2]);
                    arr_10 [12] [i_1] = (arr_6 [i_1] [i_1]);
                    arr_11 [i_1] = var_17;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_20 [i_5] [i_3] [i_5] [i_5] = ((77 ? 42628 : (max((max(85, 18012199486226432)), 50060))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_23 = (arr_5 [i_3]);
                                var_24 = (min(-598819078, 3));
                            }
                        }
                    }
                    var_25 = (((~265958440) ? (((min(var_16, 231)))) : (min(-265958441, (min(7, (arr_5 [i_3])))))));
                    arr_27 [i_3] [i_3] = ((min(-5678073650138820536, 5776222701653069963)));
                    var_26 = (((+(((arr_4 [i_3] [i_4] [i_4]) ? 18012199486226425 : 240)))));
                }
            }
        }
    }
    #pragma endscop
}
