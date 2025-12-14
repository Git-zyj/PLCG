/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((min((max(582851401, -1)), var_5)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (max(7202269693123836824, 7202269693123836824));
                    var_18 = ((((min((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : var_2)), -387727360))) ? ((var_6 ? (((var_4 + (arr_5 [i_0])))) : (max(11244474380585714769, 225)))) : (arr_3 [i_0] [i_2])));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_12 [12] [i_3] [i_0] [i_3] = ((((var_10 ? (arr_6 [i_2] [i_0 + 2]) : (7202269693123836824 % 1052193918))) >= ((((1708753308 && (arr_5 [i_0])))))));
                        var_19 = (387727360 % (241 && 185));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_20 &= (max(((185 ? (arr_5 [8]) : var_8)), (arr_5 [12])));
                        arr_15 [i_0] = var_12;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_5] [i_5] = (min((((((var_14 ? var_0 : var_9))) || (var_14 || var_3))), (((arr_14 [i_0] [i_0] [i_0] [i_5]) && var_11))));
                        arr_20 [i_0] [i_0] [i_2] [i_0] = ((((max((var_12 != var_11), (min(var_1, 452019529215573357))))) ? ((((((!(arr_16 [9] [i_1] [9] [3] [i_2] [9])))) + ((var_2 | (arr_6 [i_5] [i_5])))))) : (((arr_5 [i_0]) ? (var_13 == var_8) : var_12))));
                        var_21 = (max(var_21, ((max(var_13, (arr_2 [i_0 + 2] [i_0] [i_1 - 1]))))));
                        arr_21 [i_0] [i_1] [i_0] [i_0] = arr_5 [i_0];
                    }
                    var_22 = 15409977486322543058;
                }
            }
        }
    }
    var_23 = (max((((var_5 ? (var_1 <= var_10) : ((var_2 ? var_0 : var_2))))), ((var_15 ^ ((1 ? 2029358200985971646 : 5))))));
    #pragma endscop
}
