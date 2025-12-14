/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183455
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
    var_10 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (min(((~(18446744073709551598ULL))), (((/* implicit */unsigned long long int) min((var_3), (var_3))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (~(((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (arr_1 [i_0]) : (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
        var_13 += ((/* implicit */int) (~((+(27ULL)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : ((~(arr_5 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])));
        var_15 += ((/* implicit */unsigned int) (~(arr_4 [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        for (unsigned short i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_0 [i_2] [i_3]) ? (arr_5 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_3])))))) ? ((-(arr_5 [i_2 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [14ULL] [i_3])))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_4])) + ((-(arr_16 [i_2 + 1] [i_2] [i_3] [i_4] [i_5] [i_6])))))) ? ((~((-(((/* implicit */int) arr_7 [i_3])))))) : ((~(((/* implicit */int) arr_9 [9] [i_3 + 1] [i_4]))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(min((18446744073709551598ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (8388607LL)))))))))));
                                arr_19 [i_2] [i_3 - 1] [i_2] [i_5 - 1] [i_6] = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_10 [i_2 + 1]);
                    var_20 = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) <= (var_0))) ? ((((_Bool)1) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 8388589LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_3] [i_2])))))));
                    var_21 = ((/* implicit */long long int) var_2);
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_26 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */int) (~(7053059862149268956LL)));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_8 - 1] [i_3] [i_8]) ? (((/* implicit */int) arr_9 [i_8 - 1] [i_3 - 2] [i_3])) : (((/* implicit */int) arr_9 [i_8 - 1] [i_3] [3]))))) ? (((/* implicit */unsigned int) (-(arr_16 [i_8 - 1] [(unsigned char)5] [i_8 - 1] [(unsigned char)5] [i_3 + 1] [i_3])))) : (((((/* implicit */_Bool) 4503565267632128ULL)) ? (1350588499U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (int i_9 = 3; i_9 < 13; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                arr_33 [i_2] [i_2] [i_2] [i_2] [i_9] [i_10] [14U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_7 [i_2]))))))) ? ((~(((/* implicit */int) (signed char)12)))) : ((~(((/* implicit */int) arr_23 [i_3 - 1] [i_2 + 1]))))));
                                var_23 += ((/* implicit */unsigned char) (~(((/* implicit */int) (short)18))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_20 [i_9 + 1] [i_3 - 2] [i_2]))));
                    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_2]))));
                    var_26 = ((/* implicit */unsigned long long int) (~(min(((~(var_2))), (((/* implicit */unsigned int) arr_10 [i_2 - 1]))))));
                }
                arr_34 [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 2] [i_2] [2U])) : (((/* implicit */int) arr_13 [i_2 + 1] [i_3 - 2] [i_3 + 1] [i_3 + 1]))))));
            }
        } 
    } 
}
