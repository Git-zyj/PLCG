/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127160
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
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) (+((-(arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_6);
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_1 + 1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_2 [i_0])))))))) && (((/* implicit */_Bool) arr_0 [i_1 - 2] [i_0]))));
            var_18 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 18444492273895866368ULL))));
            var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_12)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) : (arr_1 [i_1 + 2])))));
            arr_5 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) 4253824107U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (4253824096U))))))));
        }
    }
    var_20 = max((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) var_14)))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_10))))))), (((/* implicit */int) ((var_10) || (((/* implicit */_Bool) ((3758096384U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7173))))))))));
}
