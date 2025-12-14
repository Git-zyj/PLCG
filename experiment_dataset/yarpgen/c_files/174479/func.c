/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174479
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
    var_19 &= ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (var_7)))) ? (var_2) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) ((signed char) arr_2 [i_1]));
                    arr_9 [i_0] [i_1] [(_Bool)0] = ((/* implicit */signed char) arr_1 [(short)12] [(unsigned char)0]);
                }
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_3] [(_Bool)1] [i_5])) ? (arr_11 [i_0] [i_0] [i_0] [8U]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_4] [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_0] [13ULL] [i_0] [i_0]))))))));
                                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_1])) ? (((unsigned int) arr_13 [i_4] [i_1] [i_4])) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3 + 3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_4] [(unsigned short)8] [i_4] [i_4] [i_5]))) : (arr_12 [16ULL] [i_1] [i_3] [i_3] [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((int) arr_8 [i_0] [(unsigned short)1] [7U]))))) : (((((/* implicit */_Bool) arr_2 [i_5])) ? (((unsigned int) arr_2 [(signed char)16])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_3] [i_3] [(unsigned short)11] [i_1]);
                }
                /* LoopSeq 2 */
                for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) arr_18 [i_1]);
                    var_23 = ((/* implicit */unsigned short) arr_0 [i_1]);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)246)) ? (228271922) : (((/* implicit */int) arr_2 [8LL])))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_7])) ? (arr_22 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [9U] [9U]))))))) : (((/* implicit */int) arr_1 [i_7] [i_7]))));
                    var_25 = ((/* implicit */long long int) arr_21 [i_1]);
                    var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_0] [(signed char)14] [14U]))) ? (((/* implicit */int) arr_20 [i_0] [(_Bool)1] [9])) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_7])) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_1] [(unsigned char)6])) : (((/* implicit */int) arr_14 [(_Bool)1] [(short)2] [i_7] [i_1] [(short)2] [i_0]))))))) ? (((long long int) ((int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned int) arr_10 [8U] [(short)12] [8U] [8])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_21 [i_0])))))))));
                }
                var_27 = ((/* implicit */unsigned int) ((unsigned long long int) arr_15 [i_0] [i_1] [i_1] [i_0] [i_1] [14U] [i_1]));
            }
        } 
    } 
}
