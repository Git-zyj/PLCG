/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187005
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_0 [i_0 + 1])))) != (((((/* implicit */int) arr_9 [i_0])) * (((/* implicit */int) var_8))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (max((0ULL), (((/* implicit */unsigned long long int) -8917271069623657890LL)))))))) | (((unsigned long long int) (+(((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (max((var_1), (((/* implicit */unsigned long long int) arr_10 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_12))))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) && (((var_8) && (((/* implicit */_Bool) arr_12 [i_3]))))))) != (((/* implicit */int) var_4))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_14 [i_4] [(unsigned short)17]))));
        arr_16 [i_4] = ((((((/* implicit */_Bool) min((arr_14 [0U] [4]), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) -84796978)) : (var_1))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)0))))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_5);
}
