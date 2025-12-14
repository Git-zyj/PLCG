/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122720
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
    var_11 = ((/* implicit */unsigned short) max((var_9), (var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) & (arr_2 [i_0 + 1])));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_1))))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_16 [i_1] |= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) max((((/* implicit */short) var_2)), (arr_9 [i_1]))))))));
                        var_14 = max((((/* implicit */unsigned int) arr_15 [i_1] [i_2] [i_3] [i_3])), (((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (-2147483647 - 1)))))) ? (max((arr_7 [i_1 - 1] [i_2]), (((/* implicit */unsigned int) (unsigned short)65519)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)16)))) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) arr_9 [i_2]))))), (arr_0 [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)65529)))))));
                        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_15 [i_1] [i_1] [i_1 - 1] [i_1 - 1]), (arr_15 [i_1] [3LL] [i_1 - 1] [i_1 - 1]))))));
                    }
                    var_17 = ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))), (((arr_3 [i_1] [i_2]) ? (((/* implicit */int) (unsigned short)23560)) : (((/* implicit */int) (unsigned short)16))))))) || (((/* implicit */_Bool) ((arr_8 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1]))) : (max((677105948590340424LL), (((/* implicit */long long int) (unsigned short)16))))))));
                }
            } 
        } 
    } 
    var_18 = (-(((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) * ((+(var_3))))));
}
