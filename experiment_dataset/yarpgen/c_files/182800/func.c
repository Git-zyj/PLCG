/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182800
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
    var_14 += ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(18446744073709551614ULL)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_16 = ((/* implicit */long long int) max((((3ULL) + (2ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_5 [i_1])))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))))));
        var_17 -= ((/* implicit */_Bool) var_8);
    }
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */int) arr_4 [i_2 + 2]);
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_18 = ((/* implicit */signed char) arr_9 [i_2] [i_3]);
            var_19 = ((/* implicit */int) min((max((arr_1 [i_3] [i_2 - 1]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_0 [i_2])), (arr_4 [(unsigned short)2])))))), (((/* implicit */unsigned long long int) max((((unsigned int) arr_5 [i_2])), (((/* implicit */unsigned int) arr_0 [i_2 - 1])))))));
            var_20 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            arr_23 [i_2] [i_4] [i_5] [i_4] [i_4] [9U] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) (short)(-32767 - 1)))) | (max((2ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))));
                            var_21 = ((/* implicit */unsigned char) (+(1ULL)));
                            arr_24 [i_5 + 2] [(short)10] [10U] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 - 1])))))) : (min((min((var_3), (((/* implicit */unsigned long long int) (unsigned char)221)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0)))))))));
                        }
                    } 
                } 
                arr_25 [i_2] [i_5] [i_4] = ((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1]);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) 
            {
                var_22 = ((/* implicit */signed char) (-(15921289182039204423ULL)));
                arr_28 [i_2] [i_4] [i_4] = ((/* implicit */short) max((arr_19 [i_4] [i_2 + 1] [i_8 - 1] [i_2 + 1]), (((/* implicit */unsigned char) ((arr_21 [i_2] [i_2 + 2] [i_4] [i_2] [i_4] [i_4] [(signed char)5]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8 - 1] [i_4] [i_2 - 1])) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17771)))))))))));
                arr_29 [i_4] [i_4] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 3077369890U)) ? (((/* implicit */int) arr_20 [i_2] [i_2] [8ULL] [i_2] [8ULL])) : (((/* implicit */int) arr_26 [i_8] [(short)15] [(short)15]))))))));
                var_23 &= ((/* implicit */unsigned int) ((((arr_9 [i_2 + 1] [i_8 + 1]) < (((/* implicit */int) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114))))) : ((+(arr_9 [i_2 + 2] [i_8 - 2])))));
            }
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_27 [(unsigned char)5] [i_4] [(_Bool)1] [i_2])), ((((+(1ULL))) + (((/* implicit */unsigned long long int) arr_27 [i_2 - 1] [i_2] [i_4] [i_2]))))));
                arr_32 [i_4] = ((/* implicit */unsigned long long int) ((1837221156U) | (var_4)));
                arr_33 [i_9] [(unsigned char)10] [(unsigned short)8] |= ((/* implicit */unsigned long long int) (~(((unsigned int) 18446744073709551597ULL))));
            }
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            var_25 += ((/* implicit */signed char) ((arr_15 [0ULL]) - (((/* implicit */unsigned long long int) max(((+(var_11))), (var_11))))));
            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3072)))) ? (var_3) : (((/* implicit */unsigned long long int) arr_27 [i_2] [i_10] [i_10] [i_2 - 1]))))) ? (((/* implicit */int) max((arr_6 [i_2 + 1] [i_10]), (arr_6 [i_2 + 2] [i_10])))) : (((/* implicit */int) arr_20 [i_10] [9U] [9U] [i_10] [i_2]))));
        }
        var_27 ^= ((/* implicit */_Bool) 11ULL);
        var_28 = min((max((((/* implicit */unsigned long long int) (~(-562197963083879748LL)))), (max((((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [(_Bool)1] [(unsigned char)16] [i_2] [i_2])), (var_7))))), (((/* implicit */unsigned long long int) (~(((unsigned int) arr_4 [i_2]))))));
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((unsigned int) 6ULL)))));
    }
    var_30 = var_12;
}
