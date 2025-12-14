/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112628
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                    var_18 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((var_12), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_0 + 1]))) - (4294967276U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)61608))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))));
                    arr_7 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2 + 1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_19 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned int) arr_3 [i_1]))))));
                        var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) 20U))))) | (((/* implicit */int) arr_6 [i_2 + 3] [i_0 + 1])));
                        var_21 = ((/* implicit */long long int) ((signed char) var_14));
                        var_22 = ((/* implicit */unsigned int) (+(arr_4 [i_3 + 1] [i_2 + 2] [i_2 + 1])));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_23 += ((/* implicit */_Bool) var_10);
                        arr_14 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 19U)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_15 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((long long int) 4232404652U));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (int i_8 = 2; i_8 < 19; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_25 += ((/* implicit */int) min(((unsigned short)37437), (((/* implicit */unsigned short) (_Bool)1))));
                                var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(215690548)))))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_15)))), (arr_24 [i_8 - 1] [i_9] [i_5 - 1] [i_6 - 1])))) : (min((arr_22 [i_9] [i_8] [i_5]), (((((/* implicit */_Bool) (unsigned short)46720)) ? (arr_22 [i_6] [i_5] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                } 
                var_27 *= ((/* implicit */unsigned char) ((unsigned short) (((-(((/* implicit */int) var_13)))) < (((/* implicit */int) min((var_3), (((/* implicit */short) var_2))))))));
                arr_28 [i_5] [i_6] [i_6] = ((/* implicit */int) arr_18 [i_6]);
            }
        } 
    } 
    var_28 = ((/* implicit */short) var_11);
    var_29 |= ((/* implicit */short) ((((/* implicit */int) var_8)) / (((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_13))))) << (((((((/* implicit */int) var_3)) | (((/* implicit */int) (short)256)))) - (20401)))))));
    /* LoopNest 2 */
    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 1) 
    {
        for (signed char i_11 = 4; i_11 < 18; i_11 += 4) 
        {
            {
                arr_33 [i_11] [0] [0] = ((/* implicit */short) arr_0 [i_10 - 1]);
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8)))) > ((+(arr_27 [i_10] [i_11] [i_10] [i_11 + 2])))));
                arr_34 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)480)) ? (((/* implicit */int) (short)16991)) : (((/* implicit */int) (short)-9173))));
                arr_35 [i_11] [i_10] [i_11] = (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_10)), (arr_8 [i_10] [i_10 - 1] [i_11] [i_11] [i_11] [i_10])))))));
            }
        } 
    } 
}
