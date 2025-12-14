/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165644
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) min(((unsigned char)196), ((unsigned char)196))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) var_6);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34143)) ? (min((((/* implicit */unsigned int) var_6)), (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((var_9) - (155893935U))))))))) ? ((-((+(((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */int) ((((/* implicit */long long int) 3421247303U)) > (-1946961811485045542LL)))) | ((+(((/* implicit */int) arr_2 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((min((((/* implicit */unsigned int) -1193895419)), (3421247303U))) - (3101071852U)))));
    }
}
