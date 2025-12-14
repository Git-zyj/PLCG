/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134537
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(9223372036854775798LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7)))))) : ((+(var_5))))) + (var_7)));
    var_13 = ((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) 3175136432U)) / (var_11))), (((/* implicit */long long int) (-(var_3))))))) / (((((/* implicit */_Bool) max((5959928408343628028LL), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned long long int) 1119830840U)) / (var_7))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */int) ((33554431LL) >= (((/* implicit */long long int) 1119830840U))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || ((!(((/* implicit */_Bool) var_0)))))))));
        var_14 = ((/* implicit */long long int) var_7);
        var_15 = ((/* implicit */short) var_11);
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    var_16 = var_9;
                    var_17 = ((/* implicit */long long int) ((((unsigned int) ((5234827218207046182ULL) * (((/* implicit */unsigned long long int) 3803672055U))))) == (arr_8 [i_1])));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 20; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (arr_7 [i_5 - 4] [i_1 + 1] [i_1 - 2]))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_6 [i_1 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_1] [i_1]))))))) : (max((arr_15 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (arr_5 [i_1 - 1])))));
                                arr_21 [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) var_9)) ? (140737488093184LL) : (arr_16 [i_1 - 2] [i_2]))) ^ (((/* implicit */long long int) var_0))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_0)), (((arr_15 [i_1] [i_1 - 2] [i_1] [i_1 - 2]) / (((((/* implicit */_Bool) 2145360319U)) ? (arr_16 [i_1 - 1] [i_2]) : (((/* implicit */long long int) arr_17 [i_1 - 2] [i_2] [i_3] [i_2] [i_3] [i_3]))))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5271655485904508578ULL)) ? (((((/* implicit */long long int) var_9)) & (var_11))) : (((/* implicit */long long int) 491295240U)))) | (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2))))) & (((/* implicit */int) ((unsigned short) 13175088587805043021ULL))))))));
}
