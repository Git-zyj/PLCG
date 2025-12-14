/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16123
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
    var_15 |= ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) ((arr_0 [i_0 - 1]) << (((((/* implicit */int) var_2)) - (60)))));
        var_16 = ((/* implicit */_Bool) max(((+(((arr_0 [i_0 + 1]) & (arr_0 [i_0 - 1]))))), (((/* implicit */int) var_10))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_0 - 1] = ((/* implicit */_Bool) var_13);
                        var_17 = max((2943994219U), (((/* implicit */unsigned int) (short)3396)));
                        var_18 = (-(((((/* implicit */_Bool) (short)-15096)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)13366)))));
                        arr_14 [i_3] [i_2] [i_2 - 1] [i_2] [i_0 - 1] = ((/* implicit */long long int) max((max((arr_0 [i_0 + 1]), (((/* implicit */int) var_0)))), (((((/* implicit */int) var_2)) << (((((/* implicit */int) var_13)) + (67)))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) / (((/* implicit */int) var_13))))) ? (((-2111504042) + (arr_0 [i_0 + 1]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0 - 1])))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_20 -= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_7)), (arr_15 [i_4]))) | (arr_15 [i_4])));
        var_21 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_6)))))), (((/* implicit */int) (short)16311))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 21; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) var_13);
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)10187)) && (((/* implicit */_Bool) ((signed char) arr_20 [i_4] [i_5]))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        arr_23 [i_4] = arr_22 [i_4] [i_4] [i_4];
    }
    for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        var_25 *= ((/* implicit */signed char) var_9);
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((/* implicit */int) ((short) 4089808506U))), ((+(((/* implicit */int) var_13)))))))));
    }
}
