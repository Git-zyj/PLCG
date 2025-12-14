/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129483
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)120)), ((unsigned short)3072))))));
                arr_6 [(unsigned short)13] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_7))))) : ((~(3890294186U)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_7)), (3365187886U)));
    var_12 = var_9;
}
