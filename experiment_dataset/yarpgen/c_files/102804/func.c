/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102804
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
    var_17 = var_8;
    var_18 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 7340556515822301081ULL)) ? (2383756241243170574ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14413)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))))) ? (((long long int) arr_1 [i_0 - 1])) : (((/* implicit */long long int) (-((+(582244637U))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            arr_5 [i_1] [i_0 + 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-102)) / (((/* implicit */int) (short)14158))))) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
            var_20 ^= ((/* implicit */short) var_15);
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-4889)) ? (582244636U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1639614322)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)128)))))));
            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) arr_2 [i_0 - 2]))))) ? (((/* implicit */int) (short)-14158)) : (((((/* implicit */_Bool) (short)14158)) ? (((/* implicit */int) ((signed char) (short)-29776))) : (((/* implicit */int) arr_0 [i_0] [i_1 + 2]))))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_8 [i_2])))) ? (((var_11) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))))));
        arr_9 [i_2] = ((7407322146434602031ULL) ^ (18446744073709551615ULL));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), ((~(14427484803469048807ULL))))) > ((-(arr_7 [i_2])))));
        var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) arr_6 [i_2]))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)1008)) && (((/* implicit */_Bool) 3619299503888064227ULL)))))))));
        arr_11 [(unsigned short)15] = ((/* implicit */_Bool) ((((/* implicit */int) (short)4888)) / ((+(((/* implicit */int) (_Bool)1))))));
    }
}
