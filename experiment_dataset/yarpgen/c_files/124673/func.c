/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124673
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
    var_11 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) min((var_13), (((unsigned int) var_7))));
                        arr_10 [i_2] = ((/* implicit */short) var_4);
                        arr_11 [(unsigned char)4] [i_1] [(unsigned char)4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_8)) - (56182)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                var_14 += ((/* implicit */int) ((long long int) (unsigned short)55276));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_6))));
                var_16 = ((/* implicit */long long int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4))))))));
                var_17 = ((/* implicit */int) ((unsigned long long int) var_7));
            }
            var_18 *= ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) var_7)));
            arr_14 [(short)8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_9) != (var_9)))) - (((/* implicit */int) ((signed char) (unsigned char)222)))));
        }
        for (int i_5 = 3; i_5 < 18; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) var_10)) | (((/* implicit */int) var_5))))));
                arr_20 [i_6] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) var_7))));
            }
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))));
        }
        for (short i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) var_2);
            arr_24 [20U] [i_7] &= ((/* implicit */short) ((unsigned short) var_5));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                var_22 *= ((signed char) var_5);
                var_23 = ((/* implicit */unsigned int) ((short) var_10));
                arr_27 [i_7] [i_7 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4140863735U)) ? (8128) : (((/* implicit */int) (short)-23915))));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 18; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            arr_32 [i_8] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_8))));
                            arr_33 [i_10] [3LL] [i_7] [i_9] [(unsigned char)0] [i_7] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_2));
                            arr_34 [i_0] [i_7] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) var_2))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */unsigned short) ((unsigned long long int) ((int) var_6)));
        }
        for (unsigned short i_11 = 2; i_11 < 21; i_11 += 3) 
        {
            arr_38 [i_0] [i_11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((unsigned int) var_8)))));
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) ((var_9) / (var_7)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)));
                            var_27 = ((unsigned int) var_2);
                            var_28 = ((((/* implicit */int) var_5)) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))));
                            arr_48 [(unsigned char)6] [i_12] [(unsigned char)6] = ((/* implicit */int) var_1);
                            arr_49 [i_0] [i_11 - 2] [i_12] [i_13] [i_14] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        }
                    } 
                } 
            } 
            arr_50 [i_0] [i_11] = ((/* implicit */signed char) ((unsigned short) var_5));
        }
        /* LoopNest 2 */
        for (long long int i_15 = 2; i_15 < 21; i_15 += 3) 
        {
            for (unsigned char i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                {
                    arr_56 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) var_1));
                    arr_57 [i_16] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_5))));
                    arr_58 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) var_1)))) : (((/* implicit */int) ((_Bool) 6075135182581336509LL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 3; i_18 < 18; i_18 += 3) 
            {
                {
                    arr_66 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) - (var_4)));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_3)))) ? (var_3) : (var_3))) != (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (9054877329381482822ULL) : (((/* implicit */unsigned long long int) -799247509503815935LL)))))))))));
    var_31 = ((/* implicit */unsigned long long int) max((var_31), (var_3)));
}
