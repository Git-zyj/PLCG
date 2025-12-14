/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176750
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_16 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [(unsigned char)2] = max(((((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (var_9))) != (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_2])) != (((/* implicit */int) arr_0 [i_1])))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) 332547560)) % (var_2))) & (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(-9223372036854775801LL))))))) : (((var_4) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (arr_3 [(_Bool)1] [i_1])))) : (((/* implicit */int) arr_2 [i_0] [(short)9] [i_0]))))));
                    arr_9 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_4)), (arr_2 [i_0] [i_1] [i_2])))) > (((/* implicit */int) arr_7 [i_1] [i_0]))))), (((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)50))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3])))));
        var_20 += ((/* implicit */_Bool) ((((268435455ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))));
        var_21 = ((/* implicit */_Bool) var_0);
    }
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_22 -= ((/* implicit */short) arr_12 [i_4]);
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))) ? (var_13) : (((/* implicit */unsigned long long int) var_15)))))));
        var_24 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])) ? (var_6) : (((var_6) % (var_5)))))) <= (((((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) var_4))))) ? (((/* implicit */long long int) (-(arr_15 [i_4])))) : (((var_10) * (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_7))));
        var_26 = ((/* implicit */_Bool) arr_12 [i_5]);
        arr_18 [i_5] = ((/* implicit */signed char) (short)-25332);
        var_27 = ((/* implicit */short) ((arr_14 [i_5] [(short)5]) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (var_6)))));
        var_28 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_7 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [3] [i_5]))) : (var_9)))));
    }
    var_29 = ((/* implicit */short) ((var_10) / (((long long int) min((var_0), (((/* implicit */short) (_Bool)1)))))));
}
