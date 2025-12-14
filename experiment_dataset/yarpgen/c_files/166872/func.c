/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166872
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)255), (var_1))))) : (((12124956950742930250ULL) << (((var_8) - (16509552968342797211ULL))))))) : (var_4)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) max((arr_4 [i_0 + 1] [i_0 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) (-(-963325163))))));
                var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0 + 1] [5ULL] [i_0 - 1])), (var_12)))) ? (((int) (unsigned short)59827)) : (((/* implicit */int) var_10)))), (((int) (short)-12484))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 24; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    var_18 = ((/* implicit */_Bool) ((max(((+(2708868090U))), (min((2708868090U), (((/* implicit */unsigned int) var_7)))))) + (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? ((-(1586099205U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    arr_13 [i_3 - 1] [i_3 - 1] [i_3] [i_2] = ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */int) arr_10 [i_2] [i_3] [i_2])) << (((((/* implicit */int) var_5)) - (231)))))), (((/* implicit */long long int) (~(arr_9 [i_2 + 1]))))));
                    var_19 = ((long long int) (~((-(((/* implicit */int) var_6))))));
                    var_20 = (unsigned char)255;
                    arr_14 [(short)24] [i_4] [(short)24] [i_3] |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_8 [(unsigned char)5] [(unsigned char)5] [i_4])) ? (max((((/* implicit */unsigned long long int) 2708868105U)), (var_8))) : (var_13))));
                }
                for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_18 [i_2] = ((/* implicit */short) arr_11 [i_2] [i_3 - 1] [i_2]);
                    arr_19 [i_2] = ((/* implicit */signed char) max((1586099206U), (2196894566U)));
                    arr_20 [i_2] [i_3 - 1] [i_5] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_2 - 1] [i_2])) ? (arr_17 [i_2] [i_3] [i_2 - 2] [i_2]) : (arr_17 [i_2] [i_3 + 1] [i_3] [i_2])))) ? (min((((/* implicit */unsigned int) var_9)), (1586099206U))) : (min((arr_17 [i_2] [i_3] [i_3] [i_2]), (((/* implicit */unsigned int) (signed char)94))))));
                }
                arr_21 [i_2] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (short)515))));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)170)) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1586099194U)))))))) ? (var_4) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_6)), (1586099206U)))))));
    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
}
