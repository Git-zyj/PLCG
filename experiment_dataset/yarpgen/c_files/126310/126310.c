/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_4 ? var_2 : var_5)) > var_5)));
    var_14 = (max(var_14, ((((min((min(var_2, var_6)), 24792)) > var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_15 *= ((!((min((max(var_3, var_10)), ((min(var_10, (arr_3 [1])))))))));
                        var_16 = (((arr_1 [7]) <= -var_7));
                        arr_10 [10] [i_3] [i_3] [0] &= var_3;
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, ((((arr_2 [0] [8] [8]) ^ var_0)))));
                        var_18 += ((var_6 ? ((-(min((arr_3 [11]), var_6)))) : 31));
                        var_19 = ((-((min((!40740), (max(var_11, (arr_0 [1]))))))));
                        var_20 = var_6;
                    }
                    var_21 = var_8;
                }
            }
        }
    }
    var_22 = (max(var_22, ((max(((var_2 ? (max(var_2, var_11)) : (((var_5 ? var_10 : var_8))))), var_9)))));
    #pragma endscop
}
