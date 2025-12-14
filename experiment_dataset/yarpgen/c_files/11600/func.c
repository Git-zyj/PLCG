/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11600
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
    var_18 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_10)), (17ULL))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)47)) ^ (((/* implicit */int) (signed char)92)))) << (((/* implicit */int) (!(((/* implicit */_Bool) 426793032U))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_1 [i_0]) % (((/* implicit */int) (signed char)73)))) == ((~(((/* implicit */int) (unsigned char)192)))))))) == (11484936368131741509ULL)));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0 - 4]), (arr_1 [i_0 + 1])))) ? (((/* implicit */unsigned int) -1617264624)) : (4294967295U)));
        }
        for (unsigned short i_2 = 4; i_2 < 15; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                var_20 -= ((/* implicit */unsigned int) min((arr_7 [i_2 + 3] [i_3]), ((short)23588)));
                var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6961807705577810088ULL)) ? (18446744073709551588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212)))))) ? (max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-70)), ((unsigned char)236)))), (max((3868174263U), (((/* implicit */unsigned int) arr_2 [i_0 + 1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_0 - 1]))) != (4294967295U)))))));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-8285))))));
                var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)2))));
                arr_15 [i_2 + 2] [i_4] = ((/* implicit */int) (~(var_0)));
                var_24 = ((/* implicit */int) (signed char)-106);
            }
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((unsigned char) 28U));
                            var_26 *= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_18 [i_0 - 2] [i_0 - 4] [i_2 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (8640039673488186776ULL)))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((min((arr_17 [i_0 - 2]), (arr_17 [i_0 - 4]))) + (2147483647))) >> (max((((arr_0 [i_2 - 2] [i_2 + 2]) - (((/* implicit */int) arr_4 [i_2] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_0 - 1]))))))))))));
            }
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) (short)-14431);
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        {
                            arr_32 [i_8] [i_9] [i_8] [i_8] [i_2 + 3] [i_2 - 1] [i_8] = ((/* implicit */unsigned char) max((min((arr_5 [i_0 - 4] [i_0 - 3] [i_0 - 4]), (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) (unsigned short)65519)), (arr_5 [i_0 - 4] [i_0 - 3] [i_0 - 4])))));
                            var_29 += ((/* implicit */_Bool) var_6);
                            var_30 ^= ((/* implicit */signed char) 640011245034388949ULL);
                        }
                    } 
                } 
            }
            var_31 += ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) & (((/* implicit */int) (unsigned char)63))));
        }
        var_32 |= ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (short i_11 = 3; i_11 < 22; i_11 += 3) 
    {
        var_33 += ((/* implicit */unsigned char) ((unsigned short) (signed char)-22));
        var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_11 + 2])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)65))))) ? (((/* implicit */int) var_13)) : (-1496728293)));
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (4U) : (arr_33 [i_11])))) ? (arr_34 [i_11 - 2]) : (((/* implicit */unsigned long long int) arr_33 [i_11 - 3])))))));
        var_36 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-22)) ? (((((/* implicit */int) (unsigned short)65508)) >> (((arr_33 [i_11 - 3]) - (1958682339U))))) : ((~(((/* implicit */int) (short)-18479))))));
        arr_35 [i_11 + 1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_34 [i_11 - 1])) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)47)) | (((/* implicit */int) var_14)))))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_12] [i_12] [i_12])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))))) : (((/* implicit */int) (unsigned short)12))));
        arr_39 [i_12] [i_12] = ((/* implicit */unsigned short) (signed char)124);
        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */unsigned int) arr_5 [i_12] [i_12] [i_12])) : (3868174249U)))) != (((unsigned long long int) (-(3868174249U))))));
        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) arr_36 [i_12]))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            {
                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_13] [i_14]))))), ((~(arr_10 [i_13])))))) && (((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) 426793005U))), ((-(268435455))))))));
                var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((-268435471), (((((/* implicit */_Bool) 2276978676694538392ULL)) ? (-268435468) : (((/* implicit */int) arr_27 [i_13] [i_13] [i_13] [i_13])))))))));
            }
        } 
    } 
    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((var_12) + (2147483647))) >> (((max((max((((/* implicit */unsigned long long int) var_3)), (6099102644827852271ULL))), (((/* implicit */unsigned long long int) var_16)))) - (6099102644827852241ULL))))))));
    /* LoopSeq 1 */
    for (unsigned char i_15 = 1; i_15 < 13; i_15 += 3) 
    {
        arr_49 [i_15 + 1] = ((/* implicit */int) max((((/* implicit */unsigned short) ((arr_34 [i_15 - 1]) > (arr_34 [i_15 + 1])))), ((unsigned short)65535)));
        var_43 = ((/* implicit */int) var_15);
    }
}
