/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126353
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) arr_5 [(short)0] [(short)0]);
                var_15 = ((/* implicit */_Bool) arr_2 [i_1]);
                arr_7 [i_1] [i_1 + 1] = arr_1 [i_1];
                arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0 + 1] [i_1 - 1]), (arr_3 [i_0 - 2] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1 - 2])) ? (arr_3 [i_0 + 1] [i_1 + 1]) : (arr_3 [i_0 + 1] [i_1 - 2]))) : (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1 - 1])) ? (arr_3 [i_0 - 1] [i_1 - 1]) : (arr_3 [i_0 + 1] [i_1 - 2])))));
            }
        } 
    } 
    var_16 = var_1;
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_12)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_12)) : (var_8)))) & (((var_7) << (((var_10) + (247148768))))))) : (((/* implicit */unsigned long long int) var_8))));
    var_18 = ((/* implicit */unsigned short) 1030792151040ULL);
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 6485836317301818409LL)) ? (1030792151041ULL) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) != (((((/* implicit */_Bool) 1508949300U)) ? (var_11) : (((/* implicit */unsigned long long int) 1675019727U))))))) : (((/* implicit */int) var_3)));
}
