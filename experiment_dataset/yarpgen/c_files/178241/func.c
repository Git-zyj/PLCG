/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178241
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
    var_17 |= ((/* implicit */short) var_0);
    var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_9)) * (((/* implicit */int) var_12))))));
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)3665)), ((+(var_14)))));
    var_20 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) var_13)) - (23228)))));
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_6 [13ULL] [i_1 + 1] [i_0]))))), ((-(var_11)))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max((((/* implicit */int) max((arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 2])))), (((arr_3 [i_1 - 1] [i_1 - 2] [i_1 + 1]) ? (((/* implicit */int) (short)3665)) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 2])))))))));
                }
            } 
        } 
    } 
}
