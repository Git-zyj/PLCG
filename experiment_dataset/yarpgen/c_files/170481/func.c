/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170481
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) arr_0 [i_0 + 1] [i_0 + 1]);
        var_12 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_13 = ((/* implicit */unsigned int) 6332608606844178606ULL);
    var_14 = ((/* implicit */unsigned short) var_1);
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) 58533212)) ? (((/* implicit */long long int) var_5)) : (var_10)))))), (var_9)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_2))))) >= ((-(((((/* implicit */_Bool) 15467410606033061914ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (var_1)))))));
}
