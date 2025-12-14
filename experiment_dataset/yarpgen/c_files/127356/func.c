/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127356
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) -1375840881)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) : (var_8))) : (((/* implicit */unsigned int) 1375840857))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3146154350U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */int) (_Bool)1)) : ((~(1302416156)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (short)-21561))))))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (arr_0 [i_0] [i_0 - 1]) : (536870911ULL))) : (((((/* implicit */_Bool) (signed char)-78)) ? (1624229533233138278ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62)))))));
        var_21 |= arr_1 [i_0];
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
        arr_6 [8U] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)53)) << (((1375840896) - (1375840890)))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_12)))) : (max((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_4))))))));
        var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */int) (short)27114)) == (((/* implicit */int) arr_2 [i_1]))))), (arr_3 [i_1])));
    }
    for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */_Bool) arr_3 [i_2]);
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (((+(((/* implicit */int) var_10)))) * (((((/* implicit */int) arr_10 [i_2 - 1])) << (((((/* implicit */int) arr_10 [i_2 + 1])) - (19871))))))))));
        var_24 = ((/* implicit */int) min((var_6), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_2 - 1])))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_4 [i_2]))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-98)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 2]))) : (arr_0 [14] [i_2 + 2])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2])))))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((short) 4294967295U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27098))) : (2538059985U))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 2) 
        {
            for (unsigned int i_5 = 4; i_5 < 9; i_5 += 2) 
            {
                {
                    arr_20 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */signed char) max(((~(6108239563451400561ULL))), (((((/* implicit */_Bool) arr_17 [i_5 + 2] [i_5 + 2] [i_5])) ? (arr_17 [i_5 - 2] [i_4] [i_5 + 1]) : (arr_17 [i_5 - 2] [i_4 + 3] [i_5])))));
                    var_28 = ((/* implicit */int) (+((-(((((/* implicit */_Bool) 2434438082U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_3] [i_3 - 1])) : (((/* implicit */int) arr_12 [i_3] [i_3 - 2]))))));
        var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(0U)))) ? (8367012829433575289ULL) : (((/* implicit */unsigned long long int) ((int) (+(3016926288U)))))));
        var_31 = ((/* implicit */unsigned int) var_14);
    }
}
