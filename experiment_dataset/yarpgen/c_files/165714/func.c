/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165714
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) arr_0 [i_0 - 2] [i_0])))));
        arr_3 [9LL] = ((/* implicit */_Bool) var_0);
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_12))))) > (arr_9 [i_1] [i_2])));
            var_20 += ((/* implicit */unsigned int) ((((/* implicit */long long int) min((min((var_14), (((/* implicit */int) var_5)))), (((/* implicit */int) ((_Bool) var_1)))))) == (((((/* implicit */_Bool) 4294967295U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-85)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_21 = ((/* implicit */long long int) arr_5 [i_1] [i_3]);
            arr_12 [i_1] = (((+(arr_4 [i_1] [i_3]))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) * (var_1))) - (2101554489U))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned long long int) ((((var_16) >> (((((/* implicit */int) (unsigned short)15598)) - (15564))))) <= (((/* implicit */unsigned long long int) ((unsigned int) ((short) (short)-3346))))));
                        arr_19 [i_3] [i_4] = ((/* implicit */_Bool) ((arr_4 [i_5] [i_4]) << (min((0U), (((/* implicit */unsigned int) (unsigned short)15598))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 4; i_7 < 23; i_7 += 3) 
                {
                    {
                        arr_26 [i_1] [i_3] [i_6] [i_6] = ((((/* implicit */unsigned long long int) 2177290083U)) + (((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_6 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) (-(arr_9 [(unsigned short)18] [i_6])))) : (((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))))));
                        var_23 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)15602)))) << (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            var_24 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_7 - 4] [i_1] [i_1] [i_8] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49935)) ^ (((/* implicit */int) (unsigned char)156))))) : (min((4611686018427387904ULL), (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_7] [i_6])))))))));
                            var_25 = ((/* implicit */signed char) var_12);
                            arr_29 [12U] [i_3] [12U] [i_3] [i_3] [i_3] [(unsigned char)11] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8198161993052838849LL)) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) : (var_16)))))) ? (min((((/* implicit */unsigned long long int) arr_27 [i_1] [i_7 - 1] [i_7 - 1] [i_7] [i_8])), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_27 [i_3] [i_7 - 1] [i_3] [i_3] [i_1]))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3346)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7 - 2] [i_3]))) : (arr_21 [i_6] [i_3])))) ? (((long long int) min((1129293433U), (((/* implicit */unsigned int) var_12))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_1])) >> (((var_16) - (16255269424719406051ULL)))))) ? (arr_18 [i_6] [i_7 + 1] [i_6]) : (var_0)))))))));
                        }
                        for (int i_9 = 2; i_9 < 24; i_9 += 2) 
                        {
                            arr_33 [i_1] [i_3] [i_6] [i_1] [i_9] [i_6] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20945))) : (((var_15) + (((/* implicit */unsigned long long int) arr_24 [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7]))))));
                            var_27 = ((/* implicit */_Bool) var_16);
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((unsigned int) 13835058055282163700ULL)) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))))))));
                        }
                    }
                } 
            } 
        }
        arr_34 [(_Bool)1] [i_1] = ((/* implicit */signed char) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        arr_35 [i_1] = ((/* implicit */short) 18446744073709551605ULL);
    }
    var_29 = ((/* implicit */unsigned short) var_4);
}
