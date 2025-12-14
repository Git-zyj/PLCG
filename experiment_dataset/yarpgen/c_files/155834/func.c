/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155834
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)27265))))) ? (max((((/* implicit */int) arr_0 [i_1] [i_1])), (arr_3 [i_1]))) : (((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */_Bool) var_1)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (1634782005U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27265)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) arr_6 [i_0])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((short) arr_5 [i_3] [i_3]))) : ((-(((/* implicit */int) (signed char)0)))))))));
                                arr_17 [i_0] [i_1] [i_0] [i_2] [i_1] [i_0] [i_0] = ((((/* implicit */int) arr_15 [i_0] [i_0 - 2] [i_1] [i_2] [i_3] [i_3] [i_4 + 1])) == (((/* implicit */int) (short)2689)));
                                var_15 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]);
                            }
                            for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [13] [i_3] [i_3]);
                                var_17 -= ((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_0] [i_2] [i_1] [i_1] [i_0]);
                                arr_22 [i_0] [i_0] [i_1] [(unsigned short)11] [i_0] [i_5] = ((/* implicit */unsigned int) ((_Bool) arr_2 [i_0]));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_0 + 4] [i_3] [i_0 + 4] [i_0 - 2] [i_0])) ? (arr_13 [(_Bool)1] [i_0 - 1] [i_1] [i_0 + 2] [i_0 - 1] [i_0]) : (arr_13 [i_3] [i_2] [i_2] [i_0 - 2] [i_0 + 4] [5U]))))));
                            }
                            for (short i_6 = 3; i_6 < 11; i_6 += 4) 
                            {
                                arr_26 [i_1] [i_1] [i_0] &= ((/* implicit */unsigned char) ((var_5) ? ((+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1])) == (((/* implicit */int) (signed char)0))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_6] [i_3] [i_2] [i_0] [i_0])) | (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1]))))))))));
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0 + 4])))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((/* implicit */int) min(((!(((/* implicit */_Bool) arr_18 [i_3] [i_1] [i_1] [i_1] [i_3])))), ((((_Bool)1) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (max((((((/* implicit */_Bool) (unsigned short)27277)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_6 [i_3])))), (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])))))))));
                                var_20 = arr_0 [i_0] [i_1];
                            }
                            arr_27 [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(min((arr_9 [i_0] [i_2] [i_0]), (var_8)))));
                            arr_28 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_24 [i_2] [i_2]) / (((/* implicit */int) (short)2689))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                arr_29 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_2)))) ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    var_22 += ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            {
                arr_35 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) ((arr_13 [i_7] [i_7] [i_7] [i_8] [i_8] [i_8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_4 [i_7] [i_7]))))))))) : (((/* implicit */int) min((arr_0 [i_7] [i_7]), (arr_0 [i_7] [i_7]))))));
                arr_36 [i_7] [i_7] = ((/* implicit */unsigned int) arr_4 [i_7] [i_7]);
                var_23 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_8] [i_8])))), (((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_7] [8U] [i_7])) ? (((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_8] [i_7])) : (((/* implicit */int) arr_21 [i_7] [i_7] [i_8] [i_7] [i_8]))))));
            }
        } 
    } 
}
