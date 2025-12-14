/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133841
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
    var_18 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_1)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) ((signed char) (unsigned char)59))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_19 ^= ((/* implicit */unsigned short) min((min((((unsigned char) var_10)), (((/* implicit */unsigned char) max((var_4), (arr_12 [i_1] [i_1] [i_1] [i_1])))))), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_10 [i_0] [i_1] [i_1] [i_2] [i_2]))) == (((/* implicit */unsigned long long int) var_15)))))));
                        var_20 |= ((/* implicit */short) arr_1 [i_0]);
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) % (arr_8 [i_0] [i_1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) -1027261084)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_10 [i_0] [i_1] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) 1027261084)))))))));
                        arr_14 [6] [6] [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) -32768))), (((((/* implicit */_Bool) 1027261084)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1024))) : (var_17)))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (-(2147483647))))) << (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_3]))))));
                    }
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_22 |= min((min((min((var_10), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) arr_2 [i_2])))), (((/* implicit */unsigned int) arr_7 [i_2] [i_1] [i_0])));
                        arr_17 [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_0 [i_2])))) + (((/* implicit */int) (short)1023))))) && (((/* implicit */_Bool) (signed char)48))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (var_5))))));
                        arr_20 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_16);
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (arr_11 [i_5] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 1130344052)))))));
                        var_25 += ((/* implicit */short) (~(((/* implicit */int) (unsigned short)63166))));
                        var_26 *= ((/* implicit */short) arr_6 [0U] [i_1] [i_0]);
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        arr_23 [i_0] [i_0] [i_6] [15] [i_2] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_11)))))), (((arr_11 [i_0] [i_1] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */int) arr_8 [i_7] [i_7] [i_2] [i_6]);
                            arr_28 [i_0] [i_0] [i_6] [i_2] [i_6] [i_7] = ((/* implicit */unsigned int) var_17);
                            var_28 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) / (((/* implicit */int) (short)-9921))))));
                        }
                        var_29 = ((/* implicit */int) (+(((unsigned long long int) arr_1 [i_6 + 3]))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */short) min((min((((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_15))), (((/* implicit */long long int) -1027261084)))), (((/* implicit */long long int) ((signed char) var_7)))));
                                var_31 *= ((/* implicit */long long int) ((((var_17) < (((/* implicit */long long int) ((/* implicit */int) var_12))))) && (((/* implicit */_Bool) arr_25 [i_0] [i_8 - 1] [i_8] [i_8 - 3] [i_8 - 2]))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-17080)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)58361))))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */long long int) max((var_33), ((~(var_17)))));
}
