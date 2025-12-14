/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185390
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_13)), (arr_1 [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [6LL] [i_0])) || (((/* implicit */_Bool) 8380416U))))))))), (arr_2 [i_0] [i_0])));
        var_21 *= ((/* implicit */signed char) ((max((max((7907444202772635690ULL), (12875322705894406583ULL))), (((/* implicit */unsigned long long int) min((2340816800U), (((/* implicit */unsigned int) (signed char)60))))))) % (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)3)), (2340816813U))))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))))))))));
        var_22 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (((((/* implicit */unsigned long long int) arr_1 [i_0])) & (var_2))))) >> ((((~(arr_0 [i_0] [i_0]))) + (729016213)))));
    }
    var_23 = ((/* implicit */unsigned int) var_2);
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */unsigned long long int) var_4)) : (min((var_2), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0)))))))));
}
