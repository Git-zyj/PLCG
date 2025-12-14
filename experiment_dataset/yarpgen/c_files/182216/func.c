/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182216
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
    var_17 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_14)) ? (-1960015951978019680LL) : (((/* implicit */long long int) ((/* implicit */int) (short)13426))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)52)) < (var_5)))))))));
    var_18 = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) < (((((/* implicit */_Bool) var_4)) ? (-1318662904) : (((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (-((+(1318662903)))));
        arr_5 [(signed char)0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((var_8) >= (((/* implicit */int) (signed char)-100))))) & ((-(((/* implicit */int) (unsigned char)47))))))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_4)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (min((((((/* implicit */unsigned long long int) -1246463173)) & (18446744073709551591ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))));
    }
    var_19 = ((/* implicit */unsigned short) ((unsigned int) var_11));
}
