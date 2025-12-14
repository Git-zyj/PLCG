/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169751
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
    var_11 = ((/* implicit */short) var_10);
    var_12 |= ((/* implicit */short) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_12 [13LL] [i_2] = ((/* implicit */int) ((unsigned char) 133693440U));
                                arr_13 [i_0] [i_1] [i_0] [8] [i_2] [i_3 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_11 [i_0 - 1] [i_3 + 1]))));
                                arr_14 [i_2] [i_3] [i_0 - 2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((_Bool) arr_10 [(short)14] [i_0] [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) 4161273855U)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (signed char i_6 = 2; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */short) var_10);
                                arr_22 [i_0 - 2] [i_5] [i_2] = ((/* implicit */unsigned short) 133693441U);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [(signed char)12] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */int) arr_20 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) var_10)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 12; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    arr_31 [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_27 [i_8] [i_8 + 1] [i_8]), (((/* implicit */long long int) arr_26 [i_8 + 1] [i_8])))))));
                    arr_32 [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) (~(var_1)));
                }
            } 
        } 
        arr_33 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((+((+(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        arr_34 [i_7] = ((/* implicit */_Bool) (unsigned char)255);
        arr_35 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)2)) < (((/* implicit */int) (short)-1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) 5ULL)))))) : (max((arr_5 [i_7] [i_7]), (arr_5 [i_7] [i_7])))));
    }
    for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        arr_38 [i_10] = ((/* implicit */unsigned short) var_1);
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (min((arr_1 [i_10] [13U]), (((/* implicit */unsigned char) arr_24 [i_10]))))))) | ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_17 [i_10] [i_10] [i_10] [i_10] [i_10]))))))));
    }
}
