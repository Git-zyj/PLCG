/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163684
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (((/* implicit */unsigned int) ((int) arr_5 [i_0] [i_1] [7]))) : (arr_2 [i_0])));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned int) (_Bool)1);
                        var_22 &= ((/* implicit */unsigned short) ((var_1) / (var_15)));
                    }
                    for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        arr_14 [4] [i_4] [i_0] [i_2] = ((((/* implicit */_Bool) arr_12 [i_0] [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [(short)3] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1])));
                        arr_15 [i_4] [i_4] [i_4] [i_0] = ((arr_5 [i_2] [i_2] [i_4 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4]))));
                        arr_16 [i_0] [i_0] [i_1] [(signed char)1] [i_4] = ((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_4] [i_4 - 1] [i_4])) > (((/* implicit */int) arr_7 [i_0] [i_4 + 1] [i_2] [i_1]))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_23 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) 1595059182U))), (arr_0 [i_5])));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_7 [i_6] [i_5] [4LL] [11])))) - (((/* implicit */int) arr_11 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6] [i_5 - 1]))) : ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
                            var_25 = ((/* implicit */long long int) ((((arr_6 [i_5 + 1] [i_5 + 2] [i_6] [i_6]) & (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (signed char)20))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */_Bool) arr_25 [i_7] [i_9]);
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_7] [i_8])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            for (unsigned int i_12 = 1; i_12 < 17; i_12 += 1) 
            {
                {
                    arr_41 [i_10] = ((((/* implicit */int) min((arr_35 [i_10] [i_12 + 1] [i_10]), (arr_35 [i_12 - 1] [i_12 + 1] [(unsigned char)0])))) + (((/* implicit */int) ((short) arr_35 [i_11] [i_12 + 1] [i_12]))));
                    arr_42 [i_10] [i_11] [3] = ((/* implicit */short) arr_37 [(signed char)17] [(signed char)4] [8LL]);
                    var_28 = max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_12 - 1] [i_12 + 1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12] [i_11] [i_12]))) / (arr_28 [i_12] [i_11]))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_17);
}
