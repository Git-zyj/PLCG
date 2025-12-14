/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170148
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
    var_13 = ((/* implicit */unsigned long long int) var_5);
    var_14 = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (var_6) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)50))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
    var_15 = ((/* implicit */unsigned char) max((((unsigned long long int) (+(3897571163657098027ULL)))), (var_8)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_1)), (846921250U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)55)))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)212))))) ? (4150219329U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!((_Bool)0)))), ((unsigned char)55)));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)8])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
    }
}
