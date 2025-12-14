/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133640
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
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_4 [i_0 - 1] [i_2 + 1] [i_2 + 1])) ^ (((/* implicit */int) arr_4 [i_0 + 1] [i_2 - 2] [i_2 - 1])))), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_2 - 2] [i_2 + 1]))))));
                                var_16 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_2 - 1] [i_1] [i_2]) : (((/* implicit */long long int) arr_5 [i_2 - 2] [i_2 - 2] [i_4] [i_0 - 2])))));
                                arr_14 [i_0] [(short)16] [(short)16] [(unsigned short)19] = (((~(((((/* implicit */int) var_8)) - (((/* implicit */int) (short)(-32767 - 1))))))) - (((/* implicit */int) ((((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47754))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (var_1)))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [8]))));
                /* LoopSeq 2 */
                for (short i_5 = 2; i_5 < 22; i_5 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((unsigned char) ((((/* implicit */_Bool) 789131281)) && (((/* implicit */_Bool) (unsigned short)17781)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) arr_2 [i_5]);
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(10707617945490758459ULL))))));
                            }
                        } 
                    } 
                    arr_22 [(short)13] [i_1] [(unsigned char)15] = ((/* implicit */unsigned long long int) ((((var_7) == (max((var_7), (((/* implicit */int) arr_17 [18] [18] [i_0] [(unsigned char)19] [(unsigned char)21])))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_19 [i_0] [i_0] [(_Bool)1] [i_5]))));
                    /* LoopSeq 1 */
                    for (int i_8 = 4; i_8 < 20; i_8 += 4) 
                    {
                        arr_26 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(max((-789131268), ((~(((/* implicit */int) (unsigned char)193))))))));
                        var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */int) var_0)) + (arr_24 [i_0] [i_0] [i_8]))) | (((((/* implicit */int) (_Bool)1)) >> (((arr_23 [15U] [15U] [i_5] [(short)17]) - (11549153676072563169ULL)))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [22ULL] [(unsigned char)10] [i_8])) : (((/* implicit */int) var_8))))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                        var_22 = ((/* implicit */unsigned long long int) var_10);
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((-1689149324) >= (arr_24 [i_1] [i_5] [i_8]))) ? (((((/* implicit */_Bool) var_7)) ? (789131267) : (-922194164))) : (var_11))) << (((/* implicit */int) (((~(((/* implicit */int) arr_17 [(signed char)16] [(signed char)16] [(signed char)16] [(signed char)16] [i_8])))) >= (((/* implicit */int) ((_Bool) var_1)))))))))));
                    }
                }
                for (unsigned int i_9 = 2; i_9 < 23; i_9 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) min(((_Bool)0), (((((unsigned long long int) var_5)) < (arr_23 [i_0] [i_0] [(unsigned char)9] [i_0])))));
                    var_25 = ((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned short) arr_0 [i_9])), (((unsigned short) var_0)))));
                }
                /* LoopNest 3 */
                for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            {
                                arr_38 [i_0] [(short)3] = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (var_7))))) - (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_1)) == (-789131257)))), (arr_3 [i_0 - 2] [i_1] [i_10]))))));
                                var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((2761451891U) << (((/* implicit */int) arr_8 [i_0] [(unsigned char)5] [23] [(signed char)13])))))) ? (max((((((/* implicit */int) arr_18 [i_0])) ^ (-922194137))), (((/* implicit */int) max((((/* implicit */short) var_12)), (arr_3 [i_10] [i_10] [i_10])))))) : (max((1123880811), (min((((/* implicit */int) (unsigned short)47743)), (-395930253)))))));
                                var_27 = ((/* implicit */int) min((var_27), ((~(((((/* implicit */_Bool) arr_23 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_32 [i_0 + 2] [(_Bool)1] [i_0 + 1])) : (((/* implicit */int) arr_32 [i_0 + 2] [i_0 + 2] [i_0 + 1]))))))));
                                arr_39 [i_11] [i_11] [11] [(short)3] [i_11] [19U] [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_0 + 2] [7LL] [(short)19] [(short)19])) ? (((/* implicit */int) var_1)) : (arr_24 [(unsigned short)10] [16] [i_10]))));
                            }
                        } 
                    } 
                } 
                arr_40 [(short)21] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_0] [i_1] [17])) == (((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
    var_28 *= ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned short)17799)) : (1835342820))) == (((/* implicit */int) (short)32517))))) > ((~(-1689149294))));
}
