/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123490
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) + (((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))));
        arr_3 [(unsigned short)9] = ((/* implicit */short) arr_2 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) (unsigned char)203);
        var_15 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1])))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2857289805U)))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_17 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (var_10) : (((var_10) >> (((1437677519U) - (1437677518U)))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-10427))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1])) - (((/* implicit */int) arr_7 [i_2] [i_2 + 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    arr_15 [i_2 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4]))))))));
                    arr_16 [i_2] [i_3] [i_3 + 1] [i_3] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_1))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) (+((~(((((/* implicit */int) (unsigned short)21021)) + (((/* implicit */int) var_12))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) & ((((!(((/* implicit */_Bool) (signed char)47)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), ((short)-10443))))) : (((var_9) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44515))) : (4294967281U))))))));
}
