/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178741
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
    var_20 = ((/* implicit */int) max((var_20), (var_13)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((((/* implicit */_Bool) 11961422802962654414ULL)) ? (((((((/* implicit */int) arr_0 [i_1] [i_0])) + (2147483647))) >> (((var_13) + (1038933147))))) : (((/* implicit */int) arr_1 [i_0] [i_0])));
            var_23 = ((/* implicit */signed char) var_9);
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1] [i_0]))));
        }
        for (int i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((unsigned long long int) 2199019061248ULL));
            var_25 = ((/* implicit */signed char) ((arr_6 [i_2] [i_2 + 1]) | (var_18)));
            arr_8 [i_0] = ((arr_1 [i_0] [i_2 + 1]) ? (arr_6 [i_0] [i_2 + 1]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) > (6485321270746897214ULL)))));
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_26 = ((var_3) * (((/* implicit */int) arr_7 [i_3 + 1])));
            var_27 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_3 + 1])) : (2122567313));
        }
        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_28 ^= ((/* implicit */signed char) arr_2 [i_0]);
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_4])) || (((/* implicit */_Bool) 18446744073709551615ULL)))))));
        }
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_30 = var_14;
        var_31 = ((((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) & ((-(((/* implicit */int) (_Bool)1)))));
        var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5])), ((-(6485321270746897184ULL)))));
        arr_17 [i_5] = ((/* implicit */int) arr_15 [i_5]);
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)15190)) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_0 [i_5] [(signed char)10])))))) ? (((int) arr_2 [i_5 - 1])) : (((/* implicit */int) (unsigned short)55123))));
    }
}
