/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178097
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (short)13269)) | (26)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) var_8);
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0]) : (var_4))) == (arr_6 [i_0] [i_1] [i_0] [i_0])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) var_10))))))) | (((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) arr_11 [i_6] [(short)8] [9U] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_13)), (arr_1 [i_2])))))))));
                                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_10 [i_0]) : (arr_10 [i_1]))));
                    var_23 |= ((/* implicit */int) max((max((((/* implicit */unsigned int) var_3)), (var_14))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [4] [4]))) : (var_17)))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_4 [i_8] [i_2] [i_1]))));
                                var_25 = ((/* implicit */_Bool) ((26) | (((/* implicit */int) (_Bool)0))));
                                var_26 -= ((/* implicit */_Bool) ((((/* implicit */int) max((var_3), (((/* implicit */short) arr_19 [i_0] [i_7 + 1] [i_2] [i_7] [i_7 + 1]))))) % (((/* implicit */int) arr_19 [i_0] [i_7 - 1] [i_2] [13ULL] [i_0]))));
                                arr_25 [i_0] [i_0] [i_0] [i_7] [i_8] = ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_9);
}
