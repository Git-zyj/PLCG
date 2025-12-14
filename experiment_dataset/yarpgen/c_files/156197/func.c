/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156197
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
    var_18 = min((min(((+(((/* implicit */int) (short)8184)))), ((+(((/* implicit */int) (unsigned short)96)))))), (((/* implicit */int) var_5)));
    var_19 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) (-((~((~(arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned long long int) arr_2 [i_0 - 1])));
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1069837742)))))));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((short) arr_0 [6LL]))), (((((/* implicit */_Bool) (short)-8179)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0] [i_0]))))))));
        var_22 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (arr_2 [7])))) ? ((~(((/* implicit */int) (signed char)63)))) : (var_10))) + (2147483647))) >> ((((~((~(arr_1 [i_0 - 1] [6]))))) + (5082243577528823155LL)))));
    }
    var_23 = ((/* implicit */int) (short)-8179);
}
