/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144731
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_4 [i_1] [i_0] [i_0])))) && (((/* implicit */_Bool) max(((+(10036908777214631062ULL))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))))))));
                var_15 -= ((/* implicit */unsigned long long int) (unsigned char)0);
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5987675087740015076LL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) : (arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_6);
    var_18 = ((/* implicit */unsigned short) (+(2682011281358213962LL)));
}
