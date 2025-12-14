/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103343
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned short) (signed char)6)), (arr_2 [i_0]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_17))))) ^ (var_16)))));
        arr_4 [i_0 - 1] = (_Bool)1;
        var_20 = ((/* implicit */_Bool) ((unsigned int) ((var_9) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 2])))));
        arr_5 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (signed char)11);
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) (signed char)17))), (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_15))))) : (var_11))))))));
    /* LoopSeq 1 */
    for (unsigned int i_1 = 4; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        var_22 += (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0))))) : (max((6854723296845294992ULL), (((/* implicit */unsigned long long int) (+(var_4)))))));
                        arr_17 [i_1] [i_2 + 1] [i_2] = max((((/* implicit */unsigned int) var_3)), ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_17))) ^ (var_2))))));
                        var_23 |= ((/* implicit */unsigned int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned short)40790)))) + (40793))) - (2)))));
                        var_24 = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 - 1] [i_2 + 2] [i_2] [i_2 - 1]))) : (arr_11 [i_2 + 2] [i_2 - 1]))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 17ULL)))) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)40780)) * (((/* implicit */int) var_6)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1])) == (((/* implicit */int) var_10))))), ((((_Bool)0) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_1] [1U] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_5]));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((_Bool) (unsigned short)40790)))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_1 + 2] [i_1 + 3] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 2] [i_2 + 1] [i_2 + 1]))))) : (((((/* implicit */_Bool) (unsigned short)44719)) ? (4152721464U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                    for (long long int i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((unsigned long long int) 5LL)) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))) / (9223372036854775800LL))))));
                        var_28 = arr_0 [i_1];
                        var_29 = ((/* implicit */long long int) (+(((4294967295U) >> (((((/* implicit */int) var_13)) + (105)))))));
                        var_30 = ((/* implicit */unsigned int) var_16);
                        arr_26 [i_2] [i_2 - 1] [i_2] [i_1] = ((/* implicit */unsigned int) ((long long int) ((arr_21 [i_1 - 1] [i_1] [i_1]) && (arr_21 [i_2] [i_2] [i_3]))));
                    }
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((long long int) (_Bool)1)))));
                    arr_27 [i_1] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_2 + 2]);
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (unsigned short)21591)))))))))));
    }
}
