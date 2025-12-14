/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185652
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
    var_11 = ((/* implicit */int) var_2);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (max((var_9), (var_6)))))) : (((((/* implicit */_Bool) max(((signed char)-30), (((/* implicit */signed char) var_3))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((var_6) != (((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (var_6)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_2] [i_2] [(signed char)8] [i_3] [i_3] = ((/* implicit */unsigned int) ((short) var_0));
                        var_14 = (-(((unsigned int) var_2)));
                    }
                    arr_11 [i_2] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) : (var_1));
                    arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) var_7)))));
                    var_15 = ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
        var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)))) ? (((/* implicit */int) var_3)) : (var_6)));
    }
    for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 16; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_23 [i_4] [i_7] [i_6 - 1] [(unsigned char)3] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_6)) : (max((((/* implicit */long long int) 4294967294U)), ((-9223372036854775807LL - 1LL)))))));
                        arr_24 [i_7] [i_6] [i_6] [(signed char)7] [i_4] [i_4] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_0)) / (var_6)))))));
                        arr_25 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((unsigned long long int) var_4)) : (max((var_1), (((/* implicit */unsigned long long int) var_3))))))));
                        arr_26 [14ULL] [i_5] [14ULL] [14ULL] = ((/* implicit */long long int) var_8);
                    }
                } 
            } 
            arr_27 [(signed char)9] [(signed char)9] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (var_6)))))), (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_9 = 2; i_9 < 15; i_9 += 2) 
            {
                arr_33 [i_4] [(signed char)2] [i_9] = ((/* implicit */signed char) var_7);
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    for (int i_11 = 3; i_11 < 13; i_11 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_9) : (var_6)));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
                            arr_40 [i_10] [i_10] [i_10] [i_10] [9U] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_0))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        }
                    } 
                } 
                arr_41 [i_9 + 2] [i_8] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (var_8))))));
                arr_42 [i_4] [(unsigned short)12] [(unsigned char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10))));
            }
            for (short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) var_5);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((short) var_3)))));
                    arr_50 [i_12] [i_8] [i_12] [i_13] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_5)))) + (2147483647))) >> (((((/* implicit */int) var_10)) + (40)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 15; i_14 += 3) 
                {
                    for (short i_15 = 4; i_15 < 16; i_15 += 1) 
                    {
                        {
                            arr_57 [i_4] [i_8] [i_14] [6] [i_15] = ((/* implicit */unsigned long long int) ((signed char) var_2));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        }
                    } 
                } 
            }
            arr_58 [i_8] [i_4] [i_4] = ((/* implicit */unsigned char) var_8);
            var_23 = ((/* implicit */long long int) ((signed char) -1));
        }
    }
    for (signed char i_16 = 0; i_16 < 15; i_16 += 3) 
    {
        arr_62 [i_16] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1)))))));
        var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_1)))));
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */int) min((var_4), (var_5)))), (var_9))) : (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 1) 
    {
        var_26 = ((/* implicit */short) min(((+(((/* implicit */int) min((var_5), (var_4)))))), (((/* implicit */int) ((signed char) var_9)))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))), (min((((((/* implicit */_Bool) (unsigned char)139)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (unsigned short)42964)))))))));
        var_28 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-2031207654) : (((/* implicit */int) (unsigned short)3873)))));
    }
}
