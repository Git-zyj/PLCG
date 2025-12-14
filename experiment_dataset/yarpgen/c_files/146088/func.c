/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146088
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_14 &= ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_1])), (var_10)))) % (((arr_3 [i_1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_4 [i_1] [i_1])))) : (var_0)))));
        arr_5 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((arr_3 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_4 [i_1] [i_1])))))) == (((632147660933027674ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4096)))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) (+((~(arr_7 [i_2 + 1])))));
        arr_10 [(unsigned char)12] [(unsigned char)12] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-4096)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383))) : (9860368598404624550ULL)))));
        arr_11 [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) var_3);
    }
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_12 [i_3])))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_3] [i_3]))))) - (3425620915U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 8191ULL)) || (((/* implicit */_Bool) (unsigned char)80))))))));
        arr_15 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (arr_12 [i_3])))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (short)16370)) / (2046486978)))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 4; i_6 < 24; i_6 += 2) 
                    {
                        for (short i_7 = 1; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_20 [i_4 + 1] [i_4 + 1] [i_5] [i_6 + 1] [i_6 - 3] [i_6])))) == (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) 2)) : (8191U)))));
                                var_17 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18038))) : (8193ULL)))))))) >= (((((/* implicit */long long int) arr_19 [i_7 - 1] [i_6 - 1] [i_4 - 1])) + (var_0)))));
                                var_18 += ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) && (arr_20 [i_6] [i_3] [i_3] [i_4 - 1] [i_3] [i_6]))))) % (arr_23 [i_3] [i_3] [i_3] [i_3])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_8))));
                    var_20 = ((/* implicit */int) ((arr_23 [i_3] [i_3] [i_3] [i_3]) >> (((((/* implicit */int) var_11)) - (25212)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 2) 
    {
        arr_29 [i_8] = ((/* implicit */long long int) arr_23 [i_8] [i_8 + 2] [i_8] [i_8]);
        var_21 = ((/* implicit */signed char) (+(max((((((/* implicit */int) arr_27 [i_8])) - (((/* implicit */int) arr_24 [i_8] [i_8 + 1] [i_8 - 1])))), ((-(((/* implicit */int) var_5))))))));
        arr_30 [i_8 + 2] [i_8 + 2] = ((/* implicit */short) var_5);
        arr_31 [i_8 + 1] = ((/* implicit */unsigned int) ((max(((+(((/* implicit */int) (short)-16383)))), (((/* implicit */int) ((arr_7 [i_8]) == (((/* implicit */int) var_12))))))) - (2046486994)));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 17; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                {
                    arr_38 [i_8] [i_9 - 4] [i_10] = ((/* implicit */_Bool) min((max((((unsigned int) var_5)), (((/* implicit */unsigned int) arr_20 [i_8] [i_8 + 1] [i_9 - 4] [i_10] [i_10] [i_8])))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_7 [i_10]) <= (var_1)))))))));
                    arr_39 [i_10] [i_8 - 2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)0), ((unsigned char)164))))) <= (8586375475304927066ULL)))) - (((/* implicit */int) ((arr_20 [i_8] [i_8] [i_9 - 3] [i_9 + 1] [i_10] [i_10]) && (var_12))))));
                }
            } 
        } 
    }
    for (int i_11 = 4; i_11 < 23; i_11 += 3) 
    {
        var_22 = ((/* implicit */short) arr_19 [i_11 - 4] [i_11 - 4] [i_11 - 4]);
        arr_42 [i_11 + 1] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_41 [i_11 - 3] [i_11 - 1]))))));
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_1))));
}
