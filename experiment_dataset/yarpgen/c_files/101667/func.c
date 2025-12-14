/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101667
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_15))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [4ULL] [i_0] = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (unsigned char)193)))) ? (min((67108863), (((/* implicit */int) (unsigned char)246)))) : (-67108864)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)181))))), (((((/* implicit */_Bool) ((unsigned int) (unsigned char)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)0)))) : ((~(arr_0 [i_0] [i_1])))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (var_2)))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2004979244U)))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((unsigned long long int) ((unsigned char) 14185546742143118097ULL))))))));
                                arr_13 [i_0] [i_1] [i_2] [(signed char)3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)53520))))))) ? (var_14) : (67108863)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 3) 
    {
        var_22 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5 + 2] [i_5]))) : (arr_15 [i_5 + 3]))));
        /* LoopSeq 4 */
        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_23 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) -559756390)) ? (2004979244U) : (((/* implicit */unsigned int) 559756389)))));
            arr_20 [i_5] [i_6] [i_6] = ((/* implicit */int) 2004979252U);
            arr_21 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 67108866)) + ((-(((((/* implicit */unsigned int) -67108850)) + (2421534268U)))))));
        }
        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
        {
            var_24 = arr_18 [i_7];
            arr_25 [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (unsigned char)136)))));
            arr_26 [i_7 - 1] [i_5] [i_5] = ((_Bool) -5397495176408912218LL);
            arr_27 [i_7] = ((/* implicit */short) max((var_3), (((/* implicit */unsigned long long int) max((var_17), (((558815782319394174LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))))))))));
        }
        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) /* same iter space */
        {
            arr_30 [i_5 - 2] = ((/* implicit */signed char) -285085220);
            var_25 = ((/* implicit */unsigned char) ((signed char) (-((-(var_16))))));
            var_26 &= ((/* implicit */signed char) ((-1965528249) + (((/* implicit */int) (unsigned short)255))));
            var_27 = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) (unsigned short)57761)) || (((/* implicit */_Bool) 559756389)))) ? (((/* implicit */int) (unsigned char)147)) : (1827214629)))));
            var_28 -= ((/* implicit */unsigned char) (~(((int) var_0))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 2; i_9 < 13; i_9 += 4) /* same iter space */
        {
            var_29 ^= (+(((/* implicit */int) ((unsigned short) arr_23 [i_5 + 4]))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_30 &= ((/* implicit */signed char) ((unsigned char) arr_15 [i_5 + 2]));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    arr_39 [(short)11] [i_10] = ((((/* implicit */_Bool) arr_22 [i_5 + 2])) && (((/* implicit */_Bool) -559756390)));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_22 [i_11]))));
                }
            }
            var_32 = ((/* implicit */signed char) min((var_32), (arr_31 [i_5 + 1] [i_9 + 1])));
        }
        /* LoopNest 3 */
        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_41 [i_5 + 1] [4LL])), (var_8)));
                        var_34 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_35 [i_5 - 2] [i_5 - 1])) ? (((/* implicit */int) arr_35 [i_5] [i_5 - 1])) : (((/* implicit */int) arr_35 [i_5] [i_5 - 1])))), (((-67108839) - (((/* implicit */int) (signed char)-49))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_15 = 1; i_15 < 16; i_15 += 2) 
    {
        var_35 = ((/* implicit */unsigned short) (!(var_4)));
        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (15902566545873137206ULL) : (((/* implicit */unsigned long long int) 2668611664U))));
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_48 [i_15 + 2])) ? (min((((/* implicit */int) (unsigned short)25957)), (-1859630915))) : (((/* implicit */int) arr_47 [i_15 + 2])))))))));
        var_38 += ((/* implicit */unsigned char) arr_47 [i_15]);
    }
    for (short i_16 = 0; i_16 < 14; i_16 += 3) 
    {
        var_39 &= ((/* implicit */unsigned char) (signed char)80);
        /* LoopSeq 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_40 -= ((/* implicit */unsigned short) var_10);
            var_41 += ((/* implicit */long long int) var_16);
        }
        /* vectorizable */
        for (short i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            var_42 = ((/* implicit */unsigned int) ((int) arr_34 [i_16] [(unsigned char)13] [i_18] [i_18]));
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_16] [(unsigned char)5]))) | (arr_49 [i_18])))) ? (arr_24 [i_18] [i_16]) : (((((/* implicit */_Bool) 2817152830U)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) arr_42 [i_16] [i_18])))))))));
            arr_59 [i_16] = ((/* implicit */long long int) var_11);
            arr_60 [i_18] [i_18] |= ((/* implicit */unsigned int) arr_29 [i_18]);
        }
        arr_61 [i_16] = ((/* implicit */signed char) ((unsigned short) (signed char)93));
    }
}
