/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136251
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
    var_18 |= ((/* implicit */short) var_11);
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3870842799U))), (var_2))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (max((((/* implicit */long long int) (-(var_12)))), (((((/* implicit */long long int) (+(-1781970181)))) / (var_8)))))));
        var_21 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) 3870842799U)), (arr_1 [i_0])))));
        var_22 = min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2765809211U)) ? (var_3) : (var_3)))), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) < (min((1529158097U), (1023U)))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_23 &= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-64))))) ? (((arr_0 [i_1]) ? (18446744073709551615ULL) : (0ULL))) : (arr_1 [i_1])))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) min(((-(min((var_5), (var_5))))), (((/* implicit */unsigned long long int) (!(arr_0 [i_1]))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_24 = ((/* implicit */int) var_15);
        arr_8 [i_2] = ((/* implicit */int) arr_7 [i_2] [i_2]);
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2] [i_2])))))));
        var_26 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_27 += ((/* implicit */short) ((_Bool) arr_0 [i_3]));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(864006806)))) > (min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_3])), (arr_1 [i_3])))));
        var_28 = ((((261120ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) & (min((var_7), (((/* implicit */unsigned int) -390830552))))))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_29 &= ((/* implicit */unsigned int) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_12))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 424124499U)), (9198719387053929233LL)))) : (min((((/* implicit */unsigned long long int) (unsigned short)26078)), (18446744073709551609ULL))))) / ((-((-(var_16)))))));
            arr_15 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-1))));
        }
        for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            arr_18 [i_3] [i_3] [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) / (var_8)))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (var_16))), (((/* implicit */unsigned long long int) var_1))));
            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_0 [i_5 + 1]) ? (((/* implicit */int) arr_0 [i_5 - 1])) : (((/* implicit */int) (unsigned short)34405)))))));
            var_31 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_3])), (536870784))))))), (min((min((((/* implicit */unsigned long long int) -1)), (var_10))), (((/* implicit */unsigned long long int) arr_14 [i_5] [i_5 + 1]))))));
        }
    }
    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_14))) ? (((unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (max((((/* implicit */unsigned int) ((short) (unsigned short)58010))), (min((2680023095U), (((/* implicit */unsigned int) (unsigned char)60))))))));
}
