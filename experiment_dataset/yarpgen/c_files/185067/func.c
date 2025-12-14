/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185067
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(var_8)))))) ? (-2607619664992729036LL) : (min((-8928185108081449233LL), (-8928185108081449233LL)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_3 [12] [2LL] = ((/* implicit */int) 137416020051006775LL);
        arr_4 [0U] [0U] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((var_5) + (2147483647))) << (((0LL) << (((arr_1 [i_0] [i_0 - 3]) + (231433204194741877LL)))))))) + (max((arr_1 [i_0] [i_0 - 1]), (-8928185108081449219LL)))));
        arr_5 [i_0] = max((((((((/* implicit */_Bool) -3966143774552286379LL)) ? (2607619664992729035LL) : (-8928185108081449236LL))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -8928185108081449226LL)))))), (((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) arr_2 [i_0])) ^ (3598097305U))))));
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
    }
    for (int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        arr_10 [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) var_1)) ^ ((~(var_9))))) & (((/* implicit */unsigned int) ((int) var_9)))));
        arr_11 [i_1] = ((/* implicit */unsigned short) var_1);
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            arr_17 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */int) var_6);
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                for (unsigned int i_5 = 4; i_5 < 18; i_5 += 4) 
                {
                    {
                        arr_26 [i_5] [2] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 696869970U)))) ? (((/* implicit */long long int) (~(var_9)))) : (((long long int) 2147483647))));
                        arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) arr_22 [i_5 - 4] [i_4] [13] [i_2] [i_2] [i_2]);
                        arr_28 [i_2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned short) var_4));
                    }
                } 
            } 
        }
        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_31 [i_2] [(unsigned short)9] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (276679849U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) - (arr_20 [(unsigned short)16] [i_6] [10LL] [i_6])))))))) : (max((((((/* implicit */long long int) 1371163187)) | (-8928185108081449236LL))), (var_8)))));
            arr_32 [i_2] = ((unsigned short) -1371163203);
            arr_33 [(unsigned short)9] [i_6] [i_6] |= ((long long int) ((((((/* implicit */_Bool) var_3)) ? (var_7) : (1558470138))) * (((/* implicit */int) ((2605291862197943652LL) < (5820262298944435354LL))))));
            arr_34 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((min((var_0), (((/* implicit */long long int) (unsigned short)6854)))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_1)) : (415935565701688890LL))))));
        }
        for (unsigned int i_7 = 2; i_7 < 18; i_7 += 3) 
        {
            arr_37 [i_7] [16U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 + 1] [6])) ? (((/* implicit */int) (unsigned short)16282)) : (((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1] [6U]))))) ? (arr_20 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 + 1] [(unsigned short)18])) ? (((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1] [(unsigned short)2])) : (-1646388123))))));
            arr_38 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned short)1]))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14336)))))) ? (-1558470135) : (((/* implicit */int) var_6))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 2; i_8 < 20; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        {
                            arr_47 [i_2] [i_7] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_46 [i_7] [(unsigned short)6])) ? (var_3) : ((-9223372036854775807LL - 1LL))))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_35 [20LL] [20LL])) ? (var_9) : (((/* implicit */unsigned int) var_1))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_24 [i_9] [i_2] [i_2] [i_8] [i_9] [i_10])))))) : (max((var_9), (((/* implicit */unsigned int) var_2))))))));
                            arr_48 [2U] [i_7] [1U] [6] [1U] = ((/* implicit */long long int) arr_20 [4U] [19] [i_8] [i_8]);
                        }
                    } 
                } 
            } 
            arr_49 [i_2] [i_7] [i_7] = ((/* implicit */int) 4240101190U);
        }
        arr_50 [0LL] = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)31680)))) * (((/* implicit */int) (unsigned short)16282))));
    }
    for (int i_11 = 2; i_11 < 24; i_11 += 3) 
    {
        arr_54 [i_11] [i_11] = ((/* implicit */unsigned int) var_1);
        arr_55 [19U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((var_1) > (((/* implicit */int) ((arr_53 [i_11] [i_11]) == (((/* implicit */unsigned int) arr_52 [i_11] [22U])))))))), (((unsigned int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned short)2057)))))));
    }
    var_11 = (((!((!(((/* implicit */_Bool) 783014304)))))) ? (var_8) : (((/* implicit */long long int) var_1)));
}
