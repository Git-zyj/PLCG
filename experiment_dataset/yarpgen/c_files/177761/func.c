/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177761
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_12)))) ? (max((var_7), (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_0)) ? (765024659) : (var_7)))))) ? (((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) ((var_7) <= (((/* implicit */int) var_10)))))))));
    var_16 = max(((_Bool)1), ((_Bool)1));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_1)))) & (((/* implicit */int) (_Bool)1))))) ? (var_12) : (((/* implicit */long long int) (~(((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (short)-26402))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 1]))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0]) : (((/* implicit */int) arr_6 [i_1] [(short)10] [(unsigned char)9] [(short)8]))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */signed char) var_7);
}
