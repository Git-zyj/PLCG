/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161582
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) var_9);
                    arr_7 [8U] [i_1 - 1] [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (arr_2 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((arr_2 [3ULL]), (arr_6 [1ULL] [(unsigned char)4] [i_1 - 1] [i_0])))))) ? (((/* implicit */long long int) ((3586480997U) >> (((arr_6 [i_1 + 1] [11] [(unsigned short)3] [0ULL]) - (144817561077522046ULL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)10] [(unsigned short)5])) ? (arr_6 [i_1 + 1] [i_1 + 1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3586480995U)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_8), (arr_3 [i_2] [i_0]))))))) : (((((/* implicit */_Bool) ((3399499638U) * (3363057299U)))) ? (arr_2 [i_2]) : (((arr_4 [i_2] [5ULL] [i_0]) + (((/* implicit */unsigned long long int) 708486277U)))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned char)41)) - (((/* implicit */int) var_2)))))) < (var_5)));
    var_14 = ((/* implicit */unsigned char) ((unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) 3586480999U)))))));
}
