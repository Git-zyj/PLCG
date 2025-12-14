/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179663
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16566)))))) * (((((2457222587U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521))))) ? (((/* implicit */int) ((short) 5104797707114690193LL))) : (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_1 [i_1 + 1]))))))));
                var_20 = ((/* implicit */int) ((signed char) arr_1 [i_0]));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_12))));
    var_22 = ((/* implicit */short) (+(((/* implicit */int) ((var_15) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
}
