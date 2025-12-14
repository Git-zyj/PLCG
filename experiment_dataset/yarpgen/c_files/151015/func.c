/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151015
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
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 = ((/* implicit */_Bool) 10316444868260102809ULL);
    var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_1) / (((/* implicit */int) (signed char)-105))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))) : ((+(var_18))))), (max((((/* implicit */unsigned long long int) 2923115247579698828LL)), (min((var_0), (((/* implicit */unsigned long long int) var_15))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_3 [i_0] [i_0] = ((int) min((((unsigned int) (unsigned char)47)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)7)))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max(((((~(var_14))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1194328412)))))))), (arr_1 [i_0] [i_0]))))));
        var_24 = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)2)))) >> (((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) - (15571277722017441261ULL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (4131395236U))))), (823720486U)));
        arr_8 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) (_Bool)1)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (0U)))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 0U)) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((12056525047784200372ULL) >= (var_18))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_6 [(signed char)18])) > (18169569686767637747ULL)))), (max((((/* implicit */unsigned long long int) -8168561386017046904LL)), (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (+(-9223372036854775800LL)))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_26 += ((/* implicit */unsigned short) ((unsigned long long int) var_2));
        arr_11 [i_2] = ((/* implicit */signed char) var_14);
    }
    var_27 = ((/* implicit */unsigned short) (((((+((-(((/* implicit */int) (_Bool)1)))))) + (2147483647))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_18) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 0)))))) : (((long long int) 3451060759U))))));
}
