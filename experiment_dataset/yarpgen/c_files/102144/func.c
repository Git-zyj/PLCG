/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102144
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] &= ((/* implicit */unsigned char) ((unsigned int) max((max((((/* implicit */long long int) (short)(-32767 - 1))), (var_19))), (((/* implicit */long long int) (-(var_14)))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned char)8] [i_0 - 1] [i_0 - 1])) ? ((+(((/* implicit */int) ((unsigned short) var_12))))) : (((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_0 + 4] [i_0 + 4] [i_0])))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-20)) + (((/* implicit */int) var_18)))) - ((-(((/* implicit */int) (_Bool)0))))));
                        arr_11 [(unsigned short)0] [(unsigned short)0] [i_1] [i_2] [(unsigned short)0] = (_Bool)1;
                        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1 + 2] [i_3]))));
                        var_23 = (-(((/* implicit */int) (_Bool)1)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1727)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_2 - 1] [(short)5]), (((/* implicit */unsigned short) arr_0 [i_0] [i_1 - 1])))))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 4] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_1 + 2] [i_2 - 1])) : ((~(((/* implicit */int) arr_12 [i_0] [i_0 - 1]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0 + 3] [i_1 + 2] [i_2 + 1])) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_5 [i_0] [(unsigned char)1] [i_0] [i_5])) : (((/* implicit */int) (_Bool)1))))));
                        arr_18 [i_0] [i_2 - 1] [i_0] [i_5] [i_5] = ((/* implicit */short) (_Bool)1);
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [8U] [12LL] [i_2 - 1] [i_1 - 1] [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) arr_14 [(short)9] [i_2] [i_2 + 1] [i_1 + 2] [i_0] [i_0 + 4])) : (((/* implicit */int) arr_14 [i_5] [i_2] [i_2 + 1] [i_1 - 2] [i_0] [i_0 + 4]))));
                        arr_19 [i_0 + 4] [i_1 - 3] = ((/* implicit */long long int) ((unsigned char) ((unsigned short) var_16)));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (var_2) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_18)))))))));
}
