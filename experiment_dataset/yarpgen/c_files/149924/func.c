/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149924
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)10847)))) ? (-1652477797) : (((/* implicit */int) (unsigned short)40935))));
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10849)) ? (((/* implicit */int) (signed char)78)) : (-1652477781)));
            }
        } 
    } 
    var_12 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (short)12288))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (var_2))))))));
    var_13 -= ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) 1652477807)))));
    /* LoopSeq 2 */
    for (signed char i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        arr_11 [i_2 - 2] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((((/* implicit */int) arr_2 [4ULL])) / (((/* implicit */int) arr_3 [i_2] [12U])))))));
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_2])) >> (((-1288539417950316675LL) + (1288539417950316690LL)))))) ? (((1652477807) >> (((arr_5 [i_2 + 4] [i_2 + 4]) + (998524829))))) : (((/* implicit */int) arr_0 [i_2 + 4] [i_2 - 2]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (arr_1 [8U])))) ? (((((/* implicit */_Bool) var_9)) ? (2679850924U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)54884))))))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((short) ((int) arr_10 [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [(unsigned short)20])))))))));
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_15 ^= min((((/* implicit */int) (!(((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_3 [i_3] [i_3])))))))), (min((((/* implicit */int) ((signed char) (unsigned short)65535))), (((int) (unsigned char)2)))));
        arr_15 [i_3] [i_3] = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3] [i_3] [i_3])) - (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (short)-11132))))))) : (((((/* implicit */_Bool) (short)-9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
    }
    var_16 = ((/* implicit */signed char) var_5);
}
