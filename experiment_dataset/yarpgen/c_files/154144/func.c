/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154144
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (short)1))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)51770)) : (((/* implicit */int) (unsigned short)51762))))) ? (((/* implicit */int) (unsigned short)13761)) : (((/* implicit */int) var_7))))));
        var_18 &= ((/* implicit */short) (+(max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    var_19 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= ((~(var_16))))))));
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)13774)) ? (((/* implicit */int) (short)-5197)) : (0)))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (int i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [11LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_1])))), (var_4)))) ? ((((-(var_1))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_1] [i_2]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) (unsigned char)4))))) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_8 [i_1] [i_2])))) : ((+(((/* implicit */int) (short)32767)))))))));
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_2 - 3] [i_2 - 3])) ? (arr_6 [i_2 - 2] [i_2 - 1]) : (1095925846))) | (min((arr_6 [i_2 + 1] [i_2 - 2]), (2147483622)))));
            }
        } 
    } 
}
