/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 = (min(231, (((-6409761348736411597 < (min(var_7, 250)))))));
                        var_17 = ((((max((!11788567728017623586), (!var_9)))) / ((((arr_9 [1] [i_1] [1] [i_1]) == (arr_9 [i_0] [i_1] [i_2] [i_3]))))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = (arr_9 [i_0] [i_1] [i_0] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        var_18 = 29666;
                        arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = var_12;
                        arr_18 [i_0] [i_1] [i_2] = (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (((!(arr_0 [i_2])))) : ((647 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                        var_19 = ((((((arr_10 [i_2]) ? (arr_5 [i_0] [i_0] [i_4]) : 123))) ? (arr_1 [i_4 + 2]) : ((((133 >= (arr_7 [2] [i_2] [i_0] [i_0])))))));
                        var_20 = -8966624251378183419;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_24 [i_5] = -var_8;
                            var_21 = (((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) : 647));
                            arr_25 [i_6] [i_1] [i_1] [4] = ((272801755 < (((-41 ? 158 : 641)))));
                            var_22 = (((((4022165541 ? -95 : var_6))) ? 64891 : (!115)));
                        }
                        var_23 = (arr_22 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_5]);
                        arr_26 [i_0] [i_0] [i_2] [i_0] = 14651433006726173456;
                    }
                    var_24 = 7803334983287990056;
                }
            }
        }
    }
    var_25 = (min(160, (((((var_10 ? var_5 : var_10))) ? var_5 : (18 > 272801762)))));
    #pragma endscop
}
