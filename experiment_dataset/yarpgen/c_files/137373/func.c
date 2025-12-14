/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137373
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
    var_20 = ((/* implicit */unsigned char) ((5) >= (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (var_9)))));
        var_21 = ((/* implicit */_Bool) (((!(((13) != (((/* implicit */int) (short)13)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) 4020280747334468635ULL))))) : (((/* implicit */int) ((unsigned short) 18116798632634665190ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)45665)) << (((((/* implicit */int) (signed char)31)) - (21))))) <= (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(((/* implicit */int) (short)-10)))))));
        var_23 = ((/* implicit */short) (unsigned short)19878);
    }
}
