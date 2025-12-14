/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165226
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
    var_14 = ((/* implicit */unsigned long long int) var_1);
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)7762)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((max((arr_6 [i_1] [i_1] [i_2 + 1]), (((/* implicit */long long int) var_11)))), ((+(9223372036854775807LL)))));
                    var_17 *= ((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 + 2]);
                    arr_7 [i_0] [i_2] [i_2 + 1] = ((((/* implicit */unsigned long long int) ((arr_2 [i_2] [i_2 + 2]) ? (((/* implicit */int) arr_2 [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) arr_2 [i_2] [i_2 + 2]))))) % (15914599228840963261ULL));
                }
            } 
        } 
    } 
}
