/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116839
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-(var_6))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_14))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 *= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))) : (max((max((var_3), (((/* implicit */unsigned long long int) (unsigned char)88)))), (1209286318462918735ULL))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (unsigned char)167);
                                var_20 += ((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-88)) > (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_4]))))), (arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2 + 3] [(unsigned char)9]))) : (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 - 3]))) : (3375144223U))));
                                var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88))) : (21ULL)))))) ? (((arr_6 [i_0] [i_0] [10U] [i_0] [10U] [i_0]) >> (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned char)181))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 2]))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) (((+(((((/* implicit */unsigned long long int) arr_7 [i_4] [i_3] [(unsigned short)9] [i_2] [i_1] [i_0])) - (arr_6 [i_0] [i_1] [i_2] [i_1] [i_3] [i_1]))))) % (((/* implicit */unsigned long long int) (-(min((1302555232178855491LL), (((/* implicit */long long int) arr_0 [i_4])))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)102)), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) << (((((/* implicit */int) max((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) - (138)))));
        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_5] [i_5] [i_5])), (arr_8 [i_5] [i_5] [i_5]))))));
    }
}
