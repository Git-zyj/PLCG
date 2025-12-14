/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176385
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
    var_11 += ((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 |= ((/* implicit */long long int) ((short) 1971704375));
                    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 10532539806878217685ULL)) && (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_2 - 2] [i_2]))) == (arr_4 [i_1 - 1] [i_1] [i_2 - 2])))));
                }
            } 
        } 
        var_14 *= ((/* implicit */short) ((long long int) (_Bool)1));
    }
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        arr_11 [i_3] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) 67108863U)) / (-175101091521562079LL))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    for (short i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (_Bool)0);
                            var_16 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_21 [18ULL] [i_3] [i_5] [i_3] [i_3])) == (175101091521562079LL)))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7] [i_6] [i_5] [i_3] [i_3])) && (((/* implicit */_Bool) arr_7 [i_3] [i_5] [i_5] [i_7])))))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_10 [i_3]))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)-15096)) + (-1971704357))))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */long long int) ((3195697882U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)29885)))));
                arr_23 [i_3] [i_3] [i_3] [i_3] = (_Bool)1;
                var_20 ^= ((/* implicit */short) ((((/* implicit */int) (signed char)(-127 - 1))) == (((((/* implicit */int) arr_16 [i_3] [i_4] [i_4] [i_4])) | (-1971704375)))));
            }
            for (short i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_3 - 1] [i_3 - 3] [i_3]))) * (-1LL)));
                var_22 -= ((/* implicit */unsigned char) 1732805129596224065LL);
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    arr_28 [i_3] [i_3] [i_3] [i_9] = arr_8 [i_3];
                    arr_29 [i_8] |= ((/* implicit */short) ((((-1971704350) | (((/* implicit */int) (short)-8447)))) ^ (((/* implicit */int) arr_7 [i_3] [i_3] [i_3 - 1] [(unsigned char)4]))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 3; i_10 < 19; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) ((short) arr_27 [i_3 + 1] [i_10 - 3]));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)7936)) % (((/* implicit */int) arr_14 [i_9] [i_4])))))));
                        var_25 -= ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (unsigned short)48848)) - (48848)))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [i_3 - 3] [i_4] [i_4] [i_9] [i_3 - 3] [i_3] = ((((/* implicit */int) (short)15287)) % (((((/* implicit */_Bool) 2830848972U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)9)))));
                        var_26 = ((((/* implicit */long long int) ((/* implicit */int) (short)15287))) | (7951853334152986184LL));
                    }
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) arr_36 [i_9] [i_9] [i_8] [i_9] [i_3]);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 511)) : (8560704155008187330ULL)));
                        arr_41 [i_3] [i_3] = (unsigned char)63;
                    }
                }
            }
            var_29 = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_3 - 3] [i_3 + 1] [i_3 - 2])) * (((/* implicit */int) arr_24 [i_3 - 2] [i_3 - 2] [i_3 - 2]))));
            arr_42 [i_3] = ((/* implicit */_Bool) ((arr_25 [i_3] [i_3 + 1] [i_3] [i_3 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))) : ((-(3294024445350493303LL)))));
            /* LoopNest 3 */
            for (short i_13 = 2; i_13 < 16; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (arr_50 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
                            var_31 = ((/* implicit */unsigned char) arr_14 [i_3] [i_3]);
                            arr_51 [i_3] [i_3] [i_13] [i_3] [i_15] = ((/* implicit */unsigned char) ((-1655864754) % (((/* implicit */int) (unsigned char)64))));
                            var_32 = ((/* implicit */short) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]);
                            arr_52 [i_3] = ((/* implicit */unsigned int) (-(((long long int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [5ULL] [i_3]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_16 = 2; i_16 < 19; i_16 += 2) 
        {
            var_33 = ((/* implicit */signed char) (short)-2350);
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    {
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((3737761137035476448LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) -7951853334152986178LL)) ? (arr_15 [i_18] [i_3] [i_16] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))))))));
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) 959225439)) && (((/* implicit */_Bool) 67108851U))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)112)) >> (((-6110161549335161137LL) + (6110161549335161149LL)))));
                arr_64 [i_3] [i_16] [i_16] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_3] [i_16] [i_19]))) : (4227858444U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((4227858445U) != (((/* implicit */unsigned int) arr_1 [6ULL])))))) : (((((/* implicit */_Bool) (short)12581)) ? (0LL) : (((/* implicit */long long int) 1))))));
                var_37 &= ((/* implicit */signed char) arr_10 [(unsigned short)18]);
            }
        }
        var_38 = ((/* implicit */unsigned int) ((9007164895002624ULL) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-13012)))))));
        var_39 ^= ((/* implicit */signed char) ((((3684549430U) << (((arr_0 [i_3]) + (7362154175947652575LL))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_3] [i_3] [i_3] [i_3 + 1] [i_3]))) == (610417865U)))))));
    }
    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((-575919549) < (var_8)))) << (((((((/* implicit */_Bool) 1971704375)) ? (((/* implicit */int) (unsigned char)45)) : (1971704375))) - (45)))))) == (var_4))))));
}
