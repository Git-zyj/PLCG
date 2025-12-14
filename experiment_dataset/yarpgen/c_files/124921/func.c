/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124921
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1]))));
                arr_5 [i_0] [6U] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_1] [i_0 - 1] [i_1])) ? (max((arr_1 [i_0 - 1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_1 [i_1] [i_1]))))) + (max((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1])))));
                var_16 = ((/* implicit */long long int) ((short) arr_1 [i_0 - 1] [i_1]));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))) / (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_1 [i_0] [i_1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max(((-(3853283781U))), (((/* implicit */unsigned int) (_Bool)1))));
    var_18 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) var_12)))) & (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) 3853283799U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))) : (11248062609900487984ULL)))));
}
