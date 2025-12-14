/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180839
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
    for (short i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0 - 3]) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_0 + 4]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [4ULL] [i_0 + 3]))))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 1])), (var_10))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = var_1;
            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [5ULL] [i_0])) & (((/* implicit */int) var_16))))));
            var_21 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) <= ((+(var_17)))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 1])) - (((/* implicit */int) arr_3 [i_0 + 2]))));
            var_23 -= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        }
        for (short i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_2 + 1]))) : (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-28489), (((/* implicit */short) var_12))))) && (((/* implicit */_Bool) arr_5 [(_Bool)1])))))));
            arr_9 [i_0 + 3] [i_0 + 3] [i_2] = ((/* implicit */unsigned long long int) 3671844613U);
            var_25 -= arr_8 [(_Bool)1];
            var_26 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_2 - 1]));
        }
    }
    var_27 = ((/* implicit */unsigned int) ((((((var_2) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >= (min((14265216119103120477ULL), (((/* implicit */unsigned long long int) var_13)))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) var_14)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
}
