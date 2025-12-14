/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123508
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (max((var_7), (((/* implicit */unsigned int) var_9)))))) & (((((((/* implicit */_Bool) (short)-29175)) ? (2080149664U) : (8U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 7; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_3 + 1] [i_2] [i_2]), (arr_6 [i_3 + 3] [i_1] [i_2]))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_5))));
                            arr_12 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_7 [i_2] [i_3 + 1] [i_2])))));
                            arr_13 [i_0] [i_2] [4] &= ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                        }
                        var_20 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 2] [(short)3] [i_3 + 1] [i_3 + 1]))) - (var_10)))));
                        var_21 = ((((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3] [i_3 + 2] [i_3 - 2] [i_3])) ? (((/* implicit */int) arr_8 [7U] [i_1] [(unsigned char)3] [i_1] [i_3 - 3] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_3 - 3] [i_3])))) < (((((/* implicit */_Bool) arr_0 [i_3 - 2])) ? (((/* implicit */int) arr_5 [i_3 - 2] [i_3 + 2] [i_3] [6])) : (((/* implicit */int) max((arr_4 [i_3] [(signed char)4]), (((/* implicit */signed char) (_Bool)0))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) 2080149669U);
        arr_14 [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (15883)))))), ((-(0ULL)))))));
    }
    for (long long int i_5 = 3; i_5 < 7; i_5 += 2) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) ((((((/* implicit */int) (unsigned char)150)) & (((/* implicit */int) (signed char)-120)))) != (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (short i_7 = 4; i_7 < 7; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5])) | (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5 + 1]))))) ? (((/* implicit */int) arr_8 [i_5] [i_7 - 3] [i_7 - 1] [i_7] [i_7 - 4] [i_7])) : (((/* implicit */int) arr_7 [i_7 - 1] [i_7 - 3] [i_7 - 4])))))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5] [i_5 - 1] [i_5] [i_5 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (2080149664U)))) ? ((~(arr_23 [i_5 - 2] [i_5] [i_5] [i_5 + 3]))) : ((~(arr_23 [i_5 - 1] [(unsigned char)3] [i_5] [i_5 + 3])))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned char) var_10);
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((unsigned char) min((arr_18 [i_9] [i_9 - 1]), (((/* implicit */signed char) arr_15 [i_5 + 2]))))))));
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned int) var_3)))));
            arr_26 [i_5] [i_5] [i_5] &= ((/* implicit */long long int) max((arr_23 [i_5 + 2] [i_5 + 2] [i_9] [i_9]), (((/* implicit */unsigned int) (signed char)-120))));
            arr_27 [i_5] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_3 [i_9 - 1] [i_9 - 1] [i_9])) < (((/* implicit */int) arr_20 [i_9 - 1] [i_9 - 1] [i_9])))));
        }
        arr_28 [i_5] = ((/* implicit */unsigned long long int) min((((unsigned char) -9223372036854775787LL)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) (signed char)120))))))));
        /* LoopSeq 1 */
        for (signed char i_10 = 1; i_10 < 8; i_10 += 1) 
        {
            var_29 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_19 [i_10] [i_10 + 1] [i_10 - 1])))));
            var_30 *= ((/* implicit */unsigned short) ((unsigned char) ((max((((/* implicit */unsigned long long int) var_11)), (var_2))) % (((/* implicit */unsigned long long int) min((arr_6 [i_5] [i_10] [i_5]), (((/* implicit */int) arr_1 [i_5] [i_10]))))))));
            /* LoopNest 2 */
            for (unsigned char i_11 = 3; i_11 < 8; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? ((+(arr_11 [i_5 + 3] [i_12] [i_11 - 3] [i_5] [i_5 + 2]))) : (((/* implicit */int) var_9)))));
                        var_32 *= ((/* implicit */short) max((arr_21 [i_5] [i_5] [i_5] [i_5 - 2]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) arr_20 [i_10] [i_10] [i_12])))) < (((/* implicit */int) ((2080149664U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_11])))))))))));
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2214817632U))))));
                    }
                } 
            } 
            arr_36 [(short)5] [i_5 + 2] [i_5 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_34 [i_5 + 1] [i_10] [i_5] [i_5 - 1] [i_10] [i_10 - 1])))) ? (((((/* implicit */_Bool) arr_34 [i_10] [i_10] [i_10] [i_10] [i_5 - 2] [i_5])) ? (arr_34 [i_5] [i_5] [i_5] [i_5 + 3] [i_5] [i_5]) : (arr_34 [i_5] [i_5 - 1] [(_Bool)1] [i_5 - 2] [i_5 - 1] [i_5 + 3]))) : (min((arr_34 [i_5] [i_5 - 3] [i_5 + 2] [i_5 - 3] [i_10] [i_10]), (arr_34 [i_10 - 1] [i_10] [i_10] [i_5 - 2] [i_5] [i_5])))));
        }
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        arr_41 [i_13] [i_13] = ((/* implicit */unsigned int) arr_38 [(_Bool)1]);
        /* LoopSeq 1 */
        for (signed char i_14 = 2; i_14 < 21; i_14 += 1) 
        {
            var_34 = ((/* implicit */signed char) ((unsigned int) var_7));
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32745)) ? (((unsigned long long int) arr_37 [i_16])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    arr_48 [i_13] [i_14 - 2] [i_15] [i_16] = ((/* implicit */long long int) (_Bool)1);
                    var_36 = ((/* implicit */signed char) arr_37 [i_14]);
                }
                arr_49 [i_13] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) (short)4627)) + (((/* implicit */int) (short)-32724))));
            }
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_14 - 2] [i_14 - 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1])) ? (((/* implicit */int) arr_44 [i_14] [i_14] [i_14 - 1] [i_14 + 2])) : (((/* implicit */int) arr_44 [(unsigned short)19] [i_14] [i_14 + 1] [i_14 + 2]))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_17 = 1; i_17 < 17; i_17 += 1) 
    {
        for (long long int i_18 = 0; i_18 < 18; i_18 += 3) 
        {
            {
                var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (-(max((var_2), (((/* implicit */unsigned long long int) arr_42 [i_17 - 1])))))))));
                arr_55 [11ULL] = ((/* implicit */signed char) ((arr_43 [i_17] [i_18]) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_43 [i_17 - 1] [i_17 - 1])), (((((/* implicit */int) var_8)) | (((/* implicit */int) var_0))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) ^ (var_2)))));
            }
        } 
    } 
    var_39 = ((/* implicit */signed char) ((var_2) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
}
