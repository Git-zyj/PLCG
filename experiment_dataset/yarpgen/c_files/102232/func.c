/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102232
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
    var_15 &= ((/* implicit */unsigned long long int) ((var_2) | (-4050341335789719035LL)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] = arr_2 [i_2];
                    var_16 = ((/* implicit */long long int) max((min((arr_5 [i_2 + 1] [i_2 + 1]), (arr_6 [i_2]))), (((/* implicit */signed char) arr_1 [i_2 - 1]))));
                }
            } 
        } 
        var_17 = ((/* implicit */short) (+(((((/* implicit */int) arr_4 [i_0] [i_0])) & (((/* implicit */int) arr_4 [i_0] [i_0]))))));
        arr_8 [i_0] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) -4050341335789719039LL)) && (((/* implicit */_Bool) -4050341335789719028LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (min((((/* implicit */long long int) 3385388583U)), (4050341335789719046LL))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) >= (var_6)))), (max(((unsigned short)36993), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))));
        var_18 &= ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28542)) & (((/* implicit */int) (short)-23705))))) * (min((16652179554751851983ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))));
    }
    var_19 = ((/* implicit */unsigned short) max((var_4), (min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1015808LL)) > (var_6)))), (max((((/* implicit */long long int) var_13)), (var_10)))))));
}
