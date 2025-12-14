/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141828
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)172)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)148)), (var_10)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3580494500U))) : (var_14))) : (min((((/* implicit */unsigned int) (unsigned char)81)), (4294967295U)))));
            var_19 = max(((~(arr_1 [i_1 + 2]))), (((arr_1 [i_1 + 1]) ^ (((/* implicit */int) (unsigned char)83)))));
            var_20 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) > ((~(((long long int) arr_1 [i_0]))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (min((((/* implicit */unsigned long long int) (unsigned char)114)), (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-1))))));
        }
        var_22 = (+(((((/* implicit */_Bool) (signed char)4)) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) & (((unsigned long long int) arr_5 [i_2] [i_2])))));
        var_24 = ((/* implicit */unsigned int) (unsigned short)6);
        var_25 = 9280148741928507367ULL;
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2]))) + (3580494488U)))) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned int) ((int) arr_5 [i_2] [i_2]))));
    }
    var_27 = var_4;
}
