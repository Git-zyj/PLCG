/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156751
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
    var_17 = var_3;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((215187901U) > (var_1))))))) >= (((((/* implicit */_Bool) (+(var_7)))) ? (max((((/* implicit */unsigned int) (unsigned char)6)), (arr_1 [i_0]))) : (((342267486U) + (var_15)))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((var_7) != (max((((/* implicit */unsigned int) (unsigned char)116)), (var_12)))));
                arr_8 [i_1] [i_1] = (+(((unsigned int) (unsigned char)116)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                arr_16 [0U] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)110))) ? (((((/* implicit */_Bool) 342267486U)) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3))) : (arr_14 [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) max(((unsigned char)146), (arr_9 [i_2] [i_2])))))))));
                arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) max((var_0), (max((arr_12 [i_2 + 1]), (arr_12 [i_2 + 1])))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            arr_24 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)28), (arr_9 [i_2] [i_2])))) && ((!(((/* implicit */_Bool) 4193026168U))))));
                            arr_25 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2932288748U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2]))) : (var_3)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_30 [(unsigned char)4] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_23 [i_2] [8U] [i_2 + 2] [i_7 - 1])))), (((/* implicit */int) (unsigned char)253))));
                            arr_31 [(unsigned char)8] [i_2] [i_2] [6U] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_1), (((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            arr_39 [(unsigned char)8] [i_8] [i_8] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_9] [i_8] [i_8] [i_9])) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))) : (arr_27 [i_2] [i_3] [i_8]))) - (36U)))))) > (((max((var_11), (1696956100U))) >> (((((/* implicit */int) var_4)) % (((/* implicit */int) var_4))))))));
                            arr_40 [13U] [i_9] [i_8] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_11 [i_2])) && (((/* implicit */_Bool) (unsigned char)110))))));
                            arr_41 [i_2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3486101010U)) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2396119431U)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_2] [i_9] [i_8] [i_9])))))) && (((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_2 + 2] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = var_7;
    var_19 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((var_14), (((unsigned int) var_14)))));
}
