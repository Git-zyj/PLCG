/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136962
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (((((/* implicit */_Bool) ((var_13) / (((/* implicit */int) (short)-256))))) ? (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-996))) : (var_15))) : ((-(arr_4 [i_0] [i_0] [i_1 + 2])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((var_10) - (((/* implicit */unsigned long long int) var_15)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1]))))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((9223372036854767616ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))));
                            }
                            arr_16 [i_0] [(short)12] [i_2] [i_3] = ((/* implicit */short) var_16);
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_14 [i_1])) & (((/* implicit */int) (signed char)64)))))) ? (((((/* implicit */_Bool) (unsigned short)32937)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_6 [i_1 + 3] [i_1 - 2] [i_1 + 3] [i_1 - 2])))) : (((/* implicit */int) (unsigned char)21)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_2))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_15) : (arr_18 [i_5])))) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (var_7)));
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) & (arr_18 [i_5])));
    }
    for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_18 [i_6 - 1])))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> (((((unsigned int) ((((/* implicit */int) (short)17559)) | (((/* implicit */int) (short)-17553))))) - (4294967294U)))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((unsigned long long int) arr_20 [i_7 + 1])))));
            var_25 = (unsigned char)238;
        }
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */unsigned int) (~(min((var_7), (var_13)))))) < (arr_27 [i_6] [i_6] [i_6] [i_6 - 1]))))));
    }
}
