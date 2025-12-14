/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107600
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2])))) ? ((+(((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 2] [i_1 + 1])))) : (((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 2] [i_1 - 2])))))));
                    arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)480)) && (((/* implicit */_Bool) 2750686084U)))))));
                    arr_13 [i_0] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_2 [i_2] [i_0]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 12233459286350849654ULL)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_3))))));
    var_16 &= ((/* implicit */unsigned int) (~(((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (var_11))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (signed char)-105))))) : (((/* implicit */int) ((17952549683496677316ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))))))))));
}
