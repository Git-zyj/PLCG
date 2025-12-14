/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174999
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
    var_17 = ((/* implicit */unsigned short) ((-520636021) - (-1)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1 + 1] [7ULL] [i_2] = ((/* implicit */unsigned short) max((min((max((((/* implicit */int) arr_3 [i_0])), (27))), (((((/* implicit */_Bool) (unsigned char)255)) ? (26736450) : (((/* implicit */int) (unsigned char)133)))))), (((arr_6 [i_0 - 1] [i_1]) - (arr_6 [i_0 - 3] [i_0 - 2])))));
                    var_18 = ((((/* implicit */int) ((unsigned char) arr_3 [i_0 + 1]))) - (min((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 3])), (((arr_0 [3ULL]) ? (arr_8 [i_0] [i_1 - 1] [5ULL]) : (arr_2 [i_2]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((var_16) - (((min((var_7), (var_16))) - (((/* implicit */long long int) var_14))))));
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -4)), ((((+(var_1))) - ((~(var_16)))))));
}
