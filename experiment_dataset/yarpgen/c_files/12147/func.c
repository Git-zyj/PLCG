/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12147
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_10 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((arr_0 [i_1] [i_0]), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))), (arr_2 [i_0])));
            var_11 = ((/* implicit */long long int) arr_1 [i_0]);
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) var_2);
            var_12 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) ((short) ((((/* implicit */int) var_7)) >> (((arr_0 [i_1] [i_1]) - (1652709013)))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */long long int) var_1)), (arr_5 [8])))))) ? (((/* implicit */int) ((8083255811532449904ULL) != (0ULL)))) : ((-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_7 [i_3] [17ULL] [i_3] [i_3])))))))));
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_6 [i_2] [i_3])) : (((/* implicit */int) arr_10 [i_3]))))))) ? ((~(arr_5 [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
            }
            for (long long int i_4 = 4; i_4 < 23; i_4 += 1) 
            {
                arr_14 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) max((((/* implicit */signed char) var_7)), (arr_6 [i_0] [i_0]))))))) : (((/* implicit */int) var_3))));
                arr_15 [i_4] [i_2] [i_2] = ((/* implicit */signed char) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [(signed char)15]))) * (8083255811532449875ULL))), (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2])), (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_4] [i_4] [i_4] [i_4]) + (8083255811532449885ULL)))) ? (max((((/* implicit */unsigned int) 2147483644)), (arr_13 [i_4]))) : (((/* implicit */unsigned int) ((int) var_6))))))));
            }
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)65523)) : (arr_2 [i_0])));
                var_15 += ((/* implicit */long long int) (+(4294967295U)));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) -356813194950152591LL)) ? (((/* implicit */long long int) 4294967284U)) : (-2383143731191911008LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3537)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))))))));
            }
            /* vectorizable */
            for (short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
            {
                arr_22 [i_0] [i_2] [i_2] [i_6] = ((((/* implicit */_Bool) var_4)) ? (arr_13 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                var_17 *= (!(((/* implicit */_Bool) ((int) var_5))));
                var_18 -= arr_18 [i_0] [i_2];
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
            {
                var_19 += ((/* implicit */short) var_1);
                arr_25 [i_0] [i_0] &= ((unsigned short) arr_12 [i_7]);
                arr_26 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (arr_16 [i_0] [i_2] [i_7] [i_7]) : (arr_16 [i_0] [i_0] [i_7] [i_7])));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (unsigned short i_9 = 2; i_9 < 23; i_9 += 1) 
                    {
                        {
                            arr_33 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (arr_2 [i_9]) : (((/* implicit */int) arr_21 [i_0] [i_7] [i_8]))));
                            var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) 1299514670U)) ? (((((/* implicit */_Bool) 8083255811532449908ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)13)))) : (((/* implicit */int) (signed char)-19))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
        {
            arr_36 [i_0] = ((/* implicit */unsigned char) max((arr_0 [i_0] [i_0]), (((/* implicit */int) (((-(var_8))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))))))));
            var_21 = ((/* implicit */long long int) arr_2 [i_0]);
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_10] [i_10] [i_0])) ^ (arr_1 [i_0])))) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10] [i_10]))))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_0] [i_10] [i_10])) + (((/* implicit */int) var_0)))) >> (((((/* implicit */int) arr_24 [i_0])) - (13949)))))) ? (max((((/* implicit */unsigned int) arr_2 [i_0])), (arr_16 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        }
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16425846523534876204ULL)) ? ((-(((((/* implicit */long long int) 1299514676U)) / (var_5))))) : (((/* implicit */long long int) (((+(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])))) + (((/* implicit */int) (!(var_1)))))))));
    }
    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (-((+(((10363488262177101695ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))))))))))));
        var_26 = ((/* implicit */int) var_6);
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_11] [i_11] [i_11])))))));
        var_28 = (!(((/* implicit */_Bool) (unsigned short)14336)));
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            for (long long int i_13 = 1; i_13 < 21; i_13 += 3) 
            {
                {
                    arr_46 [i_11] [i_11] [i_13] [i_11] = ((/* implicit */unsigned short) var_4);
                    arr_47 [(unsigned short)6] [(unsigned short)6] |= (_Bool)1;
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 14; i_14 += 4) 
    {
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((unsigned long long int) (unsigned char)65)) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_14]))))))));
        var_30 *= ((/* implicit */unsigned short) (signed char)19);
        arr_50 [i_14] [(short)9] &= ((/* implicit */unsigned long long int) ((((_Bool) arr_9 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_24 [i_14])) : (((/* implicit */int) var_3))));
        arr_51 [i_14] [i_14] = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */int) arr_19 [i_14] [i_14] [i_14])) : (((/* implicit */int) var_2))));
    }
    var_31 = var_1;
    var_32 = ((/* implicit */unsigned short) max((var_5), (((/* implicit */long long int) ((((/* implicit */int) max((var_2), (((/* implicit */short) var_7))))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-13637)) : (((/* implicit */int) var_9)))))))));
    var_33 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */unsigned long long int) ((var_6) ? (var_5) : (9223372036854775780LL)))) : ((-(var_4))))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_2)))))))));
}
