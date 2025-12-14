/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188610
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
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_12) ? (-8) : (((/* implicit */int) var_18)))))))), (-823414451051724095LL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_21 &= ((/* implicit */_Bool) (~(arr_0 [i_0])));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (~(max((arr_8 [i_1] [i_0] [i_2 + 2] [i_3] [i_3]), (((/* implicit */int) arr_4 [15U] [i_1] [i_2 + 1] [i_1 + 1]))))));
                        var_23 = ((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1] [i_2] [i_3]);
                    }
                } 
            } 
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) min((min((arr_8 [i_1 + 1] [i_0] [i_1] [i_1 + 1] [i_1 - 1]), (arr_8 [i_1 + 1] [i_0] [i_0] [i_1 + 1] [i_1 - 1]))), ((~(arr_8 [i_1 + 1] [i_0] [i_0] [i_1 - 1] [i_1 + 1])))));
            arr_10 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 1] [i_1]))));
        }
    }
    var_24 = ((/* implicit */short) max((((/* implicit */long long int) (~((+(((/* implicit */int) (short)-19683))))))), (min((((long long int) var_13)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))))));
    var_25 += ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? ((-(((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_19))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_13 [i_4]))))) + (((((/* implicit */_Bool) -328280042113122136LL)) ? (823414451051724103LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
        var_27 = ((/* implicit */signed char) ((arr_11 [i_4] [i_4]) == (((/* implicit */int) arr_13 [i_4]))));
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-14)))))));
        var_29 = ((/* implicit */unsigned int) (-((+(var_0)))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_30 += ((/* implicit */unsigned int) var_8);
        var_31 = ((/* implicit */unsigned char) arr_15 [i_6]);
        var_32 = ((/* implicit */long long int) var_14);
        var_33 = ((/* implicit */short) min((-5798739771671714830LL), (((/* implicit */long long int) (short)-32248))));
        var_34 += ((/* implicit */signed char) min((((/* implicit */long long int) (+((+(25U)))))), ((((!(((/* implicit */_Bool) arr_15 [(signed char)6])))) ? ((-(arr_16 [(unsigned short)8]))) : (((((/* implicit */_Bool) arr_2 [i_6] [(unsigned char)2])) ? (arr_16 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    }
}
