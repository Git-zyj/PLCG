/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174070
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_2 [i_0 - 1])))), (((/* implicit */int) max(((signed char)-33), ((signed char)77))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)178)) >= (((/* implicit */int) (signed char)77))))), (((((1030177159488886645LL) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)25564)))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)255)))) ? (((/* implicit */int) ((arr_0 [i_0 - 3] [i_0 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) var_9))));
    }
    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_0)))))));
}
