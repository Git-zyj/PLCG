/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141626
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_14) - (((/* implicit */long long int) (~(var_2))))))) ? (((/* implicit */unsigned long long int) var_16)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17935218256076555587ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))) : (17935218256076555587ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : ((-(var_6)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 16183910976732883366ULL);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((6183317942956092737ULL) + (((/* implicit */unsigned long long int) 1890402870U))));
        var_18 += ((/* implicit */short) 791696693);
        var_19 = ((/* implicit */short) arr_0 [(unsigned char)2] [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_20 = arr_5 [i_1];
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1]))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_8 [i_2] [i_2]))));
        }
        for (signed char i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) arr_10 [i_1]);
            arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((arr_5 [i_1]) ? (8014385098578206817ULL) : (arr_6 [i_1])));
        }
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))));
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) 16183910976732883372ULL))));
        var_26 *= ((/* implicit */unsigned char) arr_6 [i_4]);
    }
}
