/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114583
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
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) 3108767821U)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [i_1] [i_1] [i_3 + 3] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -441216602)))))));
                                var_17 *= ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) 11182287830754355772ULL)));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_4 [i_0] [i_4])) / (min((((/* implicit */unsigned int) (+(2147483647)))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) - (2666264743U)))))));
                                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_3] [9U])) : (2147483642)))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (((_Bool)1) ? (var_9) : (((/* implicit */long long int) 1769675608)))))))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((4294967279U) & (((/* implicit */unsigned int) -441216620)))) > (((/* implicit */unsigned int) var_7)))))));
                    arr_15 [(short)16] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) & (arr_5 [i_0] [i_0] [i_0])))))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) 7078629804613234331LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [(signed char)8] [i_1] [(unsigned char)2] [i_1] [(signed char)8]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_3))))))))))));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)140)) : (arr_7 [i_0 - 2] [i_5] [i_5] [i_5] [i_0] [i_5]))))));
                }
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    arr_18 [i_6] [8] [8] [(signed char)6] &= ((/* implicit */int) (+(max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (max((var_8), (((/* implicit */long long int) var_12))))))));
                    var_24 = ((/* implicit */unsigned char) var_5);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (((-(arr_21 [i_7 - 1] [i_7 - 1]))) / (((/* implicit */unsigned int) ((-1308504442) % (((/* implicit */int) arr_22 [i_7 + 1] [i_7 + 1]))))))))));
        arr_23 [i_7] = ((/* implicit */signed char) ((var_12) < ((-((-(-1272256984)))))));
    }
    var_26 = ((/* implicit */unsigned long long int) ((long long int) ((((415867530U) - (((/* implicit */unsigned int) var_7)))) >= (var_3))));
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_6))));
}
