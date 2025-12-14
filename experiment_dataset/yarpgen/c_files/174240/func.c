/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174240
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
    for (signed char i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (short)-8241))))) ? ((((_Bool)1) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0]))))))));
        var_17 += ((/* implicit */short) ((((arr_1 [i_0] [i_0]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (signed char)61))))))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (arr_0 [i_0] [i_0])))) / ((+(((/* implicit */int) var_11)))))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])))))) * (max((arr_0 [i_0 - 2] [i_0 - 2]), (arr_0 [i_0 - 1] [i_0 - 4])))));
    }
    var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_12))))) : (310985258U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_19 = ((/* implicit */short) (signed char)48);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)59), ((signed char)-35)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) : ((~((-(2847194681U)))))));
}
