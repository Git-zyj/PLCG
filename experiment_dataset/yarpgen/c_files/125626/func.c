/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125626
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
    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)194)) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-8151)), ((unsigned short)22663))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((((/* implicit */_Bool) ((unsigned short) var_6))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_10))))));
    var_15 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned short) arr_0 [i_0]))))), (((unsigned int) arr_0 [5LL])))));
                var_17 = ((unsigned int) max((((/* implicit */unsigned char) ((_Bool) arr_3 [i_0]))), (((unsigned char) arr_3 [i_1]))));
            }
        } 
    } 
    var_18 *= ((/* implicit */_Bool) var_5);
}
