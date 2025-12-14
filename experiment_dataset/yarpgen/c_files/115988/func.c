/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115988
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
    var_17 = ((/* implicit */short) ((((var_11) != (((/* implicit */long long int) var_5)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)56739)), (var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1])))) > (max((((/* implicit */long long int) var_1)), (max((arr_0 [i_0]), (((/* implicit */long long int) (signed char)104))))))));
                var_19 = ((/* implicit */_Bool) ((((((var_5) > (((/* implicit */int) var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61615)) ? (((/* implicit */int) (unsigned short)52735)) : (((/* implicit */int) (short)13748))))))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((((/* implicit */_Bool) ((short) 18446744073709551615ULL))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (signed char)15))))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) >= (((((/* implicit */int) var_1)) >> (((((/* implicit */int) (signed char)83)) - (80)))))));
    var_21 = ((/* implicit */long long int) ((signed char) 2918700874240015027LL));
}
