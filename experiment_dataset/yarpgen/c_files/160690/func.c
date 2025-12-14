/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160690
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
    var_20 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)31708))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((unsigned int) (short)12288)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) max((var_14), (var_2))))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) var_10))));
        var_22 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) arr_2 [i_0 + 1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((var_10) ? (((/* implicit */int) arr_0 [(unsigned short)5])) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((/* implicit */int) var_17))))))), ((~(min((-1LL), (((/* implicit */long long int) var_3))))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61158))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_24 = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_1])))) > (((/* implicit */int) min((((/* implicit */short) arr_2 [i_1])), (arr_1 [i_1] [i_1 - 1]))))))));
        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) arr_1 [i_1 - 1] [i_1]))), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))) ? (var_19) : (((((var_18) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */long long int) var_3)) : (((var_19) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    }
}
