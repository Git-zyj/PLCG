/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180171
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
    var_10 = ((/* implicit */unsigned short) ((((long long int) (unsigned short)43335)) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3 + 1] [i_1] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4] [i_4] [i_4] [i_4])) ? (arr_13 [i_4 + 4] [i_4 + 4] [i_4] [i_4] [(unsigned char)21]) : (arr_13 [i_4 + 2] [i_4 + 2] [i_4] [i_4] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11896))) : (((((/* implicit */_Bool) (unsigned short)4354)) ? (((/* implicit */long long int) 233125532U)) : (arr_13 [i_4 - 3] [(unsigned char)3] [i_4] [i_4] [i_4])))));
                                arr_16 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)19129)) ? (1060797238U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)195))))))));
                                var_11 = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)18] [i_0] [(unsigned short)7] [i_0])) ? (arr_5 [i_0] [i_1] [(unsigned char)19] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (var_2) : (4294967291U))))))));
                                var_12 = (unsigned char)62;
                                var_13 = ((/* implicit */unsigned char) (unsigned short)44147);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2] [i_2 - 3] [i_2])) ? (((/* implicit */int) arr_9 [i_2 - 2] [i_2] [i_2 - 4] [i_2 - 2])) : (((/* implicit */int) arr_9 [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 4]))))) ? (((/* implicit */int) arr_9 [i_2 - 2] [i_2] [i_2] [i_2 - 1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 3] [i_2] [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_22 [(unsigned char)19] [i_1] [i_1] [i_2 - 3] [i_5] [i_0] [i_6] = ((/* implicit */int) arr_6 [i_0] [i_6]);
                                arr_23 [i_1] [i_0] [i_1] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [(unsigned char)12] [2U])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned char) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 3])) && (((/* implicit */_Bool) arr_11 [i_2] [(unsigned short)14] [i_2 - 2] [i_2 - 1] [i_2 - 3])))))) : (min(((+(arr_18 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5]))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_0)), (var_5))))))));
                                var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(var_6)))), (min((((/* implicit */long long int) (-(var_2)))), (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (5785058746505547468LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        for (unsigned short i_8 = 3; i_8 < 20; i_8 += 4) 
        {
            {
                arr_29 [18] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (-6766473054095857045LL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_7] [i_8] [i_8] [i_7])) != (((/* implicit */int) arr_1 [i_7]))))) : (((/* implicit */int) arr_11 [i_7] [i_8 + 2] [i_8 + 2] [i_8] [(unsigned char)10]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_8 + 1])) ? (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_28 [i_7] [i_7])))) : (arr_20 [i_7] [i_7] [i_8] [i_8] [i_8 - 2])));
                arr_30 [(unsigned char)4] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)159)), (((((/* implicit */_Bool) 6090023503555094505LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) : (arr_14 [i_7])))));
            }
        } 
    } 
}
