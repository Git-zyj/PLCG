/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((var_10 ? 12337384143997933688 : (((var_16 << (-61 + 82)))))) << (-1 + 12)));

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = (((((!(arr_1 [i_0] [i_1]))) ? 13 : 103)));
                    var_20 += ((((!(arr_2 [10]))) ? (((43168 != (arr_2 [10])))) : var_7));
                }
                var_21 = var_8;
                var_22 = ((((((94 ? (arr_0 [i_0]) : var_12)))) ? (arr_3 [i_0]) : ((min((arr_8 [i_0]), (arr_8 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
