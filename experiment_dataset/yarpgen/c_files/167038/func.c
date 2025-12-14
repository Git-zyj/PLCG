/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167038
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_12 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) arr_2 [i_0] [i_1]))))) != (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((arr_2 [i_0] [i_0]) + (1950566444)))))) + (max((((/* implicit */unsigned long long int) var_4)), (arr_3 [i_1])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) arr_2 [i_0] [i_1]))))) != (((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((arr_2 [i_0] [i_0]) + (1950566444)))))) + (max((((/* implicit */unsigned long long int) var_4)), (arr_3 [i_1]))))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_4])) || (((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_0]))))) & (((/* implicit */int) ((short) arr_6 [i_3] [i_3] [i_1] [i_3]))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (min((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_3])), (var_9))) : (((arr_6 [i_0] [i_1] [i_0] [i_3]) % (arr_6 [i_0] [i_2] [i_0] [i_4])))));
                        }
                    } 
                } 
            } 
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_1) != (((/* implicit */unsigned long long int) var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8048461039778440723ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1]))) : (arr_8 [i_0] [i_1] [i_1] [i_0])))) : (arr_9 [i_0] [i_1] [i_1] [i_1] [i_1])))) ? ((+(((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0]))))) : (((/* implicit */int) (((~(1152897421440944904ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_10) : (arr_2 [i_0] [i_0])))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 16; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_5) + (max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (var_10)))), (((arr_9 [i_5] [i_5] [i_6] [i_7] [i_0]) * (((/* implicit */unsigned long long int) 0U))))))));
                        var_14 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                    }
                } 
            } 
            var_15 ^= 8048461039778440735ULL;
            var_16 = ((/* implicit */short) (+(0LL)));
            arr_20 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_5] [i_5])) ? (arr_17 [i_0] [i_5] [i_5] [i_5]) : (arr_17 [i_0] [i_0] [i_0] [i_5])))));
        }
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
        {
            arr_23 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */short) arr_4 [i_0] [i_0])))))));
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_14 [i_8] [i_0] [i_8] [i_8])), (var_5))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2))))))))));
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (signed char i_10 = 4; i_10 < 16; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_11)) > (arr_3 [i_0]))) ? (((((/* implicit */int) arr_4 [i_10] [i_8])) + (((/* implicit */int) arr_1 [i_9] [i_11])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_16 [i_0] [i_8] [i_9] [i_11] [i_11])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((var_1), (8048461039778440723ULL)))))) : (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9)))) ? (arr_13 [i_0] [i_11] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_26 [i_11] [i_11] [i_9] [i_11] [i_11] [i_8]) == (((/* implicit */unsigned long long int) var_10))))))))))));
                            arr_32 [i_0] [i_8] [i_9] [i_0] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10 - 3] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_10 + 1] [i_0]))))) && (((/* implicit */_Bool) ((signed char) arr_1 [i_10 + 1] [i_0]))));
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_4), (var_4)))) ? (max((((/* implicit */unsigned long long int) var_8)), (var_1))) : (min((((/* implicit */unsigned long long int) var_8)), (var_1))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) + (arr_17 [i_10] [i_8] [i_0] [i_10]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            arr_35 [i_0] = min((max((arr_6 [i_0] [i_12] [i_0] [i_12]), (((/* implicit */unsigned int) arr_34 [i_0] [i_12])))), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_11)), (var_1))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_12] [i_12]))) != (var_5)))))))));
            var_20 = ((/* implicit */unsigned int) ((((int) (short)-30402)) | (((/* implicit */int) ((((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_12] [i_0]))))) && (((/* implicit */_Bool) ((var_11) + (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_12] [i_12] [i_12])))))))))));
            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_12]))) & (min((((/* implicit */long long int) arr_28 [i_12] [i_12] [i_12] [i_0])), (var_8))))), (((/* implicit */long long int) min(((+(arr_34 [i_0] [i_12]))), (((((/* implicit */int) (short)28)) * (((/* implicit */int) arr_28 [i_0] [i_0] [i_12] [i_0])))))))));
            arr_37 [i_0] = ((/* implicit */signed char) var_4);
        }
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0]))))) ? (((var_8) + (((/* implicit */long long int) ((/* implicit */int) (short)-16373))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_0] [i_0] [i_0]) == (var_0)))))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) min((arr_31 [i_0] [i_0]), (((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((short) (unsigned short)7117))))) : (-1988328105)));
    }
    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
    {
        arr_41 [i_13] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_25 [i_13])))) - (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 1988328104)))))))) & (min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) < (var_5)))), (arr_8 [i_13] [i_13] [i_13] [i_13])))));
        arr_42 [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) var_2)) : (var_4))) <= (((((/* implicit */_Bool) arr_15 [i_13] [i_13] [i_13])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_21 [i_13] [i_13] [i_13])))))))) != (min((((/* implicit */unsigned int) arr_21 [i_13] [i_13] [i_13])), (var_9)))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_46 [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_14] [i_14] [i_14] [4U]))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_0))))))) != (arr_43 [i_14] [i_14])));
        arr_47 [i_14] |= ((/* implicit */long long int) ((((((/* implicit */int) var_7)) - (var_10))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_33 [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_15 [i_14] [i_14] [i_14])))) > (((/* implicit */int) (short)-16380)))))));
        arr_48 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_14] [i_14] [i_14])))))) / (arr_13 [i_14] [16LL] [i_14])));
        arr_49 [i_14] = ((/* implicit */signed char) max((((arr_0 [(signed char)2]) * (arr_0 [(unsigned short)12]))), (min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(short)14])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [14ULL] [14ULL]))))))))));
    }
    var_22 = ((/* implicit */unsigned short) var_2);
}
