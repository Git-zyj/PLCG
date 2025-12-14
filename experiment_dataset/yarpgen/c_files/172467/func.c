/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172467
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
    var_16 = ((/* implicit */short) (+(((((/* implicit */int) min(((short)-28983), (((/* implicit */short) var_9))))) & (((/* implicit */int) max(((short)21266), (var_14))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(2644877869038922515LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_8);
        arr_5 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (signed char)113)), (var_7))) >> (((/* implicit */int) ((short) var_4)))))) ? (((unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */short) var_4)), ((short)21257))), ((short)-21268)))))));
        arr_6 [i_0] [i_0] = ((/* implicit */short) (signed char)69);
    }
    var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 18446744073709551613ULL)))))) - (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1)))))));
    var_18 = ((/* implicit */unsigned long long int) min(((short)6494), ((short)21246)));
    var_19 = ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12U)) ? (4294967283U) : (4294967262U))))))) ? ((-(((891994251U) >> (((((/* implicit */int) (short)-16398)) + (16402))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))));
}
