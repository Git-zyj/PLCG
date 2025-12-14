/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18020
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
    var_18 = ((/* implicit */long long int) (+(var_12)));
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */unsigned long long int) var_5)) : (var_12)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_0))))));
                        arr_9 [i_0] [(unsigned short)9] [(unsigned short)9] [i_3] [i_3] &= ((/* implicit */unsigned long long int) (-(var_11)));
                        var_21 = ((/* implicit */long long int) (+(arr_4 [i_2] [1LL] [i_2 + 1])));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((arr_4 [i_3] [i_2 + 1] [i_2]) < (((/* implicit */unsigned long long int) -516252659401754140LL))));
                    }
                    for (signed char i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((int) min((var_16), (((/* implicit */long long int) var_4))))), ((~((-(((/* implicit */int) (_Bool)0)))))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [i_2] [i_2] [i_2 - 1] [(signed char)6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_2 - 1])))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (511U)))) : ((+(max((var_10), (arr_0 [i_0])))))));
                        arr_16 [i_1] [i_1] [i_1] [i_1] [10LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2] [i_2 + 1])) ? (arr_5 [i_2 - 1] [(signed char)12] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((int) var_14)))));
                        arr_17 [i_0] [i_1] [i_2 + 1] [i_0] = ((((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_4 + 1] [i_4])) ? (((/* implicit */unsigned long long int) -1479596899)) : (arr_4 [i_2 - 1] [i_4 + 2] [i_2 - 1]))) / ((+(arr_4 [i_2 + 1] [i_4 + 2] [i_4 - 2]))));
                    }
                    for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_16))), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) arr_11 [i_0] [i_1])))))));
                        arr_21 [4LL] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((arr_19 [i_2 - 1]), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (arr_0 [i_1])))) : (arr_8 [i_0] [i_2 + 1] [i_5 + 1] [i_5]))), (max((((var_3) & (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))));
                    }
                    var_24 = ((/* implicit */long long int) (~(((var_17) ? (((((/* implicit */_Bool) var_13)) ? (12405480862424083055ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), (var_0)))))))));
                    arr_22 [i_0] = ((/* implicit */long long int) var_0);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_3);
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (18408331817216528575ULL)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 1075122525)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6)))))) : (min(((~(((/* implicit */int) var_14)))), (((/* implicit */int) var_15))))));
}
