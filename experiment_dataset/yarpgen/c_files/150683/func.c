/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150683
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -72636265)) ? (4713467878598535073ULL) : (((/* implicit */unsigned long long int) -1073741824)))), (((/* implicit */unsigned long long int) ((long long int) var_7)))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_13 = ((((/* implicit */_Bool) min((((unsigned long long int) 2481014176011557997LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5329224820504187898ULL)) ? (1663749044) : (arr_0 [17ULL]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)22)))))) : ((+(14469850143946493884ULL))));
        arr_4 [i_0] = arr_1 [(unsigned char)9];
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)1815)), (-4583541462086322190LL)))) ? (((/* implicit */unsigned long long int) arr_7 [i_1])) : (((5329224820504187898ULL) * (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])))))), (((/* implicit */unsigned long long int) min(((-(arr_7 [i_1]))), (((/* implicit */long long int) -1663749023)))))));
        var_15 += ((/* implicit */long long int) var_12);
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            {
                var_16 += min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2481014176011558006LL))))), (((((/* implicit */_Bool) (signed char)65)) ? (1506107911U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((2481014176011558005LL), (((/* implicit */long long int) (unsigned char)173))))) ? (((((/* implicit */_Bool) (short)5184)) ? (arr_1 [i_2 - 2]) : (arr_5 [i_2 + 1] [i_3 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)144)))));
            }
        } 
    } 
}
