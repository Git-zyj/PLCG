/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [14]) ? ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((-(arr_0 [i_0 + 1])))) : -var_6)) : (!-1071097071884122914)));

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            var_18 -= (max((((((-(arr_0 [i_1]))) / (((arr_3 [i_0] [0] [12]) ? var_14 : var_8))))), var_4));
            arr_5 [i_1 - 1] [i_1] = ((-((((arr_3 [i_0 - 2] [i_1] [i_1 + 2]) && (arr_0 [i_1]))))));
        }
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] [20] = (((!var_15) ? ((((((arr_7 [i_2] [i_2 - 1]) ? var_1 : (arr_7 [i_2] [i_2])))) ? ((var_16 ^ (arr_6 [i_2]))) : (!var_9))) : (((max((arr_7 [i_2 - 1] [i_2 - 2]), (arr_6 [i_2 - 1])))))));
        arr_11 [i_2 + 1] = ((var_14 ? (arr_9 [i_2 + 1]) : -1071097071884122914));
        var_19 -= (((((((((arr_9 [i_2]) % var_14))) ? ((min(var_10, (arr_7 [i_2 + 1] [i_2])))) : ((((arr_6 [i_2]) < var_8)))))) & (((((var_17 ? var_1 : (arr_7 [i_2] [i_2])))) ? ((max(var_1, (arr_9 [i_2])))) : (max((arr_8 [i_2 - 1]), (arr_8 [14])))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = (max(1071097071884122914, ((((min(var_12, (arr_3 [4] [14] [i_3])))) ? ((((arr_8 [i_3]) ? -71 : var_2))) : ((var_2 % (arr_1 [11])))))));
        var_21 = ((+((((min((arr_8 [i_3]), var_10))) ? (((var_9 ? var_11 : var_12))) : (min(1071097071884122913, 0))))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] [9] &= var_12;
        var_22 = ((var_8 ? (((arr_16 [i_4] [10]) - (arr_14 [i_4]))) : (arr_15 [i_4])));
    }
    var_23 = 2198561890;
    #pragma endscop
}
