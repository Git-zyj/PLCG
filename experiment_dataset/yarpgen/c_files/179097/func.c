/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179097
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
    var_17 = ((/* implicit */_Bool) 3641936185U);
    var_18 -= ((/* implicit */_Bool) (signed char)-83);
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)35)) && (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) var_13)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((min((((/* implicit */int) min((var_12), (((/* implicit */signed char) var_7))))), (max((arr_2 [i_0]), (((/* implicit */int) arr_0 [i_0])))))), (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)35)))) | ((+(((/* implicit */int) (unsigned short)65523)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1422133258U)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (signed char)126))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-53))) % (((((/* implicit */long long int) ((/* implicit */int) (short)-12048))) ^ (arr_8 [i_1]))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((((arr_8 [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) - (71))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)29869)))))))));
        var_21 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2872834038U)) ? (max((var_3), (((/* implicit */int) (short)-29849)))) : (((/* implicit */int) arr_5 [i_1]))))) | (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_16))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5601))) | (15867044096676299338ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */int) (short)3821)) | (((/* implicit */int) (short)5247))));
                                arr_21 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) max((1993762954), (((/* implicit */int) (signed char)2)))))) << (((((((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_0 [i_5])) + (117))))) | (((/* implicit */int) var_13)))) - (12)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 491226065)))) || ((!(((/* implicit */_Bool) arr_15 [i_2]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 1422133258U))) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) (signed char)97)))))));
                        arr_24 [i_1] [i_1] [i_3] [i_6] = ((/* implicit */signed char) ((int) arr_1 [i_1]));
                    }
                    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        arr_29 [i_3] [i_3] = ((/* implicit */short) var_11);
                        var_25 += ((/* implicit */_Bool) ((long long int) ((signed char) max((((/* implicit */unsigned short) var_16)), (var_5)))));
                        arr_30 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_7 + 1]) == (((/* implicit */int) var_16)))))) | (max((((/* implicit */unsigned int) arr_23 [i_7 + 1])), (2872834061U)))));
                    }
                    var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (549755813887ULL)));
                }
            } 
        } 
    }
}
