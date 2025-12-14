/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156572
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
    var_14 = ((/* implicit */short) var_4);
    var_15 = ((/* implicit */short) min((var_15), (var_2)));
    var_16 = ((/* implicit */short) var_0);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? ((-(((((/* implicit */_Bool) 7234564080064539327ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (short)32767))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_0 + 2]) ? (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_1]))))) ? (((((/* implicit */_Bool) (short)-19075)) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_2 + 1])) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0] [i_1])))))) : (max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) ((_Bool) arr_1 [i_3])))))));
                        arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_2 [i_2]))))))) : ((+(arr_6 [i_1] [i_1])))));
                    }
                    var_19 = (+(((/* implicit */int) arr_1 [i_0])));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 2])) * (((/* implicit */int) arr_2 [i_0 + 2]))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2579004671U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)12)) / (-2147483619))))));
                    var_21 = ((/* implicit */unsigned char) arr_1 [i_0]);
                }
            } 
        } 
    } 
}
