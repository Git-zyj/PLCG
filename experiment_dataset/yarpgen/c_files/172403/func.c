/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172403
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((_Bool) ((var_1) & (((((/* implicit */int) (unsigned char)254)) ^ (((/* implicit */int) (unsigned short)8191))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [(short)10] = ((/* implicit */unsigned long long int) (!((((!(((/* implicit */_Bool) (unsigned char)249)))) && (((/* implicit */_Bool) (signed char)67))))));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_2 [10]))));
                    var_14 = ((/* implicit */signed char) (-(1529370264U)));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((short) ((1529370264U) * (1529370264U)))));
    }
    for (int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) 2765597005U))));
        arr_14 [i_3] = ((/* implicit */signed char) arr_9 [i_3] [i_3] [i_3]);
    }
    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) ((unsigned short) -2008597527)))));
}
