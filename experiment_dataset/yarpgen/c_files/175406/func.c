/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175406
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)84);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8564951815081028486LL)) ? ((~(-1251759058374925649LL))) : (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)65529)))))))));
                        var_19 = ((/* implicit */signed char) arr_5 [i_0] [i_2]);
                        arr_17 [i_0] [i_1] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 255)) ? (arr_7 [i_3 + 1] [i_3]) : (arr_6 [i_0]))));
                    }
                } 
            } 
            var_20 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) arr_14 [i_0] [i_1 + 1] [i_1 + 1])), (arr_7 [i_0] [i_1 + 1])))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_20 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-1))));
            var_21 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            var_22 -= ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) >= (((int) -390149210))));
            arr_21 [i_0] [i_4] = ((/* implicit */unsigned int) arr_10 [i_0] [i_4] [i_0]);
        }
    }
    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 1) 
    {
        var_23 -= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)59351))));
        arr_24 [i_5] = arr_7 [i_5] [i_5];
        arr_25 [i_5] [i_5] = ((((/* implicit */_Bool) (-(arr_12 [i_5 - 3] [(short)10] [i_5 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5 - 1] [(signed char)4] [(signed char)4])) ? (var_8) : (((/* implicit */unsigned int) arr_12 [i_5 - 1] [(short)6] [i_5]))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 251)), (var_4)))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 0U)))))));
    }
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_17))));
    var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) var_10))))), ((-9223372036854775807LL - 1LL))));
}
