/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110241
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
    var_18 ^= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_0)))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) max((var_7), (-151579870447271378LL)))))) << ((((-(var_7))) - (2807217343022025532LL)))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_3))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) -151579870447271378LL);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)51396), (((/* implicit */unsigned short) (signed char)122))))) != (((/* implicit */int) ((short) var_2)))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) : (arr_3 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) max((var_16), (((/* implicit */unsigned short) var_17))))) > (((/* implicit */int) max((var_5), (var_6))))))) : (((/* implicit */int) var_0))));
        }
    }
    var_22 = ((/* implicit */unsigned short) var_7);
    var_23 = ((/* implicit */short) var_15);
}
