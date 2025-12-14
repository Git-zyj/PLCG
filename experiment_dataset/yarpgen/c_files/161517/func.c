/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161517
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
    var_20 = ((/* implicit */_Bool) var_2);
    var_21 = (signed char)-117;
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_9)), (((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))), (arr_3 [i_0] [i_1 + 1])));
            var_23 = ((/* implicit */long long int) var_6);
            arr_7 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-107))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned short) arr_5 [i_0] [i_1]))))), (2698570398U)))) ? ((+(((/* implicit */int) (unsigned char)131)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (signed char)-1))))));
        }
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) * (((/* implicit */int) (unsigned char)125))))) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0])) : (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned char)130))))));
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-3385)) : (((/* implicit */int) arr_2 [4U])))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1])) || (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (1642432839839389578LL))))) : (((/* implicit */long long int) 1073741824U))));
    }
}
