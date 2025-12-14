/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163159
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
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_1 [i_0]))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_4))))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
            var_15 = ((/* implicit */short) arr_10 [i_1] [i_1]);
            arr_12 [(short)0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)6473)) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), ((-(arr_1 [i_1]))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_1] [i_1])))));
            var_16 = ((/* implicit */long long int) (!(((_Bool) arr_7 [i_1]))));
            var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) ((unsigned long long int) var_5)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (short)-6008))))) : (((((/* implicit */long long int) var_7)) / (arr_5 [4] [i_1])))))));
        }
        var_18 = ((/* implicit */unsigned char) arr_8 [i_1] [12U] [i_1]);
        var_19 = ((/* implicit */_Bool) (((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) - (2523300842216418528LL))))) / (((/* implicit */long long int) max((((/* implicit */int) var_3)), (((int) var_4)))))));
    }
    var_20 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    var_21 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_2)))) ? (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) (unsigned char)10))))) : (((/* implicit */int) var_3)))));
    var_22 = ((/* implicit */int) max((((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_7)))), (((/* implicit */signed char) ((_Bool) ((3014923629U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38128)))))))));
}
