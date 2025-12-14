/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155346
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_2]) + (arr_3 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (short)32760)) : (arr_3 [i_2])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-32765), (((/* implicit */short) var_13))))))));
                    var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) (((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))) != (((/* implicit */int) var_7))))) : ((-(arr_3 [i_1])))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)180)) ? (780803850U) : (1400452398U))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) + ((~(((/* implicit */int) arr_4 [i_0])))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) / (((/* implicit */int) arr_7 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0])) || (((/* implicit */_Bool) arr_7 [i_0]))))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0]))))));
        var_23 -= ((/* implicit */short) min(((-(((((/* implicit */_Bool) (unsigned short)60689)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))));
    }
    var_24 = ((/* implicit */unsigned short) var_13);
}
