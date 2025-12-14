/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107518
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -18LL)) ? (2964710759654834320LL) : (-32LL)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((((/* implicit */_Bool) ((unsigned char) ((int) (short)28874)))) ? (((((/* implicit */_Bool) ((((var_4) + (2147483647))) << (((((/* implicit */int) (short)28874)) - (28874)))))) ? (((((/* implicit */_Bool) 8LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)28874)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_0 [i_0]))))))) : (max((((((/* implicit */_Bool) 17LL)) ? (((/* implicit */int) (short)-28874)) : (((/* implicit */int) (short)-7335)))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)65519))))))));
        var_19 += ((/* implicit */int) ((unsigned short) (signed char)1));
        var_20 = ((/* implicit */int) max((((/* implicit */long long int) var_14)), ((~(min((25LL), (((/* implicit */long long int) (short)-7326))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (28LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)181)) >> (((((/* implicit */int) (signed char)-1)) + (17)))))) : (((32LL) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))))))));
        var_22 = ((/* implicit */unsigned char) (signed char)-1);
        arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_1]))));
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (short)28862)) : (((/* implicit */int) (short)7336))))) != (((((/* implicit */_Bool) (unsigned short)65532)) ? (18LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_23 = ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-109)));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) > (arr_3 [i_2])))), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_2] [i_2])))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                arr_13 [i_2] [i_4] = ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_3])) != (((/* implicit */int) (unsigned char)159))))) : (((/* implicit */int) var_14)));
                var_25 += ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned short)61414)))))));
                var_26 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_4])) > (((/* implicit */int) (signed char)-101)))) ? ((-(((/* implicit */int) arr_12 [i_2] [i_3] [i_3] [i_4])))) : (((((/* implicit */int) (signed char)-79)) & (((/* implicit */int) arr_10 [i_3] [i_3]))))));
            }
            var_27 = ((/* implicit */int) var_5);
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (var_10) : (((/* implicit */int) arr_11 [(short)1] [i_2])))))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (signed char)9))) ? (3900143095U) : (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [6U] [i_3] [i_5] [i_5]))) : (3992961550U)))));
            }
            for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                arr_19 [3] [i_3] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-15)) != (((/* implicit */int) arr_17 [i_6] [6] [i_6 - 2] [12]))))), ((unsigned short)4)));
                var_30 = ((/* implicit */int) var_7);
            }
            for (unsigned char i_7 = 3; i_7 < 10; i_7 += 4) 
            {
                var_31 ^= ((/* implicit */unsigned int) (-(((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)252)), ((unsigned short)17)))) >> (((max((((/* implicit */long long int) 3992961558U)), (-3499052800905376522LL))) - (3992961553LL)))))));
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (-((~(19LL))))))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            arr_26 [i_2] [(short)6] [i_7 - 3] [i_8] [i_8] [i_7] [i_9] = ((/* implicit */short) (((+(((/* implicit */int) arr_16 [(short)5] [i_7 + 1] [i_3] [i_2])))) / ((-(((/* implicit */int) arr_2 [i_2]))))));
                            var_33 *= ((/* implicit */_Bool) (((~((~(4294967280U))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2])))));
                            arr_27 [i_7] [i_9] [i_8] [0LL] [7LL] [(unsigned char)4] [i_7] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_13)))) == (((/* implicit */int) ((((/* implicit */long long int) (-(arr_3 [i_8])))) >= (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */long long int) arr_20 [13] [11] [13])) : (-22LL))))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) || (((/* implicit */_Bool) max((min((3058410868U), (((/* implicit */unsigned int) (unsigned short)62405)))), (((/* implicit */unsigned int) max((arr_1 [i_3]), (((/* implicit */unsigned short) arr_22 [i_7] [i_3] [i_7]))))))))));
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 12; i_10 += 4) 
            {
                var_35 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                var_36 *= ((/* implicit */signed char) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_5 [i_2]))));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_10 + 1] [i_10 - 1] [i_10 + 2] [i_10])))))));
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        arr_35 [i_11] [i_11] = ((/* implicit */int) arr_34 [i_11]);
        /* LoopSeq 2 */
        for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            arr_39 [i_12] [4LL] = ((/* implicit */short) (-(arr_37 [i_12] [i_11])));
            var_38 -= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_11]))))) ? (((/* implicit */unsigned int) arr_37 [i_11] [i_11])) : (var_16));
            var_39 &= ((/* implicit */int) arr_34 [i_11]);
        }
        for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_11] [i_11])) || (((/* implicit */_Bool) arr_34 [(signed char)16]))));
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_41 [i_14] [i_11]))));
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65521)) ? ((~(((/* implicit */int) arr_36 [i_11] [9])))) : ((~(((/* implicit */int) arr_41 [i_11] [i_11]))))));
                    arr_49 [1U] [1U] [i_14] [i_15] = ((/* implicit */signed char) (short)-7335);
                    arr_50 [21U] [i_15] [i_15] [(short)18] [i_13] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_47 [i_14])) - ((~(((/* implicit */int) var_9))))));
                    arr_51 [(short)6] [i_14] [i_13] [i_11] = ((/* implicit */unsigned char) arr_48 [i_14] [i_15] [i_14] [i_15] [i_13]);
                }
            }
            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_13])) ? (((/* implicit */int) arr_1 [i_11])) : (((/* implicit */int) var_14))));
        }
    }
}
