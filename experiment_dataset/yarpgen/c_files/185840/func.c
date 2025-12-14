/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185840
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
    var_16 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)125)), (18446744073709551608ULL)));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_12))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)52652)))) : (((((/* implicit */_Bool) var_3)) ? (11639597119611756106ULL) : (((/* implicit */unsigned long long int) -8714124396700721756LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43696))))) : ((-(((/* implicit */int) (_Bool)1))))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) var_11)) ? (16905945725599560972ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))));
    var_19 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [(_Bool)1] &= ((/* implicit */long long int) ((((/* implicit */int) (signed char)114)) + (((/* implicit */int) (short)29281))));
        var_20 = ((/* implicit */unsigned int) ((((arr_0 [i_0]) << (((((/* implicit */int) (unsigned short)5346)) - (5345))))) << (((/* implicit */int) ((short) (_Bool)1)))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]));
        arr_5 [i_0] [i_0] = ((/* implicit */int) (!((((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
    }
}
