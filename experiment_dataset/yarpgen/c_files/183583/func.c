/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183583
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_14))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)255)))))) && (((/* implicit */_Bool) ((((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)163))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)1)), (((8388607U) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11))))))));
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) : (1LL)))) ? (((/* implicit */int) min((var_5), (var_15)))) : (((/* implicit */int) var_4)))) * (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)198)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) & (1577259007506561161LL)))))))));
                    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((var_5) ? (-1598838695) : (((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) * (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_1]))) : (-2LL))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_1 + 3] [i_2] [i_2 - 1]))))) ? ((+(arr_7 [i_1 + 3] [5] [i_2 - 1] [(_Bool)0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_1 - 3] [i_2] [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_3) : (var_3)));
}
