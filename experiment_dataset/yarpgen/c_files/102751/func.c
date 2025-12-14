/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102751
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (~(var_16)));
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_1), (((/* implicit */short) arr_2 [i_0] [(short)9])))), (((/* implicit */short) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) arr_4 [i_0]))), ((-(arr_1 [4ULL])))))) : (arr_4 [(unsigned char)1])));
                arr_7 [i_0 - 2] [4ULL] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)255)) : (667246528))) >= (((/* implicit */int) arr_3 [8U]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [(short)2])) : (((/* implicit */int) arr_3 [4LL]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_8), ((~(max((((/* implicit */unsigned long long int) var_4)), (var_8)))))));
    var_21 = ((/* implicit */unsigned long long int) var_6);
    var_22 = (!(((/* implicit */_Bool) ((unsigned int) -3058772906900432572LL))));
}
