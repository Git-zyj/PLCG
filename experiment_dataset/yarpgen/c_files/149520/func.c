/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149520
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
    var_19 = ((/* implicit */int) (-((-((~(var_4)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = (!(((/* implicit */_Bool) (-(1008315605U)))));
        var_21 += ((/* implicit */signed char) (~((+(arr_1 [4ULL])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_6 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3] [i_2]))));
                    arr_15 [i_1] [i_1] [i_1] [i_4] [i_3] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)18] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_14 [i_1] [i_1] [i_3] [i_1]))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        arr_18 [i_1] [i_2] [i_3] [i_3] [i_5] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_2]))));
                        var_24 += ((/* implicit */_Bool) arr_16 [15] [i_2] [i_3] [i_4] [15]);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_5 [i_2])))) ? ((+(((/* implicit */int) (short)13055)))) : (arr_8 [i_1] [i_1]))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~((+(((/* implicit */int) arr_7 [i_2])))))))));
                        var_27 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3])))))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_6] [i_1]))))) ? (((/* implicit */int) arr_7 [i_1])) : ((+(((/* implicit */int) arr_9 [i_1] [i_1])))))))));
                    }
                    var_29 = ((/* implicit */long long int) arr_7 [i_1]);
                }
                for (unsigned short i_7 = 2; i_7 < 21; i_7 += 1) /* same iter space */
                {
                    arr_23 [i_1] [i_2] [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_1] [i_2]))));
                    var_30 = ((/* implicit */unsigned long long int) (+((+(arr_8 [i_2] [i_3])))));
                }
                for (unsigned short i_8 = 2; i_8 < 21; i_8 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2] [i_2]))))) ? ((+(((/* implicit */int) arr_13 [i_1] [i_1])))) : ((+(((/* implicit */int) arr_10 [i_1] [i_1] [19ULL] [18ULL]))))));
                    var_32 = ((((/* implicit */_Bool) (~(arr_26 [i_3])))) ? ((+(((/* implicit */int) arr_12 [i_2] [i_3])))) : (((/* implicit */int) arr_7 [i_1])));
                    var_33 = (~((+(arr_26 [i_3]))));
                }
                var_34 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_3] [i_1]))))) ? ((~(arr_5 [i_3]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [16U] [i_2] [16U]))))));
            }
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned char) arr_11 [i_1]);
                arr_30 [(short)13] [i_2] [(short)13] [i_9] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [(signed char)11] [i_1] [(unsigned char)14]))) : ((+(arr_5 [8ULL])))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        {
                            arr_36 [i_2] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_9] [i_10])) ? (arr_19 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_2]))))))));
                            var_36 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_24 [i_2] [i_9] [i_10])))) ? ((~(((/* implicit */int) arr_13 [(unsigned char)6] [i_9])))) : ((-(((/* implicit */int) arr_6 [i_1]))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))));
            }
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
            {
                arr_40 [(_Bool)1] [(_Bool)1] [i_12] = ((/* implicit */short) (+(((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                var_38 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_28 [i_1] [i_2] [i_12] [i_1])) : (((/* implicit */int) arr_31 [i_1]))))));
            }
            var_39 = ((/* implicit */_Bool) (-((-(arr_19 [i_2])))));
            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) (-((+(arr_5 [i_1]))))))));
        }
        arr_41 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_1] [i_1]))));
        var_41 *= ((/* implicit */short) (-((-(arr_19 [i_1])))));
    }
    for (unsigned long long int i_13 = 3; i_13 < 13; i_13 += 4) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_13 - 2]))));
        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (+((~(((arr_33 [i_13] [i_13 + 2] [i_13] [i_13 + 1] [i_13] [i_13 - 2]) ? (((/* implicit */int) arr_25 [8ULL] [i_13 - 3] [(_Bool)1])) : (((/* implicit */int) arr_28 [i_13] [i_13] [i_13 + 1] [i_13])))))))))));
    }
    for (unsigned long long int i_14 = 3; i_14 < 13; i_14 += 4) /* same iter space */
    {
        arr_47 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_14])) ? ((-((-(((/* implicit */int) arr_25 [i_14] [i_14] [(_Bool)1])))))) : ((-(((/* implicit */int) (!(arr_37 [3ULL] [3ULL] [i_14] [i_14]))))))));
        var_44 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(arr_44 [10U])))) ? (arr_14 [i_14] [i_14] [8ULL] [i_14 - 1]) : (((/* implicit */unsigned long long int) (+(arr_8 [i_14] [i_14]))))))));
        var_45 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_14] [i_14]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_14] [i_14] [i_14] [i_14])))))))) : ((~(((/* implicit */int) (unsigned char)71))))));
        var_46 &= ((/* implicit */short) (+(arr_35 [i_14 - 3])));
    }
    var_47 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) ? ((~((~(((/* implicit */int) var_8)))))) : ((~((~(((/* implicit */int) var_6))))))));
    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(var_1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : ((-((-(var_10)))))));
}
