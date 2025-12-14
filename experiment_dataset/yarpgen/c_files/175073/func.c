/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175073
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
    var_10 = ((/* implicit */unsigned char) 2882505301U);
    var_11 = ((int) (-(var_7)));
    var_12 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */int) (unsigned char)81)) << (((1412461995U) - (1412461987U)))))) % (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((unsigned int) arr_0 [i_0] [i_0 + 1]));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])) > (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0])))))));
            var_15 = ((/* implicit */int) (~(var_7)));
            var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        }
        for (int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_0 [i_2 + 1] [i_2]))));
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_4 [i_0]);
            arr_8 [i_0] = ((/* implicit */short) (+(arr_4 [i_0 + 1])));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_11 [i_0] = ((/* implicit */unsigned int) ((unsigned char) 2882505289U));
                arr_12 [i_0] [(short)9] [i_3] = ((/* implicit */unsigned char) arr_5 [i_0] [i_2]);
                var_18 = ((/* implicit */short) (+(1923524896U)));
            }
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [(_Bool)1])) != (var_4)))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5 - 2] [i_2 + 1] [i_0 + 1])) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) var_9)))) : ((-(1923524889U)))));
                            var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_1) | (((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_7 = 2; i_7 < 20; i_7 += 2) /* same iter space */
        {
            arr_26 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) 1383175500U);
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_7 - 1] [i_8] [i_9] [i_9])) ? (((/* implicit */int) arr_32 [i_0] [i_7 + 1] [i_8] [i_7 + 1])) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_2 [i_0] [(_Bool)0] [i_0])))))) : (arr_9 [(unsigned short)17] [i_9] [i_9] [i_0])));
                        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0 + 1] [i_7])) ? (2882505301U) : (arr_25 [i_0 + 1] [i_0 + 1] [i_7])));
                        arr_33 [i_0] [i_7] [i_8] [i_0] = ((/* implicit */short) ((arr_22 [i_0] [i_7 - 2]) - (arr_22 [i_0] [i_7 + 1])));
                        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_7 - 2])) ? (1705014218) : (((/* implicit */int) arr_31 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_7 + 1]))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_37 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)96)) == (var_1))))) > (arr_35 [i_0 + 1] [5LL] [i_8] [i_0 + 1] [i_10] [i_9] [i_7 + 1])));
                            arr_38 [i_0 + 1] [i_0] [i_7] [i_0] [i_0 + 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >= ((~(((/* implicit */int) (unsigned short)37559))))));
                            arr_39 [i_10] [i_10] [i_10] [15U] [i_0] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-1593162354) : (arr_18 [i_0] [i_0 + 1] [i_0] [i_0])))) : (arr_19 [i_10])));
                            arr_40 [i_0] [i_0] [i_7] [i_0] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)132)) || (((/* implicit */_Bool) arr_20 [i_0 + 1] [i_7 - 2] [i_7 + 1] [i_7] [i_7 - 2]))));
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_0] [i_7 - 2]))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_7 - 2] [i_7] [i_7 - 1]))));
        }
        for (long long int i_11 = 2; i_11 < 20; i_11 += 2) /* same iter space */
        {
            arr_43 [i_0] [i_0 + 1] [i_0] = arr_21 [i_0 + 1] [i_0] [8U] [i_0] [i_0] [i_11 + 1];
            var_26 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_11] [i_11 - 2])) + (((arr_6 [(short)1] [i_11 + 1] [i_11 - 2]) - (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_11] [i_11]))))));
            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) / (arr_30 [i_0] [i_0] [i_0] [i_0])))) && ((!(arr_34 [i_0] [i_0 + 1] [(unsigned short)5] [i_0 + 1] [i_11 - 2] [i_11 - 2])))));
            arr_44 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1928592183)) ? (895009272U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                arr_47 [i_0] = ((/* implicit */unsigned short) ((signed char) var_4));
                var_28 = ((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_0]);
                var_29 -= ((/* implicit */unsigned short) ((_Bool) 1412461983U));
            }
        }
    }
    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)12556)) ? (1513842609U) : (1412461994U)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((unsigned int) 2122861143))) : (var_7)))));
}
