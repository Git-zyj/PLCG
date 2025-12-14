/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160966
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
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_5)), (var_3)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((min((17447292583271000317ULL), (((/* implicit */unsigned long long int) 3410965654U)))), (min((17447292583271000317ULL), (((/* implicit */unsigned long long int) (short)29771))))));
        var_21 |= arr_0 [i_0];
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((unsigned int) (short)-25101)), (((((/* implicit */_Bool) ((arr_1 [(unsigned char)0] [i_1]) ^ (arr_4 [i_1] [i_1])))) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25100))) > (18446744073709551614ULL))))))))))));
        var_23 += ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) max((arr_0 [i_1]), (((/* implicit */unsigned int) var_12))))) / (999451490438551298ULL))) == (((min((((/* implicit */unsigned long long int) (short)-20367)), (arr_4 [i_1] [i_1]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1])))))))));
        var_24 *= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) max((arr_3 [(unsigned short)2]), ((short)25100)))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 8191)))) : (((((/* implicit */_Bool) 0U)) ? (18446744073709551606ULL) : (var_16))))));
        var_25 = ((/* implicit */unsigned int) var_2);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) (short)16254);
        var_27 = ((/* implicit */long long int) ((min((min((((/* implicit */unsigned int) arr_5 [i_2])), (var_1))), (min((((/* implicit */unsigned int) (_Bool)1)), (3224764725U))))) >> (((min((((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) > (((/* implicit */int) (_Bool)1))))), ((~(1579526695))))) + (1579526719)))));
    }
    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_28 = ((/* implicit */short) arr_12 [i_3]);
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) 0ULL))));
        }
        arr_14 [i_3 + 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_3 - 2]))), (((unsigned long long int) arr_13 [i_3 + 1]))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (short i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_24 [i_3] [15U] [i_5] [i_3] [i_7 + 1] [i_7] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6] [i_7])))))) : (min((arr_11 [i_3 - 1]), (((/* implicit */unsigned int) arr_9 [i_7] [i_7])))))));
                        var_30 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_3 + 2] [i_5 + 3])), (arr_23 [i_3 + 2] [i_5 + 3] [i_7] [i_7 - 1])))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_3 + 2] [i_5 + 3])), (arr_23 [i_3 + 2] [i_5 + 3] [i_5] [i_7 - 1]))))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (min((((/* implicit */unsigned long long int) min(((~(0U))), (((/* implicit */unsigned int) arr_18 [i_6]))))), (((((((/* implicit */_Bool) arr_23 [i_3] [i_5] [i_5 - 1] [i_7 - 1])) ? (11363363036834987573ULL) : (17447292583271000328ULL))) >> (((((arr_0 [i_3 - 1]) >> (((/* implicit */int) (signed char)20)))) - (2219U)))))))));
                    }
                } 
            } 
        } 
    }
}
