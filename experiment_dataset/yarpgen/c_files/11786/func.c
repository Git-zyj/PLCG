/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11786
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
    var_15 += ((/* implicit */int) (-(min(((+(var_12))), (((/* implicit */long long int) var_8))))));
    var_16 = ((/* implicit */short) (((+(((/* implicit */int) (short)(-32767 - 1))))) & ((+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_10))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)0))))))) ? ((-(2876595035784463843LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) > (18446744073709551615ULL))))))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((+((+(((/* implicit */int) arr_0 [i_0])))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((((/* implicit */_Bool) (unsigned short)10914)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-67))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_3]);
                arr_11 [i_1] [(signed char)5] [i_2] [i_3] = ((/* implicit */short) 1423864818);
                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)221))));
                arr_12 [i_3] [(_Bool)1] [i_3] = ((/* implicit */long long int) ((int) var_3));
                var_20 = ((/* implicit */int) arr_0 [i_2 + 1]);
            }
            for (int i_4 = 3; i_4 < 15; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_0))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)1)))))));
                    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_2 + 1]))));
                    arr_17 [i_1] [i_2] [i_2 + 1] [3LL] [i_2] = ((/* implicit */int) var_11);
                    var_24 = ((/* implicit */unsigned short) var_4);
                }
            }
            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(arr_15 [i_2 - 1] [i_2 + 2] [i_2 + 1] [(signed char)8] [i_2] [i_2])));
        }
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            arr_21 [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) arr_14 [i_1] [i_6] [i_6]);
            arr_22 [i_6] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)0)), (18446744073709551615ULL)));
            arr_23 [i_6] [i_1] [i_6] = ((/* implicit */short) (-((+(((/* implicit */int) min((((/* implicit */short) var_3)), (var_14))))))));
        }
        var_25 = ((/* implicit */short) (_Bool)1);
        arr_24 [(signed char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [9LL])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1]))))) : (((arr_15 [12LL] [i_1] [(short)16] [(signed char)13] [i_1] [i_1]) | (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12)))))));
    }
    var_26 ^= ((/* implicit */unsigned long long int) ((((-4557475109771850394LL) + (9223372036854775807LL))) >> (((((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (((unsigned char) var_12))))) - (112)))));
}
