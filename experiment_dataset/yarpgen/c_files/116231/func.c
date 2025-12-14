/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116231
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
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */signed char) (-(arr_0 [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0] [5LL] [i_0 + 1])) : (((/* implicit */int) var_13))))), (max((((/* implicit */long long int) arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 1])), (-8380477772171143959LL)))));
                    var_18 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [(unsigned char)8]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 19; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((short) (-((~(var_0))))));
                    arr_13 [i_4] [13ULL] [i_4] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) arr_3 [i_0])))))))));
                    arr_14 [i_0] [i_4] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) 72056494526300160ULL)) ? (var_10) : (((/* implicit */long long int) var_6)))), ((-(var_15))))) == (min((var_14), (min((-8380477772171143959LL), (var_10)))))));
                    arr_15 [i_0] [i_3] [16] [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_1 [i_0] [i_4 + 1])))), (var_8)));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_5 = 3; i_5 < 14; i_5 += 2) 
    {
        arr_19 [16U] [16LL] |= ((/* implicit */unsigned char) 11600293644916117262ULL);
        arr_20 [4ULL] [(short)4] &= ((/* implicit */_Bool) ((unsigned char) var_10));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            {
                arr_28 [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_6] [i_6]))));
                arr_29 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(18374687579183251455ULL)))))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_27 [i_6])))) | (((/* implicit */int) ((unsigned char) var_16)))))) : ((-(((((/* implicit */_Bool) 72056494526300160ULL)) ? (72056494526300160ULL) : (((/* implicit */unsigned long long int) var_3))))))));
                arr_30 [i_6] [i_6] = ((/* implicit */signed char) max((((/* implicit */int) arr_22 [i_6])), (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_26 [23LL] [12U]))))));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            {
                                arr_39 [i_6] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) (-(((int) max((18374687579183251455ULL), (((/* implicit */unsigned long long int) arr_21 [i_7])))))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (((var_7) % (arr_25 [i_6])))))) ? ((-(max((var_7), (arr_35 [i_6] [i_10] [i_8] [i_8]))))) : (((/* implicit */long long int) arr_36 [i_6] [i_6] [i_8])))))));
                                arr_40 [i_6] [i_6] [i_8] [i_10] [i_8] = ((/* implicit */short) arr_25 [i_8]);
                                arr_41 [i_6] [i_6] [i_8] [i_8] [i_10] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_36 [i_6] [i_7] [i_8]) << (((var_10) - (8128372390965008243LL))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_32 [i_6] [i_6] [(unsigned char)18])) : (((/* implicit */int) arr_24 [i_6] [i_7] [i_7])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -4945413495836204409LL)) ? (((/* implicit */int) arr_24 [i_7] [i_8] [i_10])) : (((/* implicit */int) arr_24 [i_7] [i_8] [i_8]))))))) : (min((arr_31 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) arr_26 [i_6] [i_7]))))));
                                arr_42 [i_6] [5LL] [i_8] [i_9] = ((/* implicit */unsigned char) var_15);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_11] [i_8])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8])))))))), (((((/* implicit */unsigned long long int) arr_36 [i_6] [i_6] [i_6])) < (var_0)))));
                        arr_46 [i_8] [i_7] [(unsigned char)17] [i_11] = ((((/* implicit */_Bool) ((unsigned char) arr_45 [i_6] [i_6] [i_7] [i_11]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_33 [i_8]))) && (((/* implicit */_Bool) (unsigned char)255)))))) : ((-(8380477772171143958LL))));
                        arr_47 [i_8] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) arr_22 [i_11])))), (((/* implicit */int) (signed char)-53)))))));
                        arr_48 [i_7] &= ((unsigned int) (~(var_0)));
                    }
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_38 [i_6] [i_7] [i_7] [i_8]), (((/* implicit */unsigned long long int) arr_21 [i_6])))))))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (arr_35 [i_6] [i_6] [i_6] [i_6])))))))));
                }
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_13 = 3; i_13 < 23; i_13 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((min((arr_31 [i_6] [i_7] [i_12] [i_13]), (((/* implicit */unsigned int) (signed char)-36)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_27 [i_7])))))))));
                        arr_55 [i_6] [i_7] [i_12] [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_45 [14LL] [i_13 - 3] [i_13] [i_13])) != (-1774635950))) ? (max((arr_38 [i_6] [i_13 - 3] [i_6] [i_13 - 3]), (((/* implicit */unsigned long long int) ((signed char) var_13))))) : (max((((/* implicit */unsigned long long int) arr_25 [i_13 - 1])), (arr_38 [(unsigned char)0] [i_7] [i_7] [i_7])))));
                    }
                    for (long long int i_14 = 3; i_14 < 23; i_14 += 2) /* same iter space */
                    {
                        arr_58 [i_6] [i_6] [i_6] [i_12] [i_12] [i_14 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)96)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (max((min((10LL), (((/* implicit */long long int) (unsigned char)35)))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)1)))))))));
                        arr_59 [i_14] [i_7] [i_6] = ((/* implicit */_Bool) ((short) arr_38 [(unsigned char)6] [i_7] [i_12] [i_14 - 3]));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_15 = 3; i_15 < 21; i_15 += 2) 
                    {
                        var_23 = (+(((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) var_6)) : (var_15))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_15 - 3] [i_12] [i_6])) != (((/* implicit */int) var_12))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_43 [i_15 + 2])) : (((/* implicit */int) (short)-32581))));
                    }
                }
                arr_62 [i_6] = min(((~(((int) arr_32 [i_6] [i_6] [19U])))), (((/* implicit */int) min((arr_27 [23]), (((/* implicit */unsigned char) arr_24 [i_7] [18] [i_6]))))));
            }
        } 
    } 
}
