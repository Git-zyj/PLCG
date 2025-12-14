/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166758
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(var_17))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((-1262931639) > (((/* implicit */int) (short)-32765))))) | ((-(arr_3 [i_1 + 1] [i_1 + 3])))));
                arr_7 [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned short)18182)))) & (((((/* implicit */int) var_12)) << (((var_2) - (9444344333087069395ULL))))))) + (((/* implicit */int) ((short) min((var_9), (((/* implicit */int) arr_1 [i_0]))))))));
                var_19 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_16);
}
