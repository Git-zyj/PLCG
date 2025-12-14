/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                var_17 += (arr_4 [i_0] [i_0] [10]);
                var_18 ^= 1;
                var_19 ^= (((arr_4 [i_0 + 1] [1] [i_1 + 1]) & ((-(arr_4 [9] [i_1] [i_1 - 1])))));
                var_20 = ((((1 == ((min((arr_5 [i_0 + 1]), 1))))) ? (arr_1 [i_0 + 2] [i_1 + 4]) : 1));
                var_21 = (min(var_21, ((((max(1, 32756)) % 1)))));
            }
            var_22 = ((!((max(((1 ? (arr_2 [i_0] [i_1 + 4]) : (arr_4 [7] [7] [i_0 + 1]))), var_1)))));
            arr_8 [i_1] = var_10;

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_23 += 1;
                            arr_17 [i_3] [2] [i_0 + 1] [i_0 + 1] [i_3] = ((!((min((arr_7 [i_5 + 4] [1] [3]), 59157)))));
                        }
                    }
                }
                var_24 = ((((!(((arr_12 [i_0] [i_0] [i_3] [i_0]) && 30875)))) ? var_5 : ((min(-8, (min((arr_2 [i_0] [i_1]), 254)))))));
            }
        }
        var_25 = ((((!(arr_1 [9] [i_0 + 1]))) ? ((((((45798 ? 45806 : -29771))) <= var_3))) : (((12591 >= (~1))))));
    }
    var_26 = ((-(min((!65521), ((-17286 ? 14 : 2735969490798223856))))));

    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = (((arr_18 [i_6] [i_6]) && (((12130 ? ((((-15 <= (arr_18 [i_6] [i_6]))))) : (max(-18601, 14663612068553974621)))))));
        arr_21 [i_6] = (((((-(arr_19 [i_6])))) ? (((arr_19 [i_6]) ? 0 : (arr_19 [i_6]))) : (((arr_19 [i_6]) ? var_7 : 255))));
        var_27 = (max(var_27, ((min(((((min(254, var_1)) > (arr_18 [i_6] [i_6])))), ((((((arr_19 [i_6]) ? 3 : (arr_19 [10])))) ? 1 : (arr_18 [i_6] [2]))))))));
    }
    #pragma endscop
}
