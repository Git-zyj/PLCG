/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152287
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_15 [i_0] [(unsigned short)4] [i_1] [i_0] = ((/* implicit */short) (-(arr_2 [i_2])));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)16384)) && (((/* implicit */_Bool) arr_5 [1U] [1U])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [14ULL] [i_0] [i_3] [i_0] [i_0]))) : (((long long int) 0U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 8646911284551352320ULL)))) : (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (var_18))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1 - 1] [i_2] [i_0]))))))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_2]))));
                                arr_18 [i_1] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [(_Bool)1]);
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_9 [i_0] [i_1] [(unsigned short)6]) : (((/* implicit */unsigned int) arr_0 [i_0] [i_1]))));
                            }
                            for (short i_5 = 3; i_5 < 21; i_5 += 2) 
                            {
                                var_23 = ((/* implicit */short) ((long long int) ((((unsigned long long int) arr_11 [i_0] [i_1] [(unsigned short)18])) << (((125829120U) - (125829074U))))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned long long int) -1302701895)))));
                                var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_1 - 1] [i_1 - 1])) ? (((((/* implicit */int) arr_17 [i_5] [i_0] [i_0])) / (var_12))) : (((/* implicit */int) ((short) arr_4 [i_3] [i_2] [i_1]))))) / (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_16))))))));
                                var_26 = ((/* implicit */unsigned int) ((short) ((arr_14 [i_1 - 1] [i_2] [i_3] [i_5 + 1]) <= (arr_14 [i_3] [i_2] [i_1 - 1] [i_0]))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                            {
                                var_27 = arr_21 [i_1 - 1];
                                var_28 = ((((/* implicit */int) (short)-2283)) ^ (((/* implicit */int) var_11)));
                                arr_23 [8] [8] [i_2] [(signed char)13] [i_1] [(signed char)13] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                                var_29 = (+(arr_16 [i_1 - 1] [17ULL] [i_0] [i_0] [i_0]));
                            }
                        }
                    } 
                } 
                arr_24 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (-(((arr_1 [i_0] [i_1 - 1]) ? (arr_10 [i_1] [i_0] [i_0]) : (6499765521035108478ULL))))));
                arr_25 [i_1] [i_1] [(signed char)8] = ((((/* implicit */_Bool) arr_20 [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) 1278411230)) || (((/* implicit */_Bool) 10ULL))))), (((short) arr_2 [i_0]))))) : ((~(((/* implicit */int) ((((/* implicit */int) (short)-7028)) != (((/* implicit */int) var_11))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) var_2);
}
