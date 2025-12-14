/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((!(-126 & var_9))) ? var_3 : (((!(((var_11 ? var_5 : 1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_14 = arr_7 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1];
                        var_15 = (max(var_15, (((!(arr_6 [i_2 - 1] [i_2 - 1] [10]))))));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_16 = (min(((-12 ? (var_6 >= 126) : (-50 >= 1))), (arr_2 [i_0] [1])));
                        arr_11 [i_0] [i_1] [13] = var_1;
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_5] [i_5] [i_5] [i_0] = min(126, (!14));
                        var_17 = (min(((var_6 ? (arr_2 [i_2 - 1] [i_5 + 1]) : (((arr_8 [i_0]) ? (arr_2 [i_0] [i_1]) : 1)))), (((((1320850307255710611 ? (arr_2 [i_2] [i_0]) : (arr_0 [i_0]))) == (((arr_12 [i_0] [i_1] [i_2 - 1] [i_5 + 1] [i_0] [i_0]) ? 238786594 : 65521)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [8] [1] [i_1] [i_2 - 1] [i_6 - 2] [i_7] = (((!((((arr_6 [i_0] [i_1] [i_2]) ? var_9 : 6067859845885304910))))));
                                var_18 = ((((max((((var_7 || (arr_18 [i_0] [i_1] [2])))), (arr_4 [i_0])))) > ((var_11 ? (!var_1) : ((max((arr_17 [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((min(((4294967293 ? var_9 : var_2)), ((var_7 ? var_4 : (arr_16 [i_0] [i_1] [i_6] [i_7 + 3]))))), (arr_15 [i_0] [i_1] [i_1] [i_6 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = -var_9;
    var_20 = var_7;
    var_21 = ((-1 == (var_4 / var_5)));
    #pragma endscop
}
