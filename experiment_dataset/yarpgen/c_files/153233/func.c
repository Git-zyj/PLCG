/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153233
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))), (((((/* implicit */_Bool) -8897305032229097313LL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) | (((((-6894377067033107825LL) + (9223372036854775807LL))) << (((6894377067033107825LL) - (6894377067033107825LL)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))) <= (max((6894377067033107824LL), (-6894377067033107846LL)))));
    }
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (6894377067033107825LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_0)))))))));
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_5))))) == (((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (((/* implicit */unsigned long long int) 786432U))))))), (var_5)));
    var_13 = ((/* implicit */long long int) var_8);
}
