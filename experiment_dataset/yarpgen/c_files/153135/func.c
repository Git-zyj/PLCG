/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153135
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
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (max((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */int) (unsigned char)63)) - (((/* implicit */int) var_8))))))));
    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (max(((~(((/* implicit */int) var_13)))), (((/* implicit */int) (signed char)46))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29931))) ^ (max((((/* implicit */unsigned int) var_12)), (((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) (_Bool)1);
                            var_23 = arr_1 [i_0];
                            arr_13 [i_4] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned short)65525);
                        }
                        arr_14 [i_0 + 1] [i_1] [i_0] [i_3 - 3] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_15 [i_0] [i_1] [i_2 - 1] [i_1] = min(((~(max((((/* implicit */unsigned long long int) (unsigned char)82)), (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                        var_24 = ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2987080472U)), (arr_0 [i_1])))) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) (_Bool)1))));
                        var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_0] [i_1]))) ? (arr_8 [i_0] [i_0] [i_1]) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 3]))) : (arr_8 [i_0] [i_0] [i_1])))));
                    }
                    for (short i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = arr_9 [i_0 + 1] [i_0] [i_0];
                        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)51))));
                    }
                    arr_19 [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) min(((-(1307886834U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1103063684U)))) ? (((((/* implicit */_Bool) 2773863925U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_14))));
                            var_28 = arr_3 [i_0];
                            arr_25 [i_0] [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) var_1);
                            arr_26 [i_0] = ((/* implicit */int) (unsigned char)29);
                        }
                        for (unsigned int i_8 = 1; i_8 < 7; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */short) (+(((((/* implicit */_Bool) 2987080481U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)216))))));
                            arr_29 [i_0] [i_1] [i_0] [i_2] [i_6] [i_8] [i_8] = ((/* implicit */short) arr_10 [i_0 + 3] [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
                            var_30 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)16376))))));
                        }
                        var_31 = ((/* implicit */signed char) ((arr_4 [i_0] [i_0] [(_Bool)1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [(unsigned char)4])) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) arr_20 [(unsigned char)8] [(unsigned char)8] [(unsigned char)5] [i_6] [i_0 + 2] [(signed char)3])))))));
                    }
                }
            } 
        } 
    } 
}
