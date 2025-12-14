/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150156
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) var_12);
                    var_18 = var_14;
                    arr_9 [i_1] [i_1] = ((/* implicit */long long int) min((((arr_6 [i_1 - 2] [i_2] [i_2 - 1] [i_2 - 1]) >> (((((/* implicit */int) var_3)) - (61))))), (((((/* implicit */unsigned int) var_14)) + (arr_6 [i_1 - 3] [i_2 - 1] [i_2 + 1] [i_2])))));
                    arr_10 [i_0] [i_1 + 3] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 7949005832326391058ULL)) ? (5129450315199428669ULL) : (7914078891064403167ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_8)), (var_1))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_10);
}
