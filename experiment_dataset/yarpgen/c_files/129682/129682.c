/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 |= ((((min((max(var_4, 8972014882652160)), (arr_1 [i_0])))) ? 1 : -1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = 0;
                    var_14 = (max((min(3040592897866775456, 1)), ((((arr_0 [i_2]) ? var_8 : (arr_0 [i_2]))))));
                    var_15 = (((arr_1 [i_2]) ? (((1 ^ var_8) ^ (((var_4 ? 255 : 1))))) : ((max(((min((arr_0 [i_1]), (arr_8 [i_0] [i_0])))), ((var_7 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_7 [21] [21]))))))));
                    var_16 = (min(var_16, var_0));
                    arr_10 [i_0] [i_0] = var_8;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_17 = ((198 < ((+(((arr_7 [i_3] [i_3]) << (((arr_12 [1]) - 125))))))));
        var_18 &= (max((((((68 ? 10433235406807398696 : 9))) ? (((arr_1 [21]) ? 2644178315359597034 : (arr_8 [8] [7]))) : (min(0, 10433235406807398707)))), (((146 ? 9 : (max((arr_4 [i_3] [i_3] [i_3]), var_10)))))));
        var_19 = ((((((((((arr_1 [17]) < var_4)))) | ((var_10 + (arr_0 [i_3])))))) ? ((((!var_2) ? (arr_0 [i_3 - 1]) : (((58 || (arr_4 [i_3] [i_3] [11]))))))) : 10));
    }
    var_20 = (var_3 ? ((((32751 || var_2) || var_10))) : var_6);
    #pragma endscop
}
