/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103255
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) ((_Bool) 9223372036854775807LL))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (349075424U)))))));
        var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57995))) ^ (349075408U)))) ? (((9223372036854775807LL) >> (((/* implicit */int) (signed char)49)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1572278170)) ? (280813198) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        var_20 = ((/* implicit */unsigned short) ((((arr_3 [i_1]) - (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_4 [i_1])))))) + (((/* implicit */int) ((signed char) (unsigned short)60134)))));
    }
    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_9 [1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((arr_6 [i_2]) ^ (((/* implicit */int) (unsigned short)60992))))))) ? (((arr_5 [i_2]) >> (((/* implicit */int) ((unsigned char) arr_5 [(short)11]))))) : ((-(var_2)))));
        var_22 = ((/* implicit */_Bool) (signed char)60);
    }
}
