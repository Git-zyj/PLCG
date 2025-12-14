/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175948
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) == (var_1)))) : (((/* implicit */int) arr_1 [i_1] [i_1]))));
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) 779929646U)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (var_3))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)108)))));
            var_15 = ((/* implicit */unsigned char) (+(arr_2 [i_0] [i_1])));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) var_13);
            arr_8 [i_0] = 4239301862U;
            arr_9 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (arr_7 [i_0])));
            /* LoopNest 3 */
            for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (arr_10 [i_4 - 1] [i_2] [i_3 + 3] [i_4 - 1])));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (short)-13072))));
                            var_19 = ((/* implicit */_Bool) ((var_13) >> (((/* implicit */int) arr_10 [i_5] [1U] [i_4] [i_3 + 2]))));
                            var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)67)) ? (4391908205198439774ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13072))))) * (((/* implicit */unsigned long long int) var_3))));
                            arr_16 [(signed char)7] [i_2] [(signed char)3] [i_3] [(short)5] [i_5] = ((((/* implicit */_Bool) arr_14 [2ULL] [i_4] [i_3] [i_4 + 1] [i_3 + 3])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            arr_19 [2LL] [i_0] = ((/* implicit */signed char) ((var_9) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)13072)))))));
            var_21 = ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)13072)) : (((/* implicit */int) arr_0 [i_0]))))))));
        }
        /* vectorizable */
        for (signed char i_7 = 4; i_7 < 11; i_7 += 3) 
        {
            var_22 = ((/* implicit */short) ((var_11) > (-155072483)));
            arr_23 [i_7] = ((/* implicit */unsigned short) arr_18 [i_0] [i_0]);
            /* LoopNest 2 */
            for (unsigned int i_8 = 4; i_8 < 12; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    {
                        var_23 = (((_Bool)1) ? (15560097059640916877ULL) : (((/* implicit */unsigned long long int) 2418359726U)));
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_31 [i_0] [(_Bool)1] [i_0] [i_7] [i_0] [4ULL] [11ULL] = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_7]);
                            arr_32 [i_0] [i_7] [i_7] [i_7] [i_8] [i_10] &= ((/* implicit */long long int) ((_Bool) arr_29 [i_8] [i_10] [i_10] [i_9 + 4] [(signed char)6] [i_8]));
                        }
                        for (int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            arr_35 [i_0] [i_7] [i_7] [i_9] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15023)) + (((/* implicit */int) (short)-13073))));
                            var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) 3235138207U))));
                        }
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_8 - 2] [i_7 - 3]))));
                            var_27 = ((/* implicit */long long int) -155072483);
                        }
                        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-15023))));
                    }
                } 
            } 
            arr_39 [i_7] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) var_2)))));
            /* LoopSeq 1 */
            for (long long int i_13 = 1; i_13 < 10; i_13 += 4) 
            {
                var_29 += ((/* implicit */short) (-(((/* implicit */int) (unsigned short)31793))));
                /* LoopSeq 3 */
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    arr_46 [i_14] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (258296127) : (((/* implicit */int) (short)-13072))))) ? (-155072486) : ((~(((/* implicit */int) (signed char)-67))))));
                    var_30 = ((/* implicit */short) (unsigned char)219);
                    arr_47 [i_7] [i_7 - 1] [i_7 - 1] [i_7] = ((/* implicit */unsigned long long int) ((-1202674617428350658LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)13072)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26124))))))));
                }
                for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)108)) - (((/* implicit */int) arr_10 [i_0] [4] [i_13] [4]))))) + (19U)));
                    var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_25 [i_7] [i_7] [i_13 - 1] [i_15]))));
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (short)13071))));
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned int) arr_43 [i_0] [i_7 - 4] [i_13] [i_15] [i_7]);
                        arr_52 [10] [i_7] [i_7] [(_Bool)1] [i_15] [i_16] = ((/* implicit */_Bool) (unsigned short)61886);
                        var_35 = ((/* implicit */unsigned long long int) var_3);
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) -1988224624439418647LL))));
                    }
                    for (unsigned char i_17 = 2; i_17 < 11; i_17 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) arr_37 [i_15] [i_15] [i_15] [i_15]);
                        var_38 = ((/* implicit */unsigned int) min((var_38), (arr_24 [i_0])));
                        arr_57 [i_7] [i_15] [i_13] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_3 [i_17] [i_7] [i_0]);
                    }
                }
                for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    arr_62 [i_0] [i_13 - 1] [i_13] [i_0] [(signed char)1] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) * (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51)))))));
                    var_39 &= ((/* implicit */int) (short)-13085);
                    var_40 += ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2853068278U))))));
                }
                arr_63 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_59 [i_0] [i_13 + 3])) ? (((/* implicit */int) arr_20 [i_7] [i_7 - 2] [i_13 + 3])) : (((/* implicit */int) (short)30141))));
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
    {
        for (short i_20 = 0; i_20 < 11; i_20 += 1) 
        {
            {
                var_41 = ((/* implicit */short) ((((3781912098U) / (arr_21 [i_19] [i_19] [i_19]))) >> (min((((/* implicit */unsigned long long int) (signed char)18)), (1541204332670278891ULL)))));
                var_42 = ((/* implicit */signed char) (!((_Bool)1)));
            }
        } 
    } 
}
