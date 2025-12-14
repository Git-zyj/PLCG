/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13272
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
    var_13 = ((/* implicit */unsigned int) var_9);
    var_14 = ((/* implicit */unsigned long long int) ((1113399810U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) var_7);
        var_16 = ((/* implicit */unsigned char) 2147483623);
    }
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2]))));
        var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */long long int) -1035659609)) : (((long long int) (-(((/* implicit */int) var_2)))))));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((arr_5 [i_2]) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2])))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 11; i_4 += 2) 
            {
                for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) arr_10 [i_2] [i_2] [i_2]);
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_12 [(_Bool)1] [i_3]))));
                        arr_15 [i_2] [i_3] [i_3] [i_4] [i_5] = (~(((((/* implicit */_Bool) arr_11 [i_5 + 3] [i_3] [i_4 - 2])) ? (((((-2147483619) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_2] [i_2])) + (139))))) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_5 + 3] [i_5 + 3])))));
                        var_22 = ((/* implicit */unsigned short) arr_14 [i_2] [i_5]);
                        /* LoopSeq 3 */
                        for (short i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_2] [i_3] [i_4 - 1] [(short)8] [i_6 + 1] [i_6] = ((/* implicit */unsigned char) arr_7 [i_2] [i_2]);
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) (_Bool)1))) && (((/* implicit */_Bool) arr_17 [(_Bool)1] [i_3] [i_3] [i_3] [i_3])))) ? (arr_16 [i_4] [i_4]) : (((/* implicit */unsigned int) arr_10 [i_6] [i_5] [i_2]))));
                        }
                        for (short i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            arr_23 [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((-(arr_14 [i_2] [i_2]))), (((/* implicit */unsigned long long int) (short)30530)))))));
                            var_23 = ((/* implicit */unsigned int) arr_22 [i_2] [i_3]);
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-27006))));
                            arr_24 [i_3] [i_4] [i_7] = ((/* implicit */long long int) arr_8 [i_2]);
                            var_25 = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 1) 
                        {
                            arr_28 [i_8] [i_5 - 1] [i_4 - 2] [i_3] [i_8] = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((arr_18 [i_2] [i_3] [3] [i_5] [i_8] [i_8] [3]) * (((/* implicit */int) (_Bool)1))))) > ((((_Bool)1) ? (4294967295U) : (arr_11 [i_3] [i_3] [i_8])))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */unsigned long long int) var_8)) + (arr_21 [i_4 - 2] [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_8 + 1] [i_8 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_21 [i_4 - 2] [i_5 + 2] [i_5 + 3] [i_5 - 1] [i_8 - 1] [i_8 - 1]))))));
                            arr_29 [i_2] [i_3] [(_Bool)0] [i_8] [i_8] [i_2] [10] = ((/* implicit */_Bool) var_9);
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(arr_26 [i_5 - 1] [i_5] [(unsigned char)8] [i_2] [i_5 - 1] [i_5]))))));
                        }
                    }
                } 
            } 
        } 
        arr_30 [i_2] = ((/* implicit */int) arr_14 [i_2] [i_2]);
        arr_31 [i_2] [i_2] &= ((/* implicit */signed char) var_7);
    }
}
