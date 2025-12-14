/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111172
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
    var_17 = (-(var_9));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned short) (~(arr_6 [i_0 + 3] [i_0 + 3])));
                    var_18 = min((((/* implicit */unsigned short) (short)-12216)), (var_15));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 1])) ? (((9223372036854775807LL) >> (((/* implicit */int) (_Bool)0)))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3 + 2] [i_0 - 1]))))) ? (((/* implicit */int) ((268435455ULL) < (((/* implicit */unsigned long long int) 98304U))))) : ((-(((/* implicit */int) (unsigned short)62219))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (min((((/* implicit */long long int) ((((/* implicit */_Bool) 192)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) (signed char)79))))), (((var_10) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_9 [i_3] [i_3] [i_1] [i_1] [i_0 + 3] [5U]) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1])))))))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            arr_16 [i_4] [i_1] [i_2] &= ((/* implicit */_Bool) var_14);
                            var_20 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10)))), (min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_2])), (arr_5 [i_4] [i_1] [i_1]))))));
                        }
                        for (int i_5 = 1; i_5 < 14; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_0 - 2] [i_0 + 2] [(unsigned char)3] = ((/* implicit */unsigned char) -9223372036854775807LL);
                            var_21 += ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > ((-2147483647 - 1))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_12))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_1))));
                            arr_23 [i_6] = ((/* implicit */_Bool) (~(var_9)));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                        {
                            var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [8LL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-27))));
                            var_25 += ((/* implicit */short) (unsigned short)57004);
                        }
                    }
                }
            } 
        } 
    } 
    var_26 = var_4;
    var_27 = var_4;
    /* LoopSeq 1 */
    for (int i_8 = 4; i_8 < 16; i_8 += 2) 
    {
        arr_28 [i_8 - 3] [i_8] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)53656)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_27 [i_8 - 3] [i_8 - 3])))), (((((/* implicit */_Bool) (short)27)) ? (((/* implicit */int) arr_27 [i_8 + 1] [i_8])) : (-2147483637)))));
        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_8 + 1] [i_8 - 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_8 - 1] [i_8 - 1]))))) : (((/* implicit */int) ((unsigned char) arr_27 [i_8 + 2] [i_8 - 4])))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            arr_39 [i_12] = ((/* implicit */unsigned short) ((long long int) (unsigned short)21822));
                            arr_40 [i_8] [i_8] [7U] [i_11] [7U] [i_12] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_35 [5LL] [i_8 - 2] [i_8 + 1] [i_8])) ? (arr_35 [i_8 - 2] [i_8 - 3] [i_8 - 2] [i_8 - 2]) : (arr_35 [i_8] [i_8 + 1] [i_8] [i_8])))));
                        }
                        var_29 += ((/* implicit */unsigned short) min((((/* implicit */long long int) (((~(((/* implicit */int) arr_38 [(unsigned char)0] [i_11] [i_10])))) > (((/* implicit */int) ((signed char) arr_34 [(short)1] [i_8])))))), (((arr_37 [i_8] [i_8] [i_8] [i_8 - 2] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_35 [(unsigned short)2] [i_9] [(short)3] [i_9])))));
                    }
                } 
            } 
        } 
    }
}
