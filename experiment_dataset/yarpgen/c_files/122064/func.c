/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122064
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
    var_19 = ((/* implicit */unsigned short) var_5);
    var_20 = var_6;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) - (var_10)))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_12)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_7 [9ULL] = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) arr_5 [i_1] [i_1])))) <= (((var_3) ? (((/* implicit */int) var_3)) : (var_6)))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) var_17);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                    var_22 = ((/* implicit */int) arr_11 [i_2]);
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [(signed char)22] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)))) : (((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((var_11) - (2491899438163091661ULL)))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_16)))) + (2147483647))) >> ((((~(var_15))) + (1522849580)))))) ? (((/* implicit */unsigned long long int) ((((var_14) ? (var_15) : (((/* implicit */int) var_16)))) << (((((((/* implicit */_Bool) var_7)) ? (var_11) : (var_10))) - (2491899438163091656ULL)))))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) min((var_15), (var_6))))))));
}
