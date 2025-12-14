/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186125
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
    var_14 = ((/* implicit */unsigned long long int) var_1);
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) var_7);
                        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)12647))) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19668))) * (18U)))));
                        var_18 -= ((arr_3 [i_0] [i_2 + 2]) / (((/* implicit */unsigned long long int) -1607184867)));
                        var_19 = ((((/* implicit */_Bool) var_1)) ? (arr_8 [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)45872)) : (((/* implicit */int) var_4))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_1 [i_0]))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)19664)))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8460554845401496352LL)) ? (((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) 8460554845401496352LL))))) : (((((/* implicit */_Bool) (unsigned short)29726)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))));
                        arr_13 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45872)) ? (var_8) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_0)) / (1122922039))) : (((/* implicit */int) var_4))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 1] [i_2]))) : (7245271640683456226LL))))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_14 [i_5 + 2] [i_5 - 1] [i_2] [i_2 + 3] [i_1])) < (var_3))))));
                        arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_5))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_0] &= ((/* implicit */unsigned char) ((arr_18 [i_0] [(unsigned char)1] [(unsigned char)1] [i_6]) >> ((((+(var_11))) - (12115895018291040406ULL)))));
                        arr_23 [i_6] [i_1] [i_1] [i_1] [i_0] = var_3;
                        var_24 = ((/* implicit */signed char) max((var_24), (((signed char) (unsigned short)35807))));
                        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_0 [i_2 + 2] [i_2 + 2]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) var_7);
                            var_27 = ((/* implicit */signed char) ((unsigned int) var_3));
                        }
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_6 + 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2373492048U)) ? (var_8) : (((/* implicit */int) var_13))));
                            arr_29 [i_0] [i_1] [(unsigned short)0] [i_1] [i_2 - 1] = ((/* implicit */short) (-((((_Bool)0) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            var_28 = ((/* implicit */unsigned short) ((arr_26 [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 2] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))) : (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3791333937U)))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -6048177376853783552LL)) / (6439961185177745298ULL)));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 10; i_9 += 3) 
                    {
                        for (signed char i_10 = 2; i_10 < 11; i_10 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) (-(var_8)));
                                arr_35 [i_2 + 3] [i_0] [i_10] [i_0] [i_1] [i_10] = ((/* implicit */long long int) ((int) 6048177376853783551LL));
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_10 - 2] [i_1])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_9 [i_0] [i_10 - 2] [i_2 + 2] [i_0])));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned char) var_4);
        var_34 = ((arr_4 [i_0] [i_0]) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_13)));
    }
}
