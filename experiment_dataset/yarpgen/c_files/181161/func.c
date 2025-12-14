/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181161
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned long long int) var_6)), (var_7))))), (var_4)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) max((arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2]), (arr_0 [i_2 - 1])))) < (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                    var_13 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 1])))), (((/* implicit */int) var_6))));
                    var_14 = ((((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0] [i_2 + 1]) || (((/* implicit */_Bool) 2927999587U)))))) : (max((14840332347151891694ULL), (((/* implicit */unsigned long long int) 2927999587U)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2 - 2]))));
                    arr_8 [i_0] = ((((((/* implicit */_Bool) (unsigned short)26548)) ? (((/* implicit */unsigned long long int) 2463987219U)) : (9534853135826896930ULL))) <= (((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14840332347151891700ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */unsigned long long int) var_8)) + (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_9)))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))))))));
}
