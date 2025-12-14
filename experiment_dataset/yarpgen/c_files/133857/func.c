/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133857
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_11 = (signed char)(-127 - 1);
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_4)));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((signed char) ((((var_3) >= (arr_6 [i_1] [i_1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))))))))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 234539482U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((+(((((/* implicit */_Bool) 240882918892854199LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32751))) : (arr_5 [(short)15] [(unsigned short)11])))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((signed char) (unsigned short)54133))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19088)) ? (9223372036854775807LL) : (-240882918892854226LL)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [(unsigned short)6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))));
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? ((-(var_0))) : (((/* implicit */unsigned int) (+(arr_6 [i_1] [i_1]))))));
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((-((+(((/* implicit */int) var_4)))))) : (((int) var_4))));
}
