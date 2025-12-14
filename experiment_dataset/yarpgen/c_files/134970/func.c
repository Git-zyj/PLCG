/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134970
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (18364720977177634544ULL) : (max((((/* implicit */unsigned long long int) var_6)), (18364720977177634561ULL))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((var_13), ((!((!(((/* implicit */_Bool) 18446181123756130304ULL))))))));
                    var_14 = (unsigned char)152;
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_2]);
                    var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)-48)))), (((((/* implicit */_Bool) 18446181123756130286ULL)) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (_Bool)0))))));
    }
    var_16 = ((/* implicit */unsigned short) (~(max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_10))))));
    var_17 = ((/* implicit */unsigned long long int) var_10);
    var_18 = ((/* implicit */_Bool) var_8);
}
