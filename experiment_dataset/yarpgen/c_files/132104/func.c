/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132104
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (max((((((/* implicit */_Bool) ((arr_1 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1])))))) ? (((/* implicit */int) ((arr_0 [i_1]) == (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))) : (((/* implicit */int) ((short) var_5))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (var_9)))) && (((/* implicit */_Bool) (~(arr_1 [i_0 + 1])))))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_14)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_1 [i_0 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1120080933)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) var_16))))) : (var_11))));
}
