/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126390
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_21 += ((/* implicit */signed char) arr_2 [i_0]);
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)223))))))))))));
                    var_23 = arr_7 [i_0] [i_2];
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_24 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1471395075U))));
        var_25 = ((/* implicit */unsigned long long int) ((arr_10 [i_3]) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) (unsigned short)496))));
    }
    var_26 = ((/* implicit */signed char) ((unsigned int) var_1));
    var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)16376))));
}
