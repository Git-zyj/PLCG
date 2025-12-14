/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105802
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
    var_19 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_13))))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (var_14)));
    var_21 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1 + 1]))))) | (min((((/* implicit */unsigned int) (unsigned short)51934)), (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])))))));
                var_23 |= ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32069))) + (((min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_0] [i_0] [i_0]))) >> (((((/* implicit */int) ((unsigned short) var_14))) - (246))))));
                var_24 *= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-6801780775271313466LL) >= (6801780775271313457LL))))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (arr_5 [i_0] [i_1] [i_1])))))), ((-((+(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
