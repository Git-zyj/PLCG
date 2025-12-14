/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123260
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_5)), (((var_16) & (max((16977113621148518351ULL), (((/* implicit */unsigned long long int) (short)25028))))))));
    var_19 = ((/* implicit */unsigned char) var_7);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25027)) && (((/* implicit */_Bool) var_11))))), (min((var_16), (((/* implicit */unsigned long long int) var_2))))))) || (((((/* implicit */_Bool) var_16)) || (((((/* implicit */_Bool) (unsigned char)79)) || (((/* implicit */_Bool) var_8))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_21 &= ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_3 [i_0] [i_1])), (arr_2 [i_0]))) / (max((arr_2 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))));
                arr_4 [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) ((((/* implicit */long long int) ((var_5) & (arr_1 [i_0] [i_1])))) < (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_2 [i_1]))))))));
            }
        } 
    } 
}
