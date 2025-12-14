/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186215
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
    var_18 = ((/* implicit */short) (+(min((((((/* implicit */_Bool) (unsigned short)32175)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33350))))), ((+(3557375688U)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((max((3012169785U), (max((((/* implicit */unsigned int) (unsigned short)32172)), (1282797515U))))) < (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)32169), ((unsigned short)33380))))))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_1] [i_2] [i_1])) : (arr_11 [i_2 - 3] [i_4] [i_2] [i_3] [i_4] [16U] [i_2])))) ? ((~(arr_11 [i_2 - 3] [1U] [i_2 - 1] [i_1] [i_4] [i_3] [i_3]))) : (((arr_11 [i_2 - 2] [i_1] [i_1] [i_2] [(unsigned char)12] [i_1] [(unsigned char)12]) | (arr_11 [i_2 - 1] [i_2 - 1] [i_2] [i_3] [i_0] [i_3] [i_4]))))))));
                                var_21 = ((/* implicit */short) min((1282797511U), (((/* implicit */unsigned int) arr_0 [(unsigned short)5]))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 3; i_5 < 15; i_5 += 4) 
                            {
                                var_22 += ((/* implicit */_Bool) ((arr_8 [i_1] [i_2 + 1] [i_1] [i_5 + 1]) + (arr_8 [i_1] [i_2 + 1] [i_5] [i_5 - 1])));
                                arr_15 [i_0] [i_1] [(unsigned char)11] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -453345878)) ? (3893365143U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32175)))));
                                arr_16 [i_3] [i_3] [i_2] [(signed char)11] [i_5 + 1] = ((/* implicit */_Bool) (+(arr_8 [i_0] [i_0] [8U] [i_5])));
                            }
                            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                            {
                                arr_20 [i_3] [i_1] [(unsigned short)16] [5LL] [(unsigned short)16] = ((/* implicit */signed char) (short)-10891);
                                var_23 = ((/* implicit */int) 3012169785U);
                            }
                            var_24 += ((/* implicit */short) (-(882989831U)));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_1))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        {
                            arr_26 [i_0] [7U] [i_7] [i_8] = ((/* implicit */unsigned short) -360844379536888557LL);
                            arr_27 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */long long int) (-(((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_11 [i_8] [i_0] [i_0] [i_0] [7U] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_14 [i_0] [(unsigned char)7] [i_0] [i_7] [i_7] [i_8])))))));
                            var_26 &= (-(3012169778U));
                        }
                    } 
                } 
            }
        } 
    } 
}
