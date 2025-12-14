/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155475
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
    var_10 = ((/* implicit */int) (~(((((/* implicit */_Bool) min((var_9), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)157)) - (((/* implicit */int) (unsigned short)32766))))) : ((-(var_8)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        var_11 += ((unsigned short) ((int) -3));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)26845)) < (((/* implicit */int) arr_2 [(unsigned char)15])))))) : (max((var_1), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)0]))))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)38691)) < (((/* implicit */int) (unsigned short)26817))))))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_13 ^= ((/* implicit */unsigned char) var_0);
}
