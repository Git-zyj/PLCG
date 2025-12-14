/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111259
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
    var_19 = var_18;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14611))) : ((~(max((((/* implicit */unsigned int) arr_2 [(_Bool)1])), (var_16)))))));
                    arr_9 [i_0] [(unsigned char)5] = ((/* implicit */unsigned int) var_3);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (short)14631)) : (((/* implicit */int) max((arr_1 [i_0] [i_1 - 2]), (arr_1 [i_0] [i_1]))))));
                    var_23 = ((/* implicit */signed char) (+(((unsigned long long int) var_3))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_3 - 1]))))), (max((((var_16) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))))), (((/* implicit */unsigned int) arr_11 [i_3 + 1])))))))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_10 [i_3 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((arr_12 [i_3 + 1]), (((/* implicit */long long int) ((unsigned int) var_11)))))));
    }
    var_26 = ((/* implicit */_Bool) var_5);
}
