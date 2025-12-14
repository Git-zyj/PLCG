/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166391
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 1])) == (((/* implicit */int) arr_1 [i_0 + 2]))));
        arr_3 [5LL] = ((/* implicit */_Bool) arr_0 [i_0 + 3]);
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] |= ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27))) : (3508526240572490184ULL)))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 2]))))), (((unsigned int) arr_4 [i_1 - 1])))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (min((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) var_9);
        arr_10 [i_2] = ((/* implicit */long long int) ((min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2 + 2])) | (((/* implicit */int) (signed char)-28))))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (var_10))))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_2 - 1] [i_2 - 1]))))));
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            arr_23 [i_2] [i_3] [i_2] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((~(arr_5 [i_6]))) : (((var_8) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2 - 1] [i_2 - 1] [i_3] [i_4 + 2] [i_3] [i_3]))) - (arr_5 [i_4])))))));
                            var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (arr_9 [i_2 + 1] [i_2]) : (arr_9 [i_2 + 1] [(short)9])))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            arr_26 [i_2 + 2] [i_3] [i_4] [i_3] [i_7] = ((/* implicit */short) (_Bool)1);
                            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)4)))) : ((-(1302703106U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_3 - 2] [i_2])) ? (((/* implicit */int) arr_17 [i_5] [i_4] [i_3 + 1] [i_2 + 2])) : (((/* implicit */int) arr_17 [i_2] [i_4 + 2] [i_5] [i_7]))))) : (max((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1]))) : (var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_2] [i_3 + 2] [i_4] [1] [i_7])))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (max((var_0), (((/* implicit */unsigned int) var_19)))) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_18 [i_3] [i_7])))), (((/* implicit */int) min((arr_0 [i_3]), (((/* implicit */unsigned char) (signed char)-29))))))))));
                            arr_27 [i_2 + 1] [i_3] [i_4 + 4] [i_4 + 4] [i_2 + 1] = ((/* implicit */unsigned char) ((short) (+(arr_24 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_3 - 2] [i_3 + 1]))));
                        }
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_17 [i_4] [i_2] [i_4] [i_4 + 3])) ? (arr_16 [i_3] [i_3] [i_2 + 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2 + 1] [i_2] [i_2] [i_4 + 1])))))))));
                        var_27 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_4 + 2]))), ((+(arr_5 [i_4 + 2])))));
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(signed char)11] [i_5] [i_3] [6LL]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) arr_17 [i_9] [i_2 + 2] [i_8] [i_2 + 2]);
                    var_30 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [1] [i_2] [(short)6] [i_2] [7LL]))) * (var_12)))))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_4 [i_2 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 + 2]))))))))));
                }
            } 
        } 
    }
    var_32 *= ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) >> (((var_16) - (9256540523328403370ULL)))));
    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) var_4))));
    /* LoopSeq 2 */
    for (int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)31))))) : ((~(arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))))));
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (max((((((/* implicit */_Bool) arr_9 [i_10] [i_10])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10] [i_10]))))), (((/* implicit */unsigned long long int) arr_9 [i_10] [i_10]))))));
        /* LoopSeq 1 */
        for (signed char i_11 = 4; i_11 < 11; i_11 += 3) 
        {
            arr_38 [(_Bool)1] [i_10] = ((((/* implicit */_Bool) arr_29 [i_10] [i_10])) && (((/* implicit */_Bool) (~(((/* implicit */int) max((arr_4 [i_10]), (((/* implicit */short) var_15)))))))));
            arr_39 [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_10] [i_10]))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    {
                        arr_47 [i_10] [i_13] [i_10] [i_10] = ((/* implicit */long long int) max((((/* implicit */short) (signed char)3)), ((short)-9172)));
                        arr_48 [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_16 [i_10] [i_11 - 3] [i_10] [i_12 - 2]) & (arr_16 [i_10] [i_11 - 3] [i_12 - 1] [i_12 - 2])))) ? (max((arr_16 [i_10] [i_11 - 3] [i_11] [i_12 + 1]), (arr_16 [i_12] [i_11 + 1] [i_11 + 1] [i_12 - 2]))) : ((+(arr_16 [i_10] [i_11 - 2] [i_12 - 2] [i_12 + 1])))));
                    }
                } 
            } 
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (~(((/* implicit */int) arr_40 [i_11 + 1] [i_11] [i_11 - 3])))))));
            arr_49 [i_11] [i_11] = ((/* implicit */unsigned short) arr_4 [i_10]);
        }
        var_37 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_18 [i_10] [i_10])) : (((/* implicit */int) arr_21 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))) && (((/* implicit */_Bool) ((((arr_16 [i_10] [i_10] [i_10] [i_10]) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (20)))))))))));
    }
    for (int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
    {
        arr_52 [i_14] = ((/* implicit */long long int) (+(((((((/* implicit */int) (short)20459)) / (-717348703))) << (((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9172))))) - (949713076902950346ULL)))))));
        /* LoopSeq 3 */
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            arr_56 [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((arr_25 [i_14] [i_14] [i_15] [i_15] [i_14]) == (var_9)))), ((+(((/* implicit */int) (signed char)87)))))))));
            arr_57 [i_14] [i_15] [i_14] = ((/* implicit */unsigned short) arr_30 [i_15] [(short)4] [i_15]);
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) 3915070594015062701LL))));
        }
        for (long long int i_16 = 2; i_16 < 10; i_16 += 1) 
        {
            var_39 = ((/* implicit */unsigned int) ((_Bool) min((max((var_17), (((/* implicit */long long int) arr_43 [i_14] [i_14] [i_16] [(short)0] [i_14] [(unsigned char)3])))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)20)) - (-717348687)))))));
            arr_61 [i_16] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) << (((var_9) + (2872292870606610932LL)))))) ? (((/* implicit */int) ((signed char) arr_30 [i_14] [i_16] [i_14]))) : (((int) var_2))))), (((arr_15 [i_14] [i_16]) ? (((/* implicit */long long int) min((arr_31 [(short)5] [i_14] [i_16] [(_Bool)1]), (((/* implicit */int) (signed char)8))))) : (arr_24 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16 - 1] [i_16] [i_16 + 2])))));
            arr_62 [i_16] = (+(((arr_22 [i_16] [i_16 - 2] [(short)6] [i_16 - 1] [i_16 + 1]) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_14])), (arr_43 [i_14] [i_14] [i_16] [i_14] [2U] [i_16 + 2]))))))));
        }
        for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            var_40 = ((/* implicit */unsigned char) (~((~((+(((/* implicit */int) arr_18 [i_17] [i_14]))))))));
            var_41 -= ((_Bool) 717348683);
        }
        arr_65 [i_14] [i_14] = ((/* implicit */signed char) max(((+(12620126357385417880ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_35 [i_14])))))));
    }
}
