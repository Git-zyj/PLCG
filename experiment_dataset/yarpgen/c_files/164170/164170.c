/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_1] = (((-(arr_0 [i_2] [7]))));
                    var_18 = arr_2 [i_1];
                    arr_9 [i_1] [4] [4] = var_2;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_1] = ((!((!(arr_0 [i_0] [i_0])))));
                    arr_13 [i_0] [i_1] [i_1] [i_1] = -var_0;

                    for (int i_4 = 4; i_4 < 7;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1 - 1] = -2122179734;
                        var_19 = ((((((arr_15 [i_0] [i_0] [i_1] [i_3] [i_3]) + (arr_11 [i_4] [i_3] [9] [i_0])))) ? (arr_7 [i_4 + 2] [i_4] [i_4] [3]) : (((3362030382108401353 && (arr_14 [i_0] [i_1] [i_3] [i_0] [i_4]))))));
                    }
                    var_20 &= 15084713691601150262;
                }
                arr_17 [i_1] = (arr_4 [i_1]);
                var_21 = (max(3362030382108401353, (((!(!15084713691601150268))))));
            }
        }
    }
    var_22 = var_17;
    var_23 = (max((((var_5 + 2147483647) >> (((min(var_11, var_0)) + 6459220150305902606)))), var_5));
    #pragma endscop
}
