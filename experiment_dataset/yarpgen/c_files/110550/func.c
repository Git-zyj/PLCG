/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110550
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
    var_20 = ((/* implicit */unsigned short) ((min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) 3508748332U)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_4)))))) != (((/* implicit */int) min((var_16), (var_4))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */short) var_18)), (arr_1 [i_0])))), ((-(68719476735LL)))));
        var_22 -= ((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0]))) * (((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned short i_3 = 4; i_3 < 18; i_3 += 1) 
            {
                for (short i_4 = 4; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_1 [(unsigned short)4]))));
                        var_24 = ((/* implicit */short) min((min((((/* implicit */long long int) ((unsigned int) arr_9 [i_3 - 3]))), (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1]))) * (-68719476720LL))))), (((/* implicit */long long int) arr_8 [(_Bool)1] [i_3] [i_3 - 1]))));
                        arr_13 [i_1] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_3 - 1] [i_3] [i_3 + 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 3] [i_3 - 3] [i_4 - 4])) || (((/* implicit */_Bool) arr_11 [i_3 - 4] [i_3 - 2] [i_3 - 1])))))) : (((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 3] [i_3 - 4]))) : (arr_7 [i_3 - 3] [i_3 - 2] [i_3 - 3] [i_4 + 1])))));
                        var_25 ^= ((((/* implicit */int) ((unsigned short) (_Bool)1))) > (((((/* implicit */int) arr_8 [i_1] [i_2] [i_3 - 2])) * (((/* implicit */int) arr_8 [i_1] [i_2] [i_3 - 2])))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((max((68719476735LL), (((/* implicit */long long int) (short)23332)))) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [12LL] [i_1] [12LL]))))))));
    }
    /* LoopNest 3 */
    for (long long int i_5 = 3; i_5 < 24; i_5 += 1) 
    {
        for (long long int i_6 = 3; i_6 < 23; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 24; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        arr_26 [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5]))))), (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) arr_14 [i_5]))))));
                        arr_27 [i_5] [i_5] [9LL] = ((/* implicit */long long int) (_Bool)1);
                        arr_28 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [(_Bool)1] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21079))) : (18446744073709551615ULL))) >> (((var_5) - (545483987U)))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (arr_18 [i_5] [i_5] [i_5])));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 4; i_9 < 22; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) max((var_28), (arr_24 [i_5] [i_6] [i_5] [i_9] [i_10] [i_10])));
                                arr_36 [i_5] [i_6] = ((/* implicit */unsigned char) ((var_16) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_9] [i_7 - 1] [i_6]))) * (((((/* implicit */_Bool) var_14)) ? (arr_23 [i_5]) : (var_6)))))) : (((arr_18 [i_5] [i_5 - 1] [i_5 - 2]) ? (((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) (_Bool)1);
    var_30 = ((/* implicit */unsigned short) (+((~((~(3395143832U)))))));
}
