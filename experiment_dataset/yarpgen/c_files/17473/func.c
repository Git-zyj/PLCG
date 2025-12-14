/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17473
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))), (arr_1 [(short)1] [i_1 + 3])))));
                arr_6 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)107)) >> (((((/* implicit */int) ((short) ((arr_1 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) - (739)))));
                arr_7 [i_1] [i_0] = ((/* implicit */short) min((((unsigned int) (~(((/* implicit */int) (unsigned short)39250))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2987))) > (arr_3 [i_0] [(signed char)20] [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), ((unsigned short)39250))))))) & (((/* implicit */int) (short)16917))));
    var_16 = (((!(((var_13) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) ((int) var_4))) : (((((((/* implicit */_Bool) 17)) || ((_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) : (max((((/* implicit */long long int) var_9)), (6861914121405876312LL))))));
}
