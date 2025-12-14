/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158137
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
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 7; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 += (((-(((/* implicit */int) min((var_13), ((unsigned char)254)))))) & ((+(((/* implicit */int) ((unsigned char) var_6))))));
                                var_20 &= min((min((((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_1 + 2] [(unsigned short)6])), (max((((/* implicit */unsigned char) (_Bool)1)), (var_18))))), (((/* implicit */unsigned char) var_0)));
                                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)168)) / (((/* implicit */int) (unsigned char)87))))) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (unsigned char)174))))) : (((/* implicit */int) (unsigned char)164)))) * (((/* implicit */int) ((unsigned char) min(((unsigned char)138), (((/* implicit */unsigned char) var_0))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_22 = arr_3 [i_0] [i_1] [i_5];
                        var_23 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_5]);
                    }
                    arr_16 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [i_0])) | (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1 - 1])))) << (((((/* implicit */int) min((var_7), (arr_11 [i_0])))) - (13970)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [i_0])) | (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1 - 1])))) << (((((((/* implicit */int) min((var_7), (arr_11 [i_0])))) - (13970))) + (535))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_18)), (var_7)))) ? (((/* implicit */int) max((var_13), (var_18)))) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_0))))))), (var_12)));
    var_25 = ((unsigned short) max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) ^ (18446744073709551615ULL)))));
}
