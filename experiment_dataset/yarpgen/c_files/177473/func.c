/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177473
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
    var_15 = var_4;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [(short)10] [(unsigned short)10] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_2]);
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0]))))) - (((0LL) + (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                    arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40096))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)4082)))))))) : ((~(((/* implicit */int) (unsigned short)40096))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_16 = (unsigned short)40076;
                                arr_17 [(short)5] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((signed char) (unsigned char)242)), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_13 [i_0] [(_Bool)1] [i_0] [i_0])))))))) != (((/* implicit */int) arr_8 [i_0] [i_0]))));
                                arr_18 [i_2] [i_2] [i_3] [i_2] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 3005656073U)) - (3996341567944827718LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        for (unsigned int i_6 = 4; i_6 < 23; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)29197)), (var_1)))) ? (((unsigned int) var_4)) : (((unsigned int) ((1006547321U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    arr_26 [i_5] [i_6] [i_5] [i_7 - 1] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_23 [(unsigned short)14])), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1006547321U)))))) : (((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [18U] [18U]))) : (2414527394U)))))), (max((arr_21 [i_5] [i_6]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1LL)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 2) 
    {
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            for (short i_10 = 1; i_10 < 15; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 15; i_12 += 4) 
                        {
                            {
                                arr_41 [i_12 + 1] [i_12 + 1] [9] [i_9] [i_9] [9] [i_12] = ((/* implicit */unsigned short) arr_30 [i_8]);
                                var_18 = ((/* implicit */signed char) 1006547321U);
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25440))) : (4558496751062572707ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 13; i_14 += 4) 
                        {
                            {
                                arr_48 [i_8] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((long long int) arr_28 [i_8 - 1])), (((/* implicit */long long int) arr_20 [i_8] [i_8])))))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */int) arr_38 [i_8] [i_9] [i_10] [i_10] [(short)6])), (max((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) (unsigned char)232)))))))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (unsigned short)40072))));
                                var_22 += ((/* implicit */unsigned int) arr_35 [i_13] [(unsigned short)5] [(unsigned short)5] [i_8]);
                                arr_49 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1638938187)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) : (1LL)))) ? (min((arr_40 [i_8] [i_9] [i_10]), (min((18087752957314986782ULL), (arr_21 [i_8] [i_14 - 2]))))) : (((/* implicit */unsigned long long int) (~(((var_4) ? (((/* implicit */int) (unsigned short)40095)) : (((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
