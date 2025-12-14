/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112572
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
        var_11 = ((/* implicit */short) -8394056118637382211LL);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (unsigned short)28775))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (short)(-32767 - 1)))))), (8191U)))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_13 |= ((((((int) (short)32761)) ^ (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((unsigned short) var_5))));
                        arr_15 [i_2] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) -6771504983468971742LL);
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((585511177U) << (((1125898833100800LL) - (1125898833100790LL)))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)2))));
            arr_16 [i_1] [i_0] = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) max((arr_11 [i_1]), (((/* implicit */unsigned short) var_5))))))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_7))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 + 1]))))))))));
        }
    }
    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)13)), (18446744073709551615ULL)))) ? ((-(3670535761679022810ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1131552603977075141LL)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) & (((/* implicit */int) var_9)))) + (((/* implicit */int) (_Bool)1)))))));
    var_17 = ((/* implicit */unsigned short) var_7);
    var_18 = ((/* implicit */signed char) var_7);
}
