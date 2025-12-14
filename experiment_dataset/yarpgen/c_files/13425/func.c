/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13425
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) arr_1 [i_0]))))), (((min((13757848576731427183ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))) - (max((arr_5 [i_0] [i_1] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 + 1] [i_2] [(signed char)3]))))))));
                    arr_9 [i_0] [1LL] [(signed char)8] = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (arr_6 [i_0] [(short)4] [9LL] [1LL]))))) & (((/* implicit */int) (_Bool)1))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [i_2]))) >> (((min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((short) (short)8673))))) - (8666))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_10))));
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-30608))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_19 = ((/* implicit */signed char) var_0);
}
