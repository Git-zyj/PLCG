/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158608
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) : (((unsigned int) arr_2 [i_2])))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(var_4)))) ^ (((unsigned long long int) var_1)))))));
            }
            for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                var_15 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) -9223372036854775807LL)) : (((unsigned long long int) arr_5 [i_0] [i_3] [i_3 + 4] [i_3]))));
                arr_11 [i_0] [i_1] [i_3 + 3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_3]) + (((/* implicit */unsigned long long int) arr_9 [i_3])))))));
            }
            arr_12 [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned int) ((_Bool) -2001785447));
        }
        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) (-((-(9223372036854775789LL)))));
            arr_17 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0]))));
        }
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_3 [(signed char)8]))))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_18 *= ((int) ((-657557669) + (arr_1 [i_0 - 1] [i_5])));
            arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) + (-9223372036854775807LL)));
        }
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_19 = ((/* implicit */short) 1984123381699951511ULL);
        arr_24 [i_6] [i_6 - 1] = ((/* implicit */short) (+(arr_1 [i_6 - 1] [i_6 - 1])));
        var_20 *= ((/* implicit */unsigned int) arr_7 [(unsigned short)14] [i_6] [i_6]);
    }
    for (short i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        arr_27 [i_7 + 1] = ((/* implicit */unsigned long long int) ((-9223372036854775807LL) / (((/* implicit */long long int) max(((-(((/* implicit */int) arr_22 [7U])))), (((/* implicit */int) arr_4 [i_7])))))));
        /* LoopSeq 1 */
        for (int i_8 = 3; i_8 < 8; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) max((((/* implicit */unsigned char) ((2001785447) > (((/* implicit */int) (_Bool)0))))), (arr_6 [i_8] [i_9] [i_10])));
                        var_22 = (((_Bool)1) ? (var_4) : ((+(((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [i_7 - 1] [i_7] [i_7])))))))));
                        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) var_7)), (arr_31 [i_7 - 1] [i_7] [(signed char)7])))) ? (((int) var_6)) : (((/* implicit */int) max(((signed char)76), (((/* implicit */signed char) (_Bool)1)))))));
                        arr_34 [i_7] [i_7] [i_7] [i_7] = max(((+(arr_3 [i_10]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_22 [i_7 + 1])), ((~(arr_1 [13LL] [i_10])))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) -2001785447)) ? ((-(9223372036854775803LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-13923))))), (((/* implicit */long long int) ((4294967273U) > (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_16 [i_7] [i_11])), (var_2))))))))));
                var_25 = ((/* implicit */unsigned int) var_6);
                var_26 = max(((-(((/* implicit */int) arr_5 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) arr_8 [i_7] [i_7] [i_7] [i_7 - 1]))))) || ((_Bool)1)))));
            }
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_23 [i_7 - 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_7 - 1] [i_8 + 2])) ? (((/* implicit */int) arr_5 [13] [(signed char)16] [i_8 - 3] [i_8])) : (((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned int) (unsigned short)65535)), (arr_26 [i_7 + 1] [i_8 - 3])))));
            var_28 = ((/* implicit */int) min((var_28), (max((((int) ((((/* implicit */long long int) arr_8 [i_7] [i_7] [i_7] [(short)7])) == (arr_30 [i_7] [i_8 - 3] [i_7])))), (1056587969)))));
        }
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)0)), (2001785445)))), (var_10)))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_15 [i_7]))))))) : ((-(arr_3 [i_7])))));
    }
}
