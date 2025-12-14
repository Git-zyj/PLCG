/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150538
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_13 += ((/* implicit */int) ((_Bool) ((arr_0 [i_0]) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), (arr_1 [i_0] [(_Bool)1]))))))));
        var_14 = ((/* implicit */int) max((((((((/* implicit */int) var_0)) != (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [1LL] [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))));
    }
    var_15 = ((/* implicit */long long int) (unsigned char)184);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) >= (var_8))))))) == ((+(((unsigned long long int) (unsigned char)81))))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_5))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_10)));
}
