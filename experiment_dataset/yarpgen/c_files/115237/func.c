/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115237
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) arr_1 [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1649103157U) == (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) (short)11305)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2])))))));
        arr_2 [(short)0] [(short)0] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), ((+(13U)))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(max((1642345461672693194LL), (((/* implicit */long long int) arr_0 [16LL])))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(signed char)4] &= ((/* implicit */signed char) min((((/* implicit */long long int) max((arr_3 [i_1]), (((/* implicit */short) (signed char)-16))))), (((long long int) arr_3 [(signed char)10]))));
        arr_7 [i_1] = ((/* implicit */long long int) arr_5 [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            arr_15 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)0))))));
            arr_16 [i_2] = ((/* implicit */signed char) var_4);
            var_21 = ((/* implicit */short) arr_9 [i_2] [i_3]);
        }
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_22 *= ((/* implicit */_Bool) ((long long int) (-(5330675680906716221LL))));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (long long int i_6 = 4; i_6 < 23; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((var_1) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) ((signed char) arr_12 [i_5] [i_5])))));
                            arr_27 [i_2] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_4] [i_6])) : (((/* implicit */int) arr_19 [i_6] [i_7]))));
                            var_24 = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_8 = 2; i_8 < 20; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) (((((-(((/* implicit */int) (signed char)116)))) + (2147483647))) >> (((arr_30 [15LL] [(signed char)15] [i_4]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_33 [i_2] [(short)23] [(short)18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_4] [i_8] [i_8] [i_9])) || (((/* implicit */_Bool) var_16))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (signed char i_10 = 4; i_10 < 23; i_10 += 4) 
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) -422922259597188744LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            var_28 = ((/* implicit */short) ((((var_15) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_32 [i_10] [i_2] [i_2] [i_2] [(signed char)6])) ? (var_8) : (var_15))) + (8591438013418006940LL)))));
        }
        arr_36 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_25 [i_2] [i_2] [(unsigned char)21] [i_2] [i_2] [i_2])) : (((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_29 = ((/* implicit */signed char) max((max((((short) (short)-1088)), ((short)-20875))), (((/* implicit */short) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */short) var_5))))))))));
}
