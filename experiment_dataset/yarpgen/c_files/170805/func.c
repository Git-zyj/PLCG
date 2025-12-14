/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170805
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
    var_11 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_2)) / (((/* implicit */int) ((_Bool) var_5)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) max((0ULL), (((/* implicit */unsigned long long int) -5285102807450630648LL)))))) - (((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_7))) & (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0 - 2] [(_Bool)1])))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (4182207417474475951LL) : (((/* implicit */long long int) 1296359336U))))) ? ((+(((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1])))) : ((-(((/* implicit */int) ((short) -464954089048595313LL)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) max((((491520) / (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)41213)) : (((/* implicit */int) var_8))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))) & (((((/* implicit */_Bool) (unsigned char)0)) ? (11360888225879243373ULL) : (((/* implicit */unsigned long long int) 0U))))))));
}
