/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169080
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0 + 2] [i_0 + 2]);
        var_18 = ((/* implicit */int) ((((_Bool) (signed char)43)) ? (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0 + 4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19908)))));
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)58060)) || (((((/* implicit */_Bool) (unsigned char)144)) || (((/* implicit */_Bool) (short)8101)))))) ? (min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_9 [i_1] [(signed char)10] [i_1])) : (-288969293))), (((0) + (var_4))))) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))));
                    arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
        arr_12 [1U] = ((/* implicit */unsigned short) (signed char)7);
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((var_9), (var_15))), (max((var_12), (((/* implicit */int) var_8))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (1386834862U) : (((/* implicit */unsigned int) 288969292))))) ? (((/* implicit */int) min(((unsigned char)32), ((unsigned char)255)))) : (var_4))))));
}
