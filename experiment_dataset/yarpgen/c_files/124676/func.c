/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124676
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_15);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)24)))), (((/* implicit */int) var_4))));
        arr_5 [i_0] [i_0] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [16ULL] [i_0])) : (((/* implicit */int) (unsigned short)53218)))), (((/* implicit */int) ((short) arr_2 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_9 [i_1] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)62)), (min((max((((/* implicit */unsigned int) (_Bool)1)), (3785864167U))), (((/* implicit */unsigned int) arr_8 [i_1]))))));
        arr_10 [(unsigned char)15] = arr_7 [(_Bool)1];
        arr_11 [i_1] [5U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2759995213488243974LL)) & (36028797018955776ULL)));
        arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)53219))) ? (((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) var_6)))))) : (((arr_6 [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (1355115626U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_1])))))));
    }
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (+(var_10)))))));
    var_17 = ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) 509103128U))));
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((var_9) << (((((/* implicit */_Bool) arr_1 [i_2] [16U])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))));
        arr_16 [i_2] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((~(67076096U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (max((((unsigned long long int) arr_0 [i_2] [3ULL])), (((/* implicit */unsigned long long int) (short)-23923))))));
    }
    var_18 = ((/* implicit */unsigned int) var_10);
}
