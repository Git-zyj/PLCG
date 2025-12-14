/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112311
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(-1689169676)))) ? (min((((/* implicit */int) arr_0 [i_1])), (-9))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0])))))), (min((arr_2 [i_0]), (((/* implicit */int) ((-9) >= (((/* implicit */int) arr_0 [i_0 - 1])))))))));
                var_12 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [16ULL] [i_0 - 3]))))) ? (((/* implicit */unsigned long long int) ((10) ^ (((((/* implicit */int) (unsigned char)242)) & (1689169675)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) : ((~(arr_4 [i_0] [(short)8] [i_0])))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned short) min((((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_10)))) ? (((/* implicit */unsigned long long int) -16)) : (max((2000623888498091515ULL), (((/* implicit */unsigned long long int) -1689169676)))))), (((/* implicit */unsigned long long int) var_8))));
}
