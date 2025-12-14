/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161055
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
    var_19 ^= ((/* implicit */int) max((max((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), (((long long int) var_11)))), (max((((long long int) (unsigned char)208)), (((/* implicit */long long int) max((var_2), (var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (((~(arr_1 [(short)2]))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0]))))))), ((-(arr_1 [i_2 - 1])))));
                    var_21 = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned long long int) 2040918728)), (6404925291034387899ULL))), (((/* implicit */unsigned long long int) min((arr_6 [i_0]), (arr_6 [(short)18])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1] [(short)6])) ? (((/* implicit */long long int) ((arr_2 [i_0]) >> (((arr_6 [i_0]) + (3279192180372921430LL)))))) : (arr_5 [i_0] [8ULL] [i_2]))))));
                }
            } 
        } 
    } 
}
