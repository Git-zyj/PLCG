/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (20274 != 45260);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_0 - 1] [i_1] [i_2] = ((((max((arr_2 [i_0 + 2]), (arr_0 [i_0 + 2])))) ? (max((var_12 % var_12), (arr_5 [i_0 - 2] [i_0 - 2] [i_0 + 2]))) : (((!((((arr_4 [i_0 - 2] [i_0 - 2]) ? var_1 : var_10))))))));
                    var_18 = var_9;
                }
                arr_11 [i_1] [i_0] = (max((((var_16 <= (max(var_13, var_14))))), (max((45262 == 38512), (((arr_8 [i_0] [i_0] [i_1]) ? var_14 : (arr_6 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1])))))));
                arr_12 [10] [5] [i_0 - 1] = (max((1206542925 - 29034), (((((((arr_0 [i_1]) != var_9))) < ((max(41, 1))))))));
                var_19 -= ((((((arr_6 [i_0] [i_1] [i_1] [i_0 - 3]) % (((max(var_12, var_1))))))) ? ((max(var_12, (arr_8 [i_1] [i_1] [4])))) : ((((var_12 ? 80 : 38782)) % 20274))));
            }
        }
    }
    var_20 = var_1;
    var_21 = var_11;
    #pragma endscop
}
