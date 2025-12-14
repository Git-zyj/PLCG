/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106563
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1335844099)), (min((arr_0 [i_0]), (var_11)))))), (min((((/* implicit */unsigned long long int) ((var_16) | (((/* implicit */long long int) 1335844099))))), (((15118939188639490076ULL) >> (((-1335844100) + (1335844128)))))))));
        var_20 = ((/* implicit */short) ((((3327804885070061539ULL) < (((10794827219004075969ULL) - (((/* implicit */unsigned long long int) var_7)))))) ? (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54819))))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3]))) == (((var_16) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((7651916854705475648ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70)))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) != (var_17))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (arr_3 [i_1] [i_1])));
        arr_6 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 1595156303U)) / (var_16))))));
    }
    var_21 = max((((((/* implicit */long long int) var_11)) % (((var_16) - (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */_Bool) 10794827219004075964ULL)) && (((/* implicit */_Bool) 3815833255U))))) : (((/* implicit */int) (signed char)-87))))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) 3071204499U);
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) -499577726)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) arr_8 [i_2]))))) % (var_15))) == (((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) / ((-2147483647 - 1)))) & (((/* implicit */int) arr_8 [i_2])))))));
    }
}
