/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185264
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
    var_10 = ((/* implicit */long long int) max((var_6), (var_3)));
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1048575)) >= (16658745393532269648ULL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_12 = ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_3])) < (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_3])));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_3])))))));
                        var_14 += ((/* implicit */signed char) ((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5620088793242141717ULL)) ? (((/* implicit */long long int) var_3)) : (arr_2 [i_2]))))));
                        var_15 *= ((/* implicit */unsigned long long int) (signed char)15);
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_9))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            arr_17 [i_1] [i_4] [i_1] = ((/* implicit */signed char) arr_7 [i_0] [i_0]);
                            var_17 = ((/* implicit */signed char) ((arr_4 [i_1]) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_1] [i_5])) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_1] [i_5]))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2] [i_6] [i_2] [i_2] [i_0] [i_6 - 1])) ? (arr_15 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6] [i_6 - 1]) : (((/* implicit */unsigned long long int) arr_2 [i_4]))));
                            arr_20 [i_1] [i_1] [i_2] [i_4] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34506))) / (5756541509171422560LL)));
                            arr_21 [i_1] [i_2] [i_1] [i_6] = ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_4] [i_6] [i_6 - 1]);
                            var_19 = ((/* implicit */int) (short)-9874);
                            arr_22 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] [i_6] = ((/* implicit */unsigned short) var_5);
                        }
                        arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0]);
                        var_20 = ((/* implicit */_Bool) arr_13 [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            arr_27 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)22533))));
                            arr_28 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 14; i_8 += 4) 
                    {
                        for (int i_9 = 1; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_21 = ((1048556) & (((/* implicit */int) (unsigned short)65533)));
                                var_22 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((6719089685400930877ULL) | (((/* implicit */unsigned long long int) -3581918718313485365LL)))))))));
                            }
                        } 
                    } 
                    var_23 *= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 7487042652480750093LL)) ? (-2147483623) : (((/* implicit */int) (unsigned short)22611)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                    arr_37 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_5);
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(8703768664823253928LL)))) ? (-1231667712) : (((/* implicit */int) (signed char)-84))));
                }
            } 
        } 
    } 
}
