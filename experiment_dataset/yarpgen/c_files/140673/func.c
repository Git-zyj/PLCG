/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140673
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
    var_12 += ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((2436678028U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) | (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -5190019752987389818LL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
    var_13 = ((/* implicit */short) ((unsigned int) (unsigned short)8373));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 - 3] [i_1] |= ((/* implicit */_Bool) min((13261948219190583067ULL), (((/* implicit */unsigned long long int) 1157740204U))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (unsigned short)255)))));
                var_14 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_3 [i_0] [i_1 - 2])))));
                arr_7 [i_0] [16U] [i_1 - 2] &= ((/* implicit */short) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (12974541580304067265ULL)))) ? (((arr_2 [i_1 - 4]) / (arr_2 [i_1 + 2]))) : ((-(arr_2 [i_0])))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (-(var_3)))) || ((((_Bool)1) || (((/* implicit */_Bool) var_1)))))));
}
