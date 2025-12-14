/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172801
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) (short)5884)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (short)12)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))))));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (short)32765))))), (((long long int) (short)32765))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((max((arr_1 [i_0]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (short)13794)))))));
    }
    for (int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            arr_10 [i_1] = ((-9223372036854775778LL) ^ (((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) arr_8 [(unsigned short)11] [i_1] [(unsigned short)11])) : (arr_6 [i_2]))) / (max((((/* implicit */long long int) var_4)), (-9223372036854775770LL))))));
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2636287877U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) : (-4708363592659549500LL))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((/* implicit */int) (short)-2061)))))));
            var_22 *= ((/* implicit */signed char) ((short) min((arr_6 [i_2 - 2]), (arr_6 [i_2 + 1]))));
            var_23 = ((/* implicit */unsigned long long int) (+(4265731101U)));
        }
        for (long long int i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            arr_13 [i_1] = ((/* implicit */long long int) arr_11 [i_1] [i_3]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned int) arr_15 [i_3] [i_6]);
                            var_25 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((short) (short)(-32767 - 1)))) : (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_3 + 3] [i_3 + 3]))));
            }
            arr_23 [i_1] [i_1 + 3] [i_1 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_3 + 3] [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (var_1)))) ? ((+(((((/* implicit */long long int) ((/* implicit */int) var_2))) - (arr_6 [(unsigned char)17]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_3] [i_3])))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 2; i_7 < 21; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            arr_30 [i_9] [i_9] [i_8] [i_1] [i_9] [i_3] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)4)), (4294967267U)));
                            var_27 = ((/* implicit */_Bool) 4294967267U);
                        }
                        var_28 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) var_6)) : (15475215827399212482ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                        arr_31 [i_8] [i_1] [i_3] [i_1] [i_1] = 4321466268966469437LL;
                    }
                } 
            } 
        }
        var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1 - 1] [i_1] [i_1] [i_1] [i_1]))) : (max((max((18446744073709551615ULL), (var_19))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
        var_30 = ((/* implicit */unsigned long long int) ((long long int) max(((~(17ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_12)))))));
    }
    var_31 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        for (signed char i_11 = 3; i_11 < 16; i_11 += 4) 
        {
            {
                arr_38 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_10] [i_10])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)4096)))) : (((((/* implicit */_Bool) -5066142649067424528LL)) ? (arr_26 [i_10] [i_10] [i_10] [i_11 - 3] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)57))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_11 - 1] [i_11] [i_11 - 3])) ? (((/* implicit */int) arr_34 [i_11])) : (((/* implicit */int) arr_34 [i_11])))))));
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (arr_29 [4LL] [i_11]) : (((/* implicit */long long int) max((((/* implicit */int) ((-4321466268966469437LL) > (4321466268966469440LL)))), (((((/* implicit */int) arr_35 [i_11])) % (((/* implicit */int) arr_22 [i_11] [20U] [i_11] [i_10] [1U])))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) ((unsigned int) (-(var_1))));
}
