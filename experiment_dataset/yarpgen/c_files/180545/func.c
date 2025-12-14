/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180545
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                arr_8 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_4))));
            }
            var_18 ^= ((/* implicit */int) arr_1 [i_0]);
        }
        for (short i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_19 = (~(5849748380940697569LL));
                        var_20 = ((/* implicit */unsigned int) ((5849748380940697569LL) | (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_3 - 1] [i_0] [i_4 + 2])))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) ((((var_7) | (arr_0 [7LL]))) % (((/* implicit */int) arr_9 [i_3] [i_3 - 2]))));
            var_22 = (~((+(((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)4] [i_3])))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_14))));
            var_24 = ((/* implicit */short) var_0);
        }
        for (short i_6 = 2; i_6 < 15; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                arr_25 [i_7] [(_Bool)0] [i_6] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_21 [(_Bool)1]))))));
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_0] [i_6 - 2] [i_7] [i_8])) ? (arr_1 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)104))))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) arr_1 [i_0]);
                        var_27 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_1)))) : ((~(-53817859))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        arr_35 [i_6] [i_6] [(short)9] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5849748380940697570LL)) || ((_Bool)0)));
                        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)47))));
                        arr_36 [i_10] [(_Bool)1] [i_7] [i_8] [i_8] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_0] [i_6 - 1] [i_0]))));
                        var_29 = ((/* implicit */int) arr_2 [i_0]);
                        var_30 = ((/* implicit */long long int) (!(arr_15 [i_0])));
                    }
                    arr_37 [7LL] [(signed char)1] [i_7] [4U] = ((/* implicit */short) ((arr_1 [i_0]) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_9 [i_8] [i_8])))))));
                    var_31 += ((/* implicit */_Bool) ((((arr_1 [i_6 - 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_17 [i_0] [i_6 + 1] [i_7] [i_7] [i_6 - 2] [i_6 + 1])) + (2517)))));
                }
                var_32 = ((/* implicit */unsigned char) var_6);
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [5LL])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_6] [i_6] [i_7] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_6]))) : (976707581U)))) : (((((/* implicit */_Bool) (short)-5040)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-5044))))))))));
            }
            for (long long int i_11 = 1; i_11 < 15; i_11 += 1) 
            {
                var_34 += ((/* implicit */unsigned long long int) ((signed char) arr_32 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11]));
                arr_41 [(unsigned short)15] [i_6 - 2] [(short)15] [i_11] = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30291))) : (2080722933069939495ULL)))));
                var_35 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [(signed char)6] [i_0]);
            }
            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                var_36 -= (+(((/* implicit */int) arr_44 [i_6 - 1] [10] [i_6 - 1] [i_6])));
                arr_46 [i_0] [i_6 - 2] [10ULL] [(unsigned char)14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_6] [i_12] [i_0]))));
            }
            var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_12)) | (arr_26 [i_6 - 1] [i_6 - 1] [11ULL] [i_6 + 1])));
            var_38 |= ((/* implicit */int) arr_33 [i_6 - 2] [i_6 - 1] [i_6 - 1]);
        }
        var_39 = ((/* implicit */unsigned char) var_1);
        /* LoopNest 2 */
        for (short i_13 = 3; i_13 < 12; i_13 += 1) 
        {
            for (int i_14 = 1; i_14 < 15; i_14 += 3) 
            {
                {
                    var_40 += ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_3)))));
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
                    {
                        arr_56 [i_14] [i_13 + 4] [7U] [5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((((/* implicit */int) arr_21 [i_0])) | (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))))));
                        var_41 = ((/* implicit */signed char) arr_53 [8LL] [(signed char)11] [8LL] [i_14]);
                        arr_57 [i_13 + 1] [i_14] = ((/* implicit */short) (-(arr_47 [i_13 + 2] [i_13 + 4] [i_14 - 1])));
                    }
                    for (short i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
                    {
                        var_42 &= ((/* implicit */int) var_16);
                        var_43 += ((/* implicit */int) ((short) ((arr_31 [i_0] [i_0] [i_13] [(signed char)4] [i_16]) - (((/* implicit */unsigned long long int) arr_32 [i_0] [(short)9] [i_14 - 1] [i_16] [i_16])))));
                        var_44 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0]))))));
                    }
                    var_45 &= ((/* implicit */short) ((((/* implicit */int) var_1)) * ((~(((/* implicit */int) (short)5053))))));
                }
            } 
        } 
    }
    var_46 |= ((/* implicit */_Bool) min((min(((+(5849748380940697569LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_3))))))), (max((((/* implicit */long long int) min((var_12), (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) -5849748380940697570LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5063))) : (5849748380940697548LL)))))));
}
