/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107678
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
    var_17 = ((/* implicit */unsigned char) -8625003514449027162LL);
    var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)3717)) : (((/* implicit */int) var_5)))))), (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_11)))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || ((_Bool)0)))), (((unsigned long long int) arr_1 [i_1 - 2] [i_0])))))));
            var_19 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)32))))));
        }
        for (signed char i_2 = 2; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_20 = arr_8 [i_0] [i_0] [i_0];
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_10))) || (((/* implicit */_Bool) (-(((/* implicit */int) max((var_7), (((/* implicit */short) (signed char)17))))))))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */int) arr_8 [i_2] [i_0] [i_0])) & (-2062089160))) : (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */int) var_0)) : (max((((/* implicit */int) arr_7 [i_2 - 1])), (var_4))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (~(arr_6 [i_2 - 2] [i_2 + 1] [i_2 + 1]))))));
                var_24 = ((/* implicit */short) (((_Bool)0) || (((/* implicit */_Bool) 6312844556331988647LL))));
                arr_13 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) - (arr_0 [i_2 + 1] [i_3]))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171)))));
                var_25 = ((/* implicit */unsigned long long int) ((long long int) 1332616870));
                var_26 = (-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)-26052))))));
            }
            var_27 &= arr_11 [i_2];
        }
        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) /* same iter space */
        {
            arr_16 [i_4] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)6)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0])))))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_4) << (((262143) - (262141)))))))) : (((((/* implicit */_Bool) var_7)) ? ((~(532676608U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))))));
        }
    }
}
