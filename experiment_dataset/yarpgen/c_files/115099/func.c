/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115099
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
    var_15 = (+(((var_11) ? (((/* implicit */int) var_1)) : (2139095040))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2139095061) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9290597106479846977ULL)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned char)104))))) : (((((/* implicit */_Bool) var_3)) ? (9156146967229704637ULL) : (((/* implicit */unsigned long long int) -1176870900568131097LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41546))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((var_0), (((/* implicit */long long int) (unsigned short)23987))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (signed char i_3 = 4; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned long long int) var_6);
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) var_0);
                        arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (+((~(9223372036854775807LL)))));
                    }
                } 
            } 
        } 
        var_18 = ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : ((-(((/* implicit */int) (unsigned short)15)))));
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */int) arr_13 [i_4] [i_4]);
        arr_18 [i_4] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_13 [i_4] [i_4])))), (((/* implicit */int) ((unsigned short) 9156146967229704638ULL)))));
        var_19 = ((/* implicit */unsigned short) 9290597106479847005ULL);
        var_20 = ((/* implicit */int) (_Bool)1);
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_21 [i_5] |= ((/* implicit */short) var_6);
        var_21 = ((/* implicit */unsigned int) (~(1546588640)));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */unsigned long long int) -843762841)), (((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (9290597106479847005ULL) : (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5])))))))));
        arr_22 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_8))) ? ((~(((/* implicit */int) arr_13 [i_5] [i_5])))) : (((/* implicit */int) (unsigned char)255))));
    }
    var_23 = ((/* implicit */int) (short)-21749);
}
