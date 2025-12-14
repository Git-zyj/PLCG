/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182467
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
    var_20 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)0)))))));
                                arr_12 [2] [i_1] [2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [(unsigned short)12] [i_1] [i_1] [i_3] [i_2]))))) ? (min((((((/* implicit */int) (unsigned char)246)) ^ (((/* implicit */int) arr_7 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_1])))), (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) max((arr_6 [i_1] [i_1] [i_1 + 1] [i_3 - 1] [i_1 + 1]), (arr_6 [i_0] [i_1] [i_1 + 1] [i_3 - 1] [i_3 - 1]))))));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_1 [i_2] [i_1])), (((unsigned char) arr_4 [i_2 + 1] [i_1 - 1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (long long int i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            {
                arr_19 [i_5] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) arr_18 [i_5] [i_5] [i_6])))));
                var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_6 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) (unsigned char)255)))))))) : (min(((~(-1058342701))), (((/* implicit */int) arr_18 [i_6] [i_6] [i_6 - 2]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (int i_9 = 3; i_9 < 14; i_9 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) arr_24 [i_7] [i_7] [i_7] [i_7]);
                    arr_28 [i_9] [i_7] [i_7] [i_7] &= ((/* implicit */_Bool) max((((unsigned char) ((arr_25 [i_7] [i_8] [i_9]) * (((/* implicit */long long int) 0U))))), (((unsigned char) arr_18 [i_7 - 1] [i_8] [i_7 - 1]))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */int) -21LL);
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_31 [i_7] [i_8] [i_8] [i_9] [i_10] [i_11]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 |= ((/* implicit */unsigned char) (-((+(var_15)))));
}
