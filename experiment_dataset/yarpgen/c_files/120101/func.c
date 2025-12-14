/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120101
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
    var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 928202849)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-31932)))) : ((+(24)))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_2))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [(short)6]))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 41))));
                    arr_8 [14LL] [i_2] [(unsigned char)2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_8))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | ((+(((/* implicit */int) var_6))))));
                                var_15 = ((/* implicit */unsigned short) arr_10 [11ULL] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]);
                                arr_16 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                                var_16 = ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_5 = 2; i_5 < 6; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_2 [i_6] [i_6] [i_6])))))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) arr_9 [i_6 + 1])))))))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((short)32767), (((/* implicit */short) var_3))))), (((((/* implicit */_Bool) var_9)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), (max((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) var_3)), (arr_19 [i_5])))))))));
            var_20 = ((/* implicit */long long int) var_8);
            arr_22 [i_5 + 2] [i_5 + 2] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (((unsigned short) -22))));
        }
        arr_23 [i_5] = ((/* implicit */short) ((((_Bool) min((((/* implicit */short) (unsigned char)227)), (var_7)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
        var_21 = ((/* implicit */unsigned short) var_7);
        var_22 = ((/* implicit */short) arr_7 [i_5 - 1] [(unsigned short)7] [(signed char)5]);
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)54693), (((/* implicit */unsigned short) (short)13222))))) / (((/* implicit */int) var_5))))) || (var_1)));
                    var_24 = ((/* implicit */signed char) arr_14 [i_5 - 2]);
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_5 + 2] [i_5 - 2] [i_5 + 3])) * (((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)1] [i_7]))))) - ((~(((/* implicit */int) arr_18 [i_7] [i_8]))))))));
                    var_26 = ((/* implicit */short) min((46), (((/* implicit */int) (unsigned char)179))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            {
                                arr_33 [3ULL] [i_8] [i_8] [i_9] [i_10] [i_8] = ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_5)) / (((/* implicit */int) var_2)))) >= (((((/* implicit */int) arr_6 [i_8] [i_9] [(short)12])) | (((/* implicit */int) arr_13 [i_5] [i_5] [i_5 + 4] [i_5 + 2] [i_5] [i_5] [i_5])))))))) > (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)38253))))), (((((/* implicit */_Bool) 5011690261773850686ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9] [(signed char)4]))) : (-313369218764819339LL))))));
                                var_27 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_18 [i_5 - 2] [i_5 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_11 = 2; i_11 < 11; i_11 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_12 = 3; i_12 < 10; i_12 += 3) 
        {
            arr_39 [i_11] [i_11] &= ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_8)), (arr_15 [i_11 - 1] [i_11 - 1] [i_12 - 2] [i_12] [(signed char)12] [i_12]))), (((/* implicit */long long int) ((int) min((((/* implicit */short) (_Bool)1)), (var_0)))))));
            arr_40 [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-1))));
        }
        var_28 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_4)))))));
        arr_41 [i_11] = ((/* implicit */unsigned int) ((long long int) ((928202835) + (((/* implicit */int) (unsigned short)39787)))));
        /* LoopNest 2 */
        for (short i_13 = 1; i_13 < 10; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 4) 
            {
                {
                    arr_48 [i_14] [i_13] [i_13 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45678))) < (15632881006597836088ULL)))) : (((/* implicit */int) arr_0 [i_13 - 1] [i_13 + 1])))) & (((/* implicit */int) var_9))));
                    var_29 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) arr_5 [i_13 - 1] [i_13])), (arr_3 [i_13 + 2] [i_13] [i_13])))));
                }
            } 
        } 
        arr_49 [(unsigned short)8] [i_11] = ((/* implicit */unsigned long long int) var_0);
    }
    var_30 = ((/* implicit */unsigned char) var_9);
    var_31 = ((/* implicit */long long int) var_8);
}
