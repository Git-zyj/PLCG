/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130892
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
    var_15 -= ((/* implicit */signed char) var_2);
    var_16 = ((/* implicit */int) min((var_16), (var_8)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] [i_0] = arr_4 [i_0] [i_1] [i_1];
                    var_17 += ((/* implicit */signed char) var_7);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9201757746551593602LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_1] [i_3] [i_1] [i_0]))));
                                arr_17 [0ULL] [i_3] [i_3] [(short)10] [0ULL] [0ULL] = ((/* implicit */unsigned short) (~(18014123631575040LL)));
                                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (arr_9 [(signed char)2] [i_0] [i_2 - 1] [i_3] [4LL] [i_2 - 1]) : (var_8))) / ((-(var_11)))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_14)) : (var_11))) << (((var_5) - (2057480733)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_0] [(signed char)5] = var_8;
                                var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_3 [i_0] [i_6]))) - (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_5] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
                        /* LoopSeq 1 */
                        for (short i_8 = 1; i_8 < 10; i_8 += 4) 
                        {
                            arr_31 [i_0] [i_8] [i_0] [(signed char)2] = ((/* implicit */signed char) var_10);
                            var_20 -= ((/* implicit */_Bool) var_13);
                        }
                        arr_32 [i_0] [i_1 + 1] [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_1 + 1] [i_2 - 1]))));
                    }
                    for (short i_9 = 1; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) (~(-1656942764)));
                        var_22 += ((/* implicit */_Bool) ((arr_21 [i_0] [i_1 - 1] [i_2] [i_2 - 1] [i_9 + 1]) / (arr_21 [i_0] [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_9 + 2])));
                        arr_35 [i_1] [i_1] [i_2] [(short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_9] [i_9 + 2]))))) && (((/* implicit */_Bool) arr_30 [i_0] [i_0] [2] [i_1 - 1] [i_9 - 1] [i_0]))));
                    }
                    for (short i_10 = 1; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        arr_38 [i_0] [i_0] [(unsigned short)8] [i_0] [i_0] [i_10] = ((/* implicit */signed char) var_2);
                        arr_39 [i_0] [i_10] = var_11;
                    }
                }
                var_23 = ((((/* implicit */_Bool) (+(((long long int) (unsigned char)138))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_10 [i_0] [i_1 - 3] [i_0] [i_1] [i_0] [i_1 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) var_2))))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (signed char i_12 = 2; i_12 < 11; i_12 += 2) 
                    {
                        {
                            var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_10), (var_7))), (((/* implicit */unsigned short) var_0))))) ? (max((((((/* implicit */_Bool) -18014123631575040LL)) ? (18014123631575039LL) : (6137139023328785586LL))), (((/* implicit */long long int) arr_34 [1U] [i_1] [i_1] [i_11] [i_12])))) : (((long long int) arr_9 [(signed char)2] [i_1] [i_12 - 1] [(signed char)2] [i_11] [i_11]))));
                            var_25 = ((/* implicit */long long int) var_5);
                            arr_44 [i_0] [i_1] [i_11] [i_12 - 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_19 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_36 [i_12 - 2] [i_1]) > (((/* implicit */unsigned long long int) arr_19 [i_1] [i_11] [i_12 - 1])))))) : (max((((/* implicit */long long int) var_12)), (arr_19 [i_0] [i_1 - 1] [i_11])))));
                        }
                    } 
                } 
                arr_45 [(unsigned char)3] [i_0] = (-((~(((((/* implicit */int) arr_5 [i_0] [i_0] [8ULL] [8ULL])) - (var_8))))));
            }
        } 
    } 
    var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (var_5)))))) ? (max(((~(var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-1)), (12LL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_14)))))))));
}
