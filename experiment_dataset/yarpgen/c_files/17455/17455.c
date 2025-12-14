/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_9 ? ((var_4 ? var_11 : 59960)) : (~var_10))) >= (((var_4 ^ (0 / var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 *= ((((!(arr_5 [i_0] [i_0])))));
                    var_18 ^= (arr_6 [i_1] [i_1] [i_2] [i_1]);
                    var_19 ^= (arr_4 [i_1]);
                    var_20 += (max(var_4, -218413089420123326));
                }
            }
        }
    }
    var_21 = (((((!var_8) && -28149)) ? var_5 : ((((!(!var_5)))))));
    var_22 = ((((var_6 ? (var_11 != var_5) : ((var_14 ? (-9223372036854775807 - 1) : -1259698143)))) >= (((var_0 ? (~2008243485) : (((max(var_1, 59960)))))))));
    #pragma endscop
}
