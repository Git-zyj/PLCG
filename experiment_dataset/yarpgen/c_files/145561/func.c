/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145561
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_13), (arr_7 [i_2 + 4] [i_2 + 1] [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((unsigned long long int) max((arr_10 [i_1] [i_3] [i_2] [i_3] [i_2]), (((/* implicit */long long int) var_5)))))));
                        var_17 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (8435967964854000315LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_1)) == (var_6)))) : ((-(((/* implicit */int) var_14))))))), (((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 3] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_10 [17] [21ULL] [i_0] [i_0] [(signed char)0]) : (((/* implicit */long long int) var_1))))) : (((((/* implicit */unsigned long long int) var_5)) / (var_11))))));
                        arr_14 [i_0] [18LL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) 2932795835U);
                    }
                    var_18 = ((/* implicit */unsigned int) max((var_18), (min(((+(1362171460U))), (((((arr_4 [i_1] [i_1] [i_1]) < (((/* implicit */unsigned long long int) 2932795834U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [20LL] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) : (arr_11 [i_0])))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            {
                                arr_20 [i_0] [23LL] = ((/* implicit */int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [(signed char)3] [i_2 + 4] [i_0] [i_2 + 4])) : (((/* implicit */int) (unsigned char)219))))) : (max((((/* implicit */unsigned long long int) var_16)), (arr_4 [i_0] [i_0] [i_0])))))));
                                arr_21 [i_0] [(unsigned short)14] [i_4] = ((/* implicit */long long int) min((min((((/* implicit */int) arr_2 [i_0] [(short)11])), ((~(((/* implicit */int) var_15)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_3 [i_0]) + (2147483647))) >> (((var_10) + (6383007260013465000LL)))))) <= (var_11))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_2] [(short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [16LL] [16LL] [i_0] [i_2]))))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_19 [i_0] [i_0] [22LL]), (((/* implicit */short) var_12)))))))) : (((((/* implicit */_Bool) ((arr_6 [i_0]) / (-782881859509758793LL)))) ? (((/* implicit */unsigned long long int) min((var_8), (var_1)))) : (arr_12 [i_0])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_8))));
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            {
                arr_27 [i_6] = ((/* implicit */unsigned short) ((((long long int) arr_17 [i_6] [i_7] [i_6] [i_6 + 1])) >> (((((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned int) var_7)) : (1362171484U))) - (2902217567U)))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_1)) * (10410156572197818395ULL))))) ? (min((((((/* implicit */_Bool) var_1)) ? (var_13) : (var_13))), (((/* implicit */long long int) arr_11 [i_6 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [13] [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-((~(var_10))))))));
                arr_28 [(unsigned short)12] = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1503729683)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))), (((((/* implicit */_Bool) (unsigned char)218)) ? (arr_12 [8]) : (((/* implicit */unsigned long long int) arr_26 [3LL] [i_6]))))))));
            }
        } 
    } 
    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((var_13) | (((/* implicit */long long int) 2932795833U)))) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
}
