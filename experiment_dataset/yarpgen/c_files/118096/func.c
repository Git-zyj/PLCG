/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118096
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) min((arr_1 [i_0] [i_1]), (((arr_2 [i_0]) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17324))) - (arr_4 [i_0] [i_1] [i_1])))))));
                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16715425681051623382ULL)) || (((/* implicit */_Bool) 1731318392657928243ULL))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_0)), (1731318392657928258ULL))) < (max((var_7), (((/* implicit */unsigned long long int) var_11))))))), ((~(849823586636013658ULL)))));
}
