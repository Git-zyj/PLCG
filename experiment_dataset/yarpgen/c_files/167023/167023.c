/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((var_8 << (1403789569902838149 - 1403789569902838149))), (((!(var_6 != var_10))))));
    var_17 = ((-var_3 ? (max(8, ((7348217805406869826 >> (102 - 71))))) : -6810721973984010428));
    var_18 = ((((var_1 ? ((min(var_13, var_12))) : var_14)) <= var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 |= (((var_13 | (arr_2 [i_0] [i_1] [i_0]))) - ((((min((arr_0 [i_0] [i_1]), var_1)) < -61))));
                var_20 *= ((((((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [i_0]) : var_6))) ? (((~(arr_3 [i_1])))) : ((var_7 % (arr_1 [i_1])))));
            }
        }
    }
    var_21 = ((!((var_3 <= (((max(var_13, 154))))))));
    #pragma endscop
}
