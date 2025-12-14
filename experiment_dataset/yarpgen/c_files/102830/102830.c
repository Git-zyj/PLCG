/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_9, var_9));
    var_15 = (min((max(-0, ((var_2 ? -217992076 : 36)))), (-32767 - 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_16 += ((((max((arr_7 [i_0] [i_1 + 1] [i_0]), (arr_7 [i_1] [i_1 + 1] [i_1])))) ? (((arr_7 [i_2] [i_1 - 2] [i_0]) ? (arr_7 [i_2] [i_1 - 1] [i_0]) : 50680)) : (arr_7 [i_1 - 2] [i_1 + 1] [i_1])));
                    arr_8 [i_1] [i_1] [i_1] [i_0] |= ((((max((arr_6 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 3])))) ? ((((var_13 != (arr_6 [i_1 - 3] [i_1] [i_1] [i_1 - 2]))))) : (min((arr_6 [i_1 - 2] [i_1] [i_1] [i_1 - 3]), (arr_6 [i_1 - 1] [7] [i_1] [i_1 - 3])))));
                    var_17 = 0;
                    var_18 *= (min((arr_6 [i_0] [i_0] [i_1] [i_2]), -1351540232));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_3] [i_0] = (arr_9 [i_0]);
                    var_19 = (min(var_19, (((min(((min(210, var_13)), (max(84, -655360607)))))))));
                    var_20 = (arr_6 [i_1] [i_1 - 3] [i_1] [i_1 - 1]);
                }
                arr_12 [i_0] &= ((!((max(var_8, (arr_6 [10] [i_1 - 3] [i_1] [i_1]))))));
                var_21 = (max(var_21, ((max(var_6, (max((arr_7 [i_1 - 1] [i_1] [i_1]), (!54068))))))));
                var_22 = (max((!3724699830493204763), ((var_1 > (min((arr_1 [i_0] [i_1]), var_1))))));
                var_23 = var_4;
            }
        }
    }
    #pragma endscop
}
