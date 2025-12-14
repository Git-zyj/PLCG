/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118431
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (var_13)));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 11916591908887995244ULL))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_0 [i_0] [(_Bool)1]))));
        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (var_19) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))))))) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_17)))))));
        var_24 |= var_13;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_16)) / (((/* implicit */int) (unsigned short)27220)))))) << (((/* implicit */int) ((((((/* implicit */int) arr_4 [i_1] [i_1])) + (((/* implicit */int) var_17)))) == ((~(((/* implicit */int) (unsigned short)38295)))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38323)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)38295))))), (((((/* implicit */_Bool) 950971698U)) ? (((/* implicit */unsigned long long int) arr_3 [15] [i_1])) : (var_12)))))));
    }
    var_25 ^= ((/* implicit */int) var_2);
}
