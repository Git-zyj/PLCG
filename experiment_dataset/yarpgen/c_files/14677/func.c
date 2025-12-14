/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14677
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
    var_14 = min((max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) var_10)))), (var_6));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) (signed char)-17))))) + (((((/* implicit */_Bool) (unsigned short)30720)) ? (14859569371351355589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122)))))))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) var_12)))))))));
    var_16 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
                    arr_7 [i_0] [i_1] [5LL] [i_0] = ((var_8) == (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_2)))))))));
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) * (-1)));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_3 [i_1 + 1] [i_1 + 2] [i_0]))));
                }
            } 
        } 
    } 
}
