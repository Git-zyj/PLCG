/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((((min((arr_0 [i_0]), var_10))) ? var_13 : (arr_2 [i_1])))) - (max(((var_1 ? 1982367268 : var_12)), (((1982367269 ? (arr_0 [i_0]) : 32767)))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_16 = (((arr_7 [i_0] [i_0 - 2] [i_2 - 1]) | (arr_3 [i_2 - 1] [i_2 - 2] [i_2 + 1])));
                    var_17 = ((-(((arr_0 [i_0]) ? var_15 : 28672))));
                    arr_8 [3] [i_1] = ((14075771552513744468 ? -var_5 : (!var_14)));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_18 = (max(var_18, ((((arr_10 [i_1] [i_1] [i_0]) <= (arr_4 [i_3] [i_0 + 1] [i_3 + 1]))))));
                    var_19 = (((~48) - ((1982367268 ? 1 : 0))));
                    var_20 = ((-((1 ? 4370972521195807157 : 2539562019636558826))));
                }
            }
        }
    }
    var_21 = (var_4 - (max((min(var_5, var_11)), (((-40 ? var_9 : 2312600036))))));
    #pragma endscop
}
