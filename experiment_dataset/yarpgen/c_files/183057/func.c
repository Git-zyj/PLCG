/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183057
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_11 [i_2] [i_2 - 3] [i_1 - 1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_8);
                        var_13 = ((/* implicit */unsigned int) arr_3 [i_1 - 1]);
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */int) ((short) (_Bool)0))) - (((/* implicit */int) ((unsigned short) 2663669932U))))) > (arr_9 [i_0] [i_0] [i_3]))))));
                    }
                } 
            } 
        } 
        var_15 = ((long long int) (~(((((/* implicit */_Bool) var_0)) ? (var_4) : (var_4)))));
    }
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 4294967292U)) ? (1631297364U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_12))))))), (((/* implicit */unsigned int) var_10)))))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((unsigned int) ((((/* implicit */_Bool) ((unsigned short) 2817130273U))) ? (var_10) : (((/* implicit */int) var_12)))))));
}
