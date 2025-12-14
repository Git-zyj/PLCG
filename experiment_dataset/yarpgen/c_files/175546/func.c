/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175546
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
    var_17 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_8))))) & (max((((/* implicit */unsigned int) (unsigned short)32704)), (59178554U)))))) - (max((((/* implicit */long long int) ((var_15) ? (3091179012U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (((((/* implicit */long long int) 3091179012U)) & (var_13)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1203788278U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned short)13922)) : (((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)255))))) * (((arr_3 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                var_19 &= ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) && (var_8))) || (((/* implicit */_Bool) (signed char)120))))), (3091179018U)));
                var_20 = ((signed char) max(((short)-14990), (((/* implicit */short) (_Bool)1))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((unsigned long long int) ((5629857395770293737LL) | (((/* implicit */long long int) ((/* implicit */int) (short)126))))));
    var_22 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_14)), (var_7)))) ? (((/* implicit */int) min(((short)-13137), (((/* implicit */short) var_14))))) : (((((/* implicit */int) var_15)) >> (((var_9) - (13758072484651188200ULL))))))));
}
