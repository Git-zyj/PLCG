/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121023
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
    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)0))));
    var_12 = ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned long long int) var_10)), (var_9))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-25)), (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */long long int) min((max((max((((/* implicit */unsigned int) (signed char)26)), (var_4))), (((((/* implicit */_Bool) var_9)) ? (arr_2 [(unsigned char)2] [(unsigned char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))))))), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) (signed char)-112)), ((unsigned short)22155))), (((/* implicit */unsigned short) ((signed char) var_0))))))));
                    var_14 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_2 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */_Bool) (~(arr_8 [i_1] [18LL] [i_3] [i_1])));
                                arr_13 [i_0] [1LL] [i_2 + 3] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_2 + 3])) ? (arr_9 [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)24))))))));
                                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 9223372036854775807LL))) ? (((/* implicit */int) min(((unsigned short)22155), (((/* implicit */unsigned short) var_8))))) : ((+(((/* implicit */int) (short)-12305))))));
                                var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)19)), (arr_5 [23] [23] [23] [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    arr_21 [i_7] [i_5] [i_5] = ((/* implicit */int) ((signed char) (-(max((arr_1 [i_5]), (((/* implicit */unsigned long long int) arr_17 [i_5] [i_6] [i_6 + 2])))))));
                    /* LoopSeq 2 */
                    for (int i_8 = 3; i_8 < 21; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((unsigned long long int) 536838144))));
                        arr_24 [i_5 + 1] [i_5 + 1] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)41201))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_9] [i_9] = 4294967284U;
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (short)16715))));
                        /* LoopSeq 4 */
                        for (int i_10 = 1; i_10 < 18; i_10 += 1) 
                        {
                            var_19 ^= ((/* implicit */short) ((unsigned int) (-(2739154238U))));
                            arr_31 [i_9] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_5] [i_9] = ((/* implicit */signed char) ((unsigned char) arr_25 [i_5] [i_5] [i_5] [i_9] [i_5]));
                            arr_32 [i_5] [i_9] [i_7] [i_9] [i_9] [i_10] |= (signed char)5;
                        }
                        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27440)) ? (arr_2 [i_5] [i_6]) : (((/* implicit */unsigned int) 0)))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_5] [i_6 - 1] [i_6 - 1])) ? (((unsigned long long int) arr_7 [i_5] [i_5] [i_5])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                        {
                            arr_37 [i_5] [i_6 + 1] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_3 [i_5] [(_Bool)1] [i_7]);
                            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_35 [i_6] [i_6] [i_6] [i_6 + 2] [i_12])));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 6039956135146962655ULL)) ? (((/* implicit */int) ((short) (unsigned short)62561))) : (((/* implicit */int) (short)24065))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((((arr_18 [i_5 + 2] [i_5 + 2] [i_5 - 1]) + (2147483647))) << (((((((/* implicit */int) ((signed char) var_0))) + (50))) - (20)))));
                            arr_41 [i_5] [i_6 + 2] [i_6 + 2] [i_5] [(signed char)17] [i_13] = (unsigned short)2742;
                        }
                    }
                    var_25 += ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) (signed char)94)), (var_9))));
                }
            } 
        } 
    } 
}
