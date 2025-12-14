/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108783
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 -= ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_19))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_9)))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned char)255)))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_21 *= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_5 [i_3] [i_2] [i_1])) - (((/* implicit */int) (_Bool)1)))), ((+(((((/* implicit */int) var_13)) - (((/* implicit */int) (unsigned char)255))))))));
                    arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                    var_22 = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) <= (((/* implicit */int) arr_4 [i_1] [23LL]))))) >> (((((((/* implicit */int) arr_4 [i_1] [i_1])) + (((/* implicit */int) arr_4 [i_1] [i_1])))) - (56)))));
        arr_10 [i_1] = ((/* implicit */int) ((min((331669402U), (((/* implicit */unsigned int) -186692558)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1]))))))));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_24 &= ((((((/* implicit */_Bool) ((signed char) arr_12 [i_4] [i_4]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_13 [0])) : (((/* implicit */int) var_13))))) : (9223372036854775807LL))) - (((/* implicit */long long int) (-(((((/* implicit */int) arr_12 [i_4] [i_4])) - (((/* implicit */int) arr_13 [i_4]))))))));
        arr_14 [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-22816)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_13 [i_4])))) | (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_5)) - (92)))))));
        arr_15 [i_4] = ((/* implicit */long long int) 624933044);
        var_25 *= ((/* implicit */unsigned int) var_7);
    }
    var_26 += ((/* implicit */_Bool) var_13);
}
