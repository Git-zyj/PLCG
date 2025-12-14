/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145667
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) var_3))));
    var_11 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_2])), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) (unsigned char)235))))) || (((/* implicit */_Bool) var_5))));
                    var_12 *= ((/* implicit */unsigned long long int) var_6);
                    var_13 = ((/* implicit */unsigned char) min(((~(min((((/* implicit */long long int) var_1)), (arr_3 [5LL]))))), (((/* implicit */long long int) arr_6 [i_2] [i_1] [i_1] [(short)9]))));
                    var_14 += ((((((/* implicit */_Bool) ((int) var_1))) ? (max((((/* implicit */unsigned int) (unsigned short)32418)), (arr_1 [i_0]))) : (max((((/* implicit */unsigned int) var_4)), (arr_1 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        var_16 = ((/* implicit */_Bool) min(((unsigned short)38069), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9385)))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_9 [i_3 + 2]))))) - (((/* implicit */int) ((arr_9 [i_3 - 1]) >= (((/* implicit */int) arr_10 [i_3])))))));
        arr_11 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3])) & (((/* implicit */int) ((arr_9 [i_3]) > (((/* implicit */int) arr_10 [i_3 - 1])))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_6))));
    }
    for (short i_4 = 3; i_4 < 11; i_4 += 2) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_5 [i_4 + 1]), (((/* implicit */int) (short)32757))))), (min((arr_1 [i_4 + 2]), (arr_1 [i_4 - 1]))))))));
        var_20 = ((/* implicit */long long int) ((unsigned short) (unsigned short)56150));
        arr_16 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_4]))));
    }
}
