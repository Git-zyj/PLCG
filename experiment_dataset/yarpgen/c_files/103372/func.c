/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103372
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) || (((((/* implicit */int) (unsigned char)124)) > (1365822914)))))) < (((/* implicit */int) var_9))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1])))) ? (((var_14) / (-1365822905))) : (((/* implicit */int) arr_4 [i_1 + 1]))))), (min((((/* implicit */long long int) arr_4 [i_1 - 1])), (((long long int) arr_4 [i_0])))))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */signed char) ((-1208774518) | (((/* implicit */int) (signed char)-66))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_7))))) || (((/* implicit */_Bool) var_3))));
}
