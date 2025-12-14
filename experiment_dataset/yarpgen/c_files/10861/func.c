/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10861
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
    var_14 = ((/* implicit */short) ((int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)75)) : (var_2)))));
    var_15 = ((/* implicit */short) (-((-(((var_2) - (((/* implicit */int) (signed char)75))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [4ULL] [(unsigned char)7])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) min((var_3), (var_3))))))) : (((/* implicit */int) var_3))));
        var_16 = ((/* implicit */unsigned char) (signed char)75);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) arr_5 [i_0 + 1] [(unsigned char)6]);
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_8 [i_0] [i_1]))));
                    var_19 = ((/* implicit */unsigned short) ((unsigned int) arr_8 [6] [(unsigned char)8]));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)51)) && (((/* implicit */_Bool) arr_4 [i_0 + 2] [(signed char)10] [i_0]))))) == (((((/* implicit */int) (unsigned char)51)) * (((/* implicit */int) var_0))))));
                }
            } 
        } 
        var_21 ^= ((/* implicit */signed char) (((~(4780538372233074604ULL))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [12] [(unsigned char)0] [i_0 - 1])))))));
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (-(var_9))))) ? (((/* implicit */long long int) ((unsigned int) min((var_2), (((/* implicit */int) var_0)))))) : (((long long int) (!(((/* implicit */_Bool) var_12)))))));
}
