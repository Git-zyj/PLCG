/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110309
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_17)))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (2156584176240256411ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [(unsigned char)15] [i_0])) ? (-7934656403203832485LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) (~(0)))))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) 2147483647)) : (arr_0 [21ULL] [i_1])))));
            arr_7 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)245))));
            arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1]));
            var_18 ^= ((/* implicit */long long int) (~(arr_0 [i_1] [i_0])));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_12 [i_2] [i_0] = (~(6744995794519896801ULL));
            var_19 = ((/* implicit */unsigned short) arr_3 [i_0] [i_2 + 1]);
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            arr_16 [7ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)32027))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)11))))))) : (min((var_6), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (var_7))))))));
            arr_17 [i_0] [22U] [i_0] = ((/* implicit */unsigned int) (unsigned char)255);
        }
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_4]), (arr_9 [i_0])))) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_2))));
            arr_22 [(_Bool)0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((unsigned short) var_15)))))));
            var_22 = ((/* implicit */_Bool) arr_0 [i_0] [i_4]);
            arr_23 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((short) ((18446744073709551612ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_0)))))))));
            arr_24 [i_0] = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) -8128179664164935753LL)) ? (arr_4 [i_4]) : (var_11)))))));
        }
    }
    /* LoopSeq 2 */
    for (int i_5 = 4; i_5 < 18; i_5 += 2) 
    {
        arr_28 [i_5] [8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)3), (((/* implicit */unsigned char) (signed char)-31))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        var_23 = ((/* implicit */unsigned short) (unsigned char)15);
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
        {
            arr_33 [9LL] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_4);
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1657931614283905637LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((arr_32 [i_6 - 1] [i_7]), (arr_32 [i_6 - 1] [i_7])))))))));
            arr_34 [i_6 - 1] [i_6] [i_6 - 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_20 [i_6] [i_6 - 1] [i_6])) ? (arr_20 [i_7] [i_6 - 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17758)))))));
            arr_35 [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (4126063771U) : (((((((/* implicit */_Bool) arr_27 [i_6])) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (var_3)))));
        }
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
        {
            arr_39 [i_6] [(_Bool)1] = ((/* implicit */unsigned int) arr_37 [i_6] [i_6]);
            var_25 = ((/* implicit */int) ((unsigned long long int) min((((((/* implicit */_Bool) -718146240)) ? (arr_4 [i_6]) : (arr_20 [i_8] [i_8] [i_8]))), (((/* implicit */long long int) arr_32 [i_6 - 1] [i_6 - 1])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                var_26 = ((/* implicit */unsigned long long int) min((-718146265), (min((arr_11 [10U] [i_8]), (((/* implicit */int) var_8))))));
                arr_42 [i_9] [i_9] [i_9] [i_6] = ((/* implicit */unsigned short) ((long long int) (~((~(((/* implicit */int) arr_21 [i_6] [i_6])))))));
                var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_6))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6]))) * (var_7)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_8] [i_6 - 1])) % (((/* implicit */int) arr_26 [i_6] [i_6 - 1]))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 337218626U)) ? (var_4) : (((/* implicit */int) (unsigned char)254))))), (min((16777215U), (((/* implicit */unsigned int) var_15))))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
        {
            arr_45 [i_6 - 1] [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned char) arr_21 [i_6 - 1] [i_6 - 1]));
            arr_46 [(unsigned char)1] [i_10] = ((/* implicit */unsigned short) (~((-(var_3)))));
            arr_47 [i_6] = ((/* implicit */unsigned char) (~(arr_27 [i_6])));
        }
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            var_28 = ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)255))))), (((long long int) arr_9 [i_6]))));
            var_29 += ((/* implicit */int) ((unsigned long long int) (~(((((/* implicit */int) (signed char)-122)) | (((/* implicit */int) arr_18 [i_11])))))));
            arr_51 [i_11] = ((/* implicit */unsigned int) ((var_13) - (((unsigned long long int) arr_13 [i_6 - 1] [i_6 - 1]))));
        }
        var_30 = ((/* implicit */signed char) 9223372036854775785LL);
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (~(var_13))))));
        arr_52 [i_6] [2LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_6 - 1])) ? (arr_11 [i_6 - 1] [(unsigned short)0]) : (arr_11 [i_6 - 1] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3)));
    }
}
