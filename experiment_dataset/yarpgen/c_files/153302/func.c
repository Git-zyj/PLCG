/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153302
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */int) min((2293299125U), (((/* implicit */unsigned int) (_Bool)1))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 251658240U))));
                    var_21 = (-(((/* implicit */int) arr_5 [i_2] [i_1] [i_0])));
                }
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_22 = (-(251658240U));
                    var_23 ^= ((/* implicit */unsigned char) 4043309055U);
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46821)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28374)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))) : ((~(10648112558831480521ULL)))));
                }
                arr_10 [i_0] [4ULL] = ((/* implicit */unsigned short) arr_4 [i_0] [(_Bool)1]);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1723821938)) ? (((/* implicit */int) (short)12066)) : (((((/* implicit */_Bool) 18700030U)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (unsigned char)255))))))) && (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_14)) >= (1955008433709362076ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)18715), (var_15))))) : (((15082561893520626341ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18714)))))))))))));
    var_26 = ((/* implicit */unsigned short) var_9);
    var_27 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_1)))));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) (short)28345)) ? (var_14) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_0))));
}
