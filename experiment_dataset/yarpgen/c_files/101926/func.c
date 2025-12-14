/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101926
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_3);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)125)) : (var_6)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 &= (((+(((((/* implicit */int) var_10)) + (((/* implicit */int) arr_4 [i_0] [2U] [i_0])))))) < (((/* implicit */int) ((-1683540462) < (((/* implicit */int) (_Bool)1))))));
                    var_19 += arr_7 [i_0] [6ULL] [6ULL] [(signed char)20];
                    arr_9 [i_1] [i_0] = ((1710883684U) / (1000325255U));
                    arr_10 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) var_4);
    }
    var_21 = ((/* implicit */signed char) ((var_16) - (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
}
