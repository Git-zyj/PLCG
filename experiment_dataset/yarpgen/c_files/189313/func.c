/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189313
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
    var_17 = ((/* implicit */long long int) ((((unsigned long long int) (_Bool)1)) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) arr_2 [6ULL] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) << (((((/* implicit */int) arr_1 [i_0])) - (3430))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) ((((((_Bool) (unsigned short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (272730423296ULL))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 809383540)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (0ULL)))) ? (18446744073709551615ULL) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_6 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((unsigned int) (+(-809383541))));
        var_20 = ((/* implicit */short) var_3);
        var_21 = ((/* implicit */_Bool) (unsigned short)5109);
        var_22 = ((/* implicit */short) 574423458);
    }
    for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_3] [i_3]))));
            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_5 [i_2 + 1] [i_2 + 1]), (arr_5 [i_2 + 1] [i_2 + 1]))))));
        }
        var_25 -= ((/* implicit */unsigned long long int) ((((unsigned int) (_Bool)1)) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1))))));
    }
    var_26 = ((/* implicit */unsigned char) (signed char)-1);
}
