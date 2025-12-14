/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18088
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */signed char) (_Bool)1)), (var_7)))))) : (((1366223353U) << (((6513351144945431465ULL) - (6513351144945431443ULL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min(((((!(((/* implicit */_Bool) 11933392928764120150ULL)))) ? (arr_3 [i_1] [i_0 + 3]) : (3005192977U))), (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_8))), (((/* implicit */unsigned int) ((signed char) var_13)))))));
                var_19 = ((/* implicit */unsigned char) ((int) ((((int) arr_1 [i_0])) < (((/* implicit */int) arr_4 [i_0 + 2])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (((-(min((((/* implicit */unsigned long long int) (signed char)0)), (var_12))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    var_21 = var_3;
}
