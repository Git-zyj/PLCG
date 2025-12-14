/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (arr_6 [i_0 - 2] [i_0 - 2]);
                arr_7 [i_0] = var_2;

                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    arr_11 [i_2 + 1] [i_1] [i_1] [1] = (min(((((~-5407528257326393728) ? (min(2143, 1045584702)) : (min(144, 1045584685))))), (arr_5 [i_0] [i_1] [8])));
                    var_11 &= (((35 >= 18446744073709551615) != (arr_10 [i_0] [i_0] [i_0] [i_0 - 1])));
                }
                arr_12 [i_0] [i_0] = ((-26611 ? ((min(-2147483643, var_8))) : (((arr_3 [i_1] [2] [i_0 - 2]) - var_2))));
            }
        }
    }
    var_12 = (max((((-((max(var_3, 1)))))), 5407528257326393727));
    var_13 = (((((-1631586978 ? (var_2 || var_5) : 924))) || 87));
    var_14 = (min(var_2, (var_1 / var_8)));
    #pragma endscop
}
