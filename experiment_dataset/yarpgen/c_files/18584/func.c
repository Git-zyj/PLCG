/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18584
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
    var_17 = var_8;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_0 [i_0])), (var_5)))), (((arr_4 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
                var_18 = ((/* implicit */short) ((long long int) arr_2 [i_0]));
                arr_6 [i_0] = ((/* implicit */unsigned char) min(((+(((11993808858018776187ULL) - (((/* implicit */unsigned long long int) -5302324426419697180LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1])))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */long long int) min((max((max((var_10), (var_10))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))))));
    var_20 = ((/* implicit */unsigned short) var_9);
}
