/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156777
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9963128671309909985ULL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)0))))) ? (1473821164275295712LL) : (((/* implicit */long long int) arr_1 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [11U] [i_2])))))));
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_9))));
                    var_15 = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) var_8);
    var_17 = var_2;
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (var_11))))));
        var_20 = ((/* implicit */long long int) var_6);
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) var_12);
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_7))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1473821164275295712LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5)))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */int) var_9);
            arr_23 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 16320)) ? (((/* implicit */unsigned int) -1560920560)) : (2934247024U))) : (arr_4 [i_5] [11] [1U])));
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (var_10)))) ? (((/* implicit */unsigned long long int) var_11)) : (var_5))))));
    }
}
