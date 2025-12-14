/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] = ((var_7 ? ((var_3 ? (arr_8 [i_2]) : (arr_0 [i_2 + 1] [i_3 - 3]))) : ((var_9 - (arr_7 [i_1] [i_1] [i_2] [i_3] [i_2 + 3] [i_3 - 2])))));
                        var_10 = (min(var_10, ((!(((4024873843 ? 47 : 563029832)))))));
                        arr_11 [i_2] [i_2] = (!6);

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_4] [i_1] [1] [i_3] [i_1] |= (0 << 52);
                            var_11 = ((-((((var_2 / 4024873848) >= (arr_12 [i_2 - 2] [i_2] [i_2] [i_2 + 3] [i_3 - 1]))))));
                            arr_15 [i_2] = 47;
                            arr_16 [1] [i_1] [i_2] [i_3] [i_2] [i_2 + 4] [i_2] = var_3;
                        }
                    }
                }
            }
            arr_17 [i_0] = (((((((-4598118661337286346 ? 2485044947422925164 : 2260370393221201251))) ? 3614498293 : (11115536494419607841 <= 1167205369))) <= (((((max(1040384, var_1)) <= (arr_9 [i_0] [i_0] [i_0] [i_1] [i_0])))))));
        }
        arr_18 [i_0] = ((((21 > ((7798475006937904954 ? 5 : 1289182458)))) ? -1052586752316174106 : -8162628576881028673));
        arr_19 [i_0] = (((((max(1, 495173455913292685)) & (60390 | -6723305464436971354)))) ? -223 : ((-9223372036854775803 ? 16183267367656004383 : -9394)));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_12 = (max(var_12, (18761 - var_0)));
        var_13 = (223 + (arr_2 [3] [i_5] [i_5]));
        arr_23 [i_5] [i_5] = var_5;
        arr_24 [4] |= var_0;
    }
    var_14 = var_3;
    #pragma endscop
}
