/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170611
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
    var_16 = ((/* implicit */unsigned long long int) ((unsigned int) ((((var_2) - (((/* implicit */unsigned long long int) var_15)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_2])) + (((/* implicit */int) var_12))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_5 [i_0]))))) >= (min((var_11), (((/* implicit */unsigned long long int) arr_9 [i_1]))))))))));
                    arr_11 [i_0] [1ULL] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (unsigned short)9848)) : (((/* implicit */int) (short)-32663))))) && (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    arr_12 [i_0] [i_1] = arr_2 [i_0];
                    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((var_8), (min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [(unsigned short)7])))))))) * (min((((5436372056095306857LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9859))))), (((/* implicit */long long int) arr_1 [i_0]))))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) ((unsigned short) (unsigned short)9859))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (signed char)48)))))) + ((((_Bool)0) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_6))) || (((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_13))))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9868))))) ? (((5436372056095306874LL) / (((/* implicit */long long int) ((/* implicit */int) min((var_1), ((unsigned short)9848))))))) : (((/* implicit */long long int) ((var_15) / (((/* implicit */int) ((unsigned short) var_14))))))));
}
