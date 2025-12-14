/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124380
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_0 [(_Bool)1])) / (arr_1 [4])))));
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)75), (((/* implicit */unsigned char) arr_0 [12ULL]))))) * (((((/* implicit */int) (signed char)52)) & ((+(((/* implicit */int) var_15))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) arr_0 [10U])))))));
            arr_5 [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) min(((-((+(((/* implicit */int) var_3)))))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (_Bool)1))))));
            arr_6 [i_0] = ((/* implicit */long long int) (!(var_16)));
            var_21 = ((/* implicit */short) -596063233);
        }
    }
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10827)) ? (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) var_4))))) : (((var_2) ? (var_12) : (var_11))))))));
}
