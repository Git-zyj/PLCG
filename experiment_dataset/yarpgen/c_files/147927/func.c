/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147927
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = 127ULL;
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)22771)) : (((/* implicit */int) arr_3 [i_0]))))) ? ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) arr_3 [i_0])) : (((var_5) << (((((((/* implicit */int) (signed char)-127)) + (157))) - (30))))))) : (((/* implicit */int) var_1))));
        arr_6 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((arr_0 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (var_7))))));
        arr_7 [i_0] [(signed char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_8))))) ? (((/* implicit */int) ((short) ((signed char) arr_0 [i_0])))) : (((/* implicit */int) arr_3 [i_0]))));
        arr_8 [i_0] = ((/* implicit */unsigned char) 20ULL);
    }
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((16777215), (((/* implicit */int) (signed char)127))))) ? (var_7) : (((/* implicit */int) var_1))));
    var_11 = ((/* implicit */_Bool) var_2);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-83)) : (2147483629)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (var_8) : (((/* implicit */int) var_0)))) : (var_7)));
    var_13 = var_3;
}
