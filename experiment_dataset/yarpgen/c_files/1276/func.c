/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1276
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
    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-122)) & (((/* implicit */int) (signed char)-99))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) / (arr_0 [i_0]))), ((~(arr_0 [i_0])))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((var_13) - (((/* implicit */long long int) ((/* implicit */int) var_8))))) <= (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))) > ((-(((/* implicit */int) (signed char)-120))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (signed char)-120)))))))));
        arr_3 [i_0] &= var_6;
    }
    var_17 = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) (signed char)102)), (1654161165978922365LL))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)119)), (var_5))))))) - (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_7)) : (var_13))), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
    var_18 = ((/* implicit */_Bool) ((((long long int) var_1)) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((var_10), (((/* implicit */unsigned int) (signed char)46)))))))));
}
