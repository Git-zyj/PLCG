/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165568
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
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 -= ((/* implicit */short) (((~(max((((/* implicit */long long int) 1952618751)), (var_14))))) / (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (short)-1749)))), (((((/* implicit */int) (short)1749)) * (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) ((((var_3) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_16)))))))) : (((unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_10))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0])))));
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_2 [i_1 - 1] [i_1]) ? (((/* implicit */int) (short)-1727)) : (((/* implicit */int) arr_2 [i_1 + 2] [(unsigned short)13])))))));
                var_22 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 1])))) * (((/* implicit */int) min((((_Bool) arr_4 [i_0] [i_0] [i_1])), ((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])))))))));
            }
        } 
    } 
}
