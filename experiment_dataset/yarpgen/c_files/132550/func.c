/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132550
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
    var_15 = ((/* implicit */short) var_10);
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))))) >= ((~(((/* implicit */int) (unsigned char)255)))))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104)))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (8167553907672327755ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) (signed char)59)) - (33))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_2 + 1]))) - (8167553907672327748ULL)))));
                    var_19 += ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_2 + 1]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_3);
}
