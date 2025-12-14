/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174583
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
    var_16 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23536))) * (((unsigned int) 2998081473U)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 13093008643066855400ULL))));
                    arr_10 [i_2] [i_2] [i_2 - 1] [3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned short)10])) ? (var_8) : (arr_7 [i_2 + 1]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) (unsigned short)23536)) : (var_2))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((unsigned short) var_13));
        var_19 = (+((+(arr_7 [i_0]))));
        var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_15)) ? (10031498681190458003ULL) : (arr_7 [i_0]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0])))));
    }
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_8))));
}
