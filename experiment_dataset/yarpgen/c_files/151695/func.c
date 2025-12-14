/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151695
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min(((unsigned short)65533), (((/* implicit */unsigned short) (short)-1))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned char) arr_3 [i_0] [(_Bool)1])), (((/* implicit */unsigned char) ((1346510271U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))))))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_3))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_8))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) (unsigned short)10)), (var_11))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)55693)))) == ((-(((/* implicit */int) var_10)))))))));
    var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55693))) : (1023ULL))), (var_5)));
    var_19 = ((/* implicit */unsigned int) var_4);
    var_20 = ((/* implicit */int) var_6);
}
