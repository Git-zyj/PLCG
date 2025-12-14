/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149891
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
    var_15 = ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (arr_10 [i_0 - 1]))) : (((/* implicit */unsigned int) (+((+(var_8))))))));
                                arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) arr_12 [i_4] [i_3] [i_2] [(unsigned short)13]);
                                var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_3] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [i_2] [(unsigned short)4] [i_3] [i_4])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_11 [i_2] [0LL]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)31))));
                                arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) 4432026587257195331ULL);
                            }
                        } 
                    } 
                    arr_15 [0U] [i_2] = ((/* implicit */int) max((((/* implicit */short) (signed char)-121)), ((short)-31545)));
                    var_18 += ((/* implicit */unsigned short) 14014717486452356299ULL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                {
                    arr_23 [i_0] [6ULL] [i_6] [(unsigned short)8] = ((/* implicit */unsigned int) ((long long int) (-(max((((/* implicit */long long int) var_13)), (var_10))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)75))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((var_9) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [(signed char)13] [i_0] [i_6] [i_5] [i_0] [i_0])))))))));
                                arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_7] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_12 [i_7 - 2] [i_6 - 1] [i_5 + 1] [i_0 + 1]), (arr_12 [i_7 - 2] [i_6 - 1] [i_5 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_12 [i_7 - 2] [i_6 - 1] [i_5 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_12 [i_7 - 2] [i_6 - 1] [i_5 + 1] [i_0 + 1])) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -6365090078470290225LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (~(arr_28 [i_0] [i_0] [2LL] [6LL] [i_0 - 1] [(signed char)12] [4LL])));
    }
    for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_10 = 3; i_10 < 8; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_36 [i_10 - 1]))))));
                        arr_42 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_10])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_10] [i_11] [i_12])))))), (min((arr_17 [i_9]), (((/* implicit */unsigned long long int) var_2))))))) ? (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_10 [i_10 + 3]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10]))) : (arr_25 [i_11])))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) (unsigned char)155);
    }
}
