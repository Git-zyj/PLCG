/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142100
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((3589965360U), (705001916U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((var_15) | (7536432389594091438ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) 11988358929582803214ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_18 = ((/* implicit */unsigned int) var_3);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) ((arr_5 [i_1 - 1] [i_1 + 4]) + (arr_5 [i_1 + 1] [i_1 - 1])))) ? ((-(((unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))));
        arr_7 [i_1 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)17599)), (3589965360U))))));
        var_21 = max((max((((/* implicit */unsigned long long int) max((arr_6 [i_1 - 1] [i_1 + 4]), (arr_6 [i_1] [(_Bool)1])))), (10910311684115460153ULL))), (((((/* implicit */_Bool) max((arr_6 [i_1] [i_1]), (arr_6 [12LL] [(short)16])))) ? (((7760489509681516609ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))))) : (((((/* implicit */_Bool) (signed char)54)) ? (var_2) : (((/* implicit */unsigned long long int) var_7)))))));
    }
    var_22 = ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
