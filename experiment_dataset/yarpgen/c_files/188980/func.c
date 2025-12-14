/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188980
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
    var_16 = var_0;
    var_17 = ((/* implicit */unsigned char) max((var_14), (var_8)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */_Bool) min((arr_4 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))));
                arr_5 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_0 [i_0]) * (9355685242909001033ULL))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (max((min((((/* implicit */unsigned long long int) (short)28281)), (9355685242909001037ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_3)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_19 ^= ((/* implicit */unsigned int) (short)28288);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_20 *= ((/* implicit */unsigned short) ((arr_0 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [(unsigned char)0] [i_3] [i_2] [i_1])))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                        {
                            arr_15 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (signed char)-67)))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)24)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1568817341U)))))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [8ULL])))))));
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) (~(var_13)));
                        }
                        for (short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_3] [(signed char)7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (((((/* implicit */_Bool) var_0)) ? (9091058830800550587ULL) : (((/* implicit */unsigned long long int) var_9))))));
                            arr_22 [(signed char)10] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9355685242909001024ULL)) ? (var_4) : (((/* implicit */unsigned long long int) arr_3 [i_0]))))) || (((/* implicit */_Bool) var_6))));
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)28281))));
                        }
                        for (short i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [9ULL] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_10 [i_6] [i_3] [i_2] [i_0]))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) arr_1 [(short)1])) : (((/* implicit */int) (short)-28281))));
                            var_25 = ((/* implicit */long long int) (~(var_6)));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                arr_34 [i_0] [i_7] [i_0] [i_1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_27 [i_8] [i_1] [i_2])))) < (((((/* implicit */_Bool) var_0)) ? (9091058830800550588ULL) : (var_12)))));
                                arr_35 [i_0] [i_1] [i_1] [i_7] [i_0] [i_8] = ((/* implicit */unsigned short) ((var_8) << (((var_6) + (1705796977)))));
                            }
                        } 
                    } 
                }
                arr_36 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) var_2))) <= (((/* implicit */int) arr_29 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((min((-2147483617), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4095))) <= (var_13)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (6689824597538437271ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))))));
        arr_40 [i_9] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9355685242909001037ULL))))), (((((/* implicit */_Bool) arr_39 [(unsigned char)13] [i_9])) ? (9091058830800550588ULL) : (7323929228910330131ULL))))), (max((4611686018427387903ULL), (9355685242909001033ULL)))));
    }
}
