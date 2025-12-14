/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172849
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) max((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) * (arr_6 [i_1] [i_1] [i_1]))) - (((/* implicit */unsigned int) ((int) (unsigned char)11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-548520168) / (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)20))))))))));
                    arr_7 [i_0] [i_1 - 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 20U))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_8))))) : (((arr_5 [i_1 + 1] [i_1 + 2] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    var_19 = ((/* implicit */int) (~(((((_Bool) arr_5 [i_0] [i_0] [2LL])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_13)) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((unsigned int) var_0));
    var_21 = ((/* implicit */_Bool) var_13);
}
