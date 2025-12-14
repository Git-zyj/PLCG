/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147563
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
    var_16 |= ((/* implicit */short) 262143U);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) max((-15LL), (((long long int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0] [i_0 - 1])))), (var_7)));
        var_19 = ((/* implicit */unsigned long long int) var_2);
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) arr_5 [i_1] [i_1] [i_1]);
                    var_21 = ((/* implicit */unsigned short) (+(min((arr_4 [i_3 + 1] [i_3] [i_3]), (((/* implicit */unsigned int) var_13))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((((/* implicit */int) var_14)), (var_9)));
    var_23 = ((/* implicit */unsigned int) min((var_23), ((((!(((/* implicit */_Bool) 262143U)))) ? (((/* implicit */unsigned int) (~((+(-1089162555)))))) : ((-(((4054605900U) & (var_5)))))))));
}
