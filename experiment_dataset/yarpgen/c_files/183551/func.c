/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183551
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [13ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))))))) : ((+(var_11)))))));
                var_17 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) % (3647442272564067069ULL))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 6986587629202335611LL)) ? (arr_1 [i_0 + 2] [i_0 - 1]) : (arr_1 [i_0 + 2] [i_0 - 1]))))))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) != (((/* implicit */int) var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)105))))) : (((var_5) << (((((/* implicit */int) var_7)) - (5239)))))))) ? (((unsigned int) (!(((/* implicit */_Bool) 0ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
    var_20 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((4064638027U) % (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (var_2))))))));
}
