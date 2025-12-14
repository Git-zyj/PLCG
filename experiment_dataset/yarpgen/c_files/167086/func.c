/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167086
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (0U) : (min((201326592U), (((/* implicit */unsigned int) -1418661419))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~(((1418661415) | (((/* implicit */int) (_Bool)1)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) 4294967295U);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (signed char)-121);
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) (!(var_13))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((var_10) <= (((/* implicit */int) (_Bool)1)))))));
        var_18 = ((/* implicit */unsigned char) var_7);
        var_19 = ((/* implicit */unsigned short) var_7);
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            arr_15 [i_3] [i_3] [i_3] = ((/* implicit */int) -6271626224820996809LL);
            var_20 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
        }
        arr_16 [i_3] = ((((/* implicit */_Bool) (unsigned char)112)) ? (max((((/* implicit */unsigned long long int) (_Bool)0)), (3590669162570545690ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (signed char)(-127 - 1))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)127)))) | (((/* implicit */int) (_Bool)1)))), (((var_5) ? (arr_11 [i_3]) : (var_7)))));
        arr_18 [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */int) (!((_Bool)1)))) % ((-(((/* implicit */int) var_3)))))), (((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (17179869120ULL))), (((((/* implicit */int) var_13)) <= (((/* implicit */int) var_5)))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((((/* implicit */long long int) ((var_7) | (var_7)))) | (min((2938468188415339376LL), (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))))))))));
        var_22 *= ((/* implicit */unsigned long long int) var_6);
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((2185624467U), (((/* implicit */unsigned int) (_Bool)1))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (var_8) : (var_0))))) : (((/* implicit */unsigned long long int) var_1))));
}
