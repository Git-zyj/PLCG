/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155137
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) (signed char)21))) ? (((unsigned long long int) 4294967295U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)56)))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    arr_7 [i_2] |= (+(((unsigned int) (unsigned char)255)));
                    arr_8 [i_2] [i_1 - 1] = ((/* implicit */unsigned char) ((long long int) ((unsigned char) 536870911U)));
                }
                arr_9 [13U] [(short)2] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)170));
                arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 16599531431070453678ULL)) ? (4548345408697314897LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))));
                arr_11 [(signed char)0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((short) -7970729134874320843LL))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (long long int i_4 = 3; i_4 < 20; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_20 [i_3] [i_4] [i_5] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (4240859707U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9309)))))) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) ((unsigned short) (unsigned char)11))))));
                    arr_21 [16LL] [0ULL] [i_5] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (17858992791470932011ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)60))))) : (((unsigned long long int) 536870897U)))));
                    arr_22 [12U] [i_4] [i_4] [i_3] = ((/* implicit */short) ((long long int) (+(((unsigned long long int) (short)-26566)))));
                }
            } 
        } 
    } 
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 268435455LL))) ? (((/* implicit */int) (unsigned short)59266)) : (((/* implicit */int) ((short) (_Bool)1)))))) ? ((+((+(4780059262182832594ULL))))) : (((((/* implicit */_Bool) (-(-268435455LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((unsigned long long int) 17858992791470932011ULL)))));
}
