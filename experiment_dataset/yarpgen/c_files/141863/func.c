/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141863
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 2]))) - (min((2698700101U), (((/* implicit */unsigned int) arr_0 [i_1 + 4]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 9; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_7 [0U] [(unsigned char)7] [i_2 - 1])) : (var_13))));
                                arr_13 [i_4 + 4] [i_1] [i_2] [i_1] [i_0] = (_Bool)1;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_14)) + (var_13)));
                }
                for (int i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) (-(min((arr_4 [i_7 + 1]), (((/* implicit */long long int) (unsigned char)224))))));
                                arr_24 [i_0] [i_1] [i_1] [(_Bool)1] [i_6] [(_Bool)1] = (!(((/* implicit */_Bool) min((arr_11 [i_0] [i_5 + 2] [i_7] [i_7] [i_1] [i_7] [10ULL]), (arr_11 [i_1] [i_5 + 2] [i_7] [i_7] [i_1] [(unsigned char)5] [(short)3])))));
                                var_21 &= ((/* implicit */unsigned int) var_11);
                                arr_25 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned short)15520)) ? (8795166090712102043LL) : (((long long int) (_Bool)0)))) : (((long long int) min((((/* implicit */long long int) arr_1 [i_0])), (arr_11 [i_0] [i_1 - 3] [i_5] [i_6] [i_1] [i_7] [(unsigned short)5]))))));
                                var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_5] [i_7] [i_7] [i_7 - 2] [i_5] [i_7]) - (arr_8 [i_6] [i_7] [i_7] [i_7 - 1] [i_0] [i_7])))) ? (min((var_13), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) arr_8 [i_6] [i_7] [i_7] [i_7 - 1] [i_0] [i_7]))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [(unsigned char)0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)32767)) ? (1596267198U) : (((/* implicit */unsigned int) -1548385935)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)33651))))));
                    var_23 = (-(((((/* implicit */_Bool) arr_21 [i_1] [i_1])) ? (arr_11 [i_5] [i_5 - 2] [i_5] [i_5 - 1] [i_1] [i_5 - 1] [i_5 + 1]) : (arr_11 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_1] [i_5] [i_5 + 2]))));
                    arr_27 [(unsigned char)6] [i_1] [i_1] [(short)0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)224)) >= (((/* implicit */int) var_2)))))) * (min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) arr_3 [i_0] [i_1 + 2] [i_1 + 2])))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_8 = 4; i_8 < 17; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 1; i_10 < 19; i_10 += 3) 
            {
                {
                    var_24 = ((/* implicit */int) var_5);
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 4; i_11 < 20; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 2; i_12 < 19; i_12 += 3) 
                        {
                            {
                                arr_43 [i_9] [i_9] [i_9] [i_12 + 1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                                arr_44 [(unsigned char)3] [i_9] [i_10] [i_11] [i_9] [i_12 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11 - 2] [i_12 + 1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_12 - 1])))))) ? (((((/* implicit */_Bool) arr_35 [i_8] [(signed char)8] [i_8 + 4] [4U])) ? (((/* implicit */int) ((0) != (((/* implicit */int) var_11))))) : (((/* implicit */int) arr_39 [i_8])))) : (((/* implicit */int) ((((/* implicit */long long int) 1596267195U)) > (-5LL))))));
                                var_25 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_37 [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_37 [i_9])))));
                            }
                        } 
                    } 
                    arr_45 [i_8 - 4] [i_9] [i_9] = ((/* implicit */signed char) ((unsigned int) (+((+(var_15))))));
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */int) var_5);
    var_27 = ((((var_1) < (((/* implicit */int) (unsigned char)13)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)));
}
