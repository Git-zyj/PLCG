/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131228
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [(_Bool)1] [i_2] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 1] [i_2] [i_2 - 1])), (arr_7 [i_1 + 1] [i_2 + 2] [i_0] [i_1 + 1]))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 460628231)), (var_4)))) : (min((var_6), (((/* implicit */unsigned long long int) var_0))))))));
                    var_12 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((-8776957073428094820LL) + (9223372036854775807LL))) << (((((-460628228) + (460628260))) - (32)))))) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) -2147483637)))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) 460628250)))) + (((/* implicit */unsigned int) ((var_2) - (2147483616))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483637)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)49)))) : ((-(var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)37)) < (((/* implicit */int) (unsigned char)92))))))));
    }
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 460628231)) && (((/* implicit */_Bool) (unsigned short)23839))));
    var_14 = (~(((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (-460628235)))) ? (((/* implicit */long long int) var_9)) : (((long long int) var_2)))));
    /* LoopSeq 1 */
    for (int i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((max(((-(arr_4 [i_3] [i_3]))), (((/* implicit */unsigned long long int) arr_2 [i_3] [i_3 - 1] [i_3])))) < (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)58)) ? (arr_6 [i_3] [i_3] [i_3 + 1] [i_3]) : (((/* implicit */int) (unsigned char)99))))) * (18446744073709551615ULL)))));
        var_16 = ((/* implicit */signed char) ((_Bool) ((int) (unsigned char)100)));
        arr_12 [i_3 + 1] [i_3] = (+(-8776957073428094820LL));
    }
    var_17 = var_6;
}
