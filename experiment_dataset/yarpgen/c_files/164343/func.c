/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164343
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (+(max((arr_1 [i_1 - 3] [i_1 + 3]), (arr_1 [i_1 + 3] [i_1 + 3])))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((9223372036854775798LL) == (1502905001305316261LL)))) * (((/* implicit */int) (unsigned short)46038))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((min((arr_0 [i_2] [i_2]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)252))))))), (((18446735277616529408ULL) + (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */long long int) var_11)) : (arr_7 [i_2])))))))))));
                var_16 *= ((((/* implicit */_Bool) ((9223372036854775807LL) >> (((min((var_7), (1502905001305316245LL))) + (4525347662786115885LL)))))) ? (((((((/* implicit */_Bool) arr_10 [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1502905001305316289LL)) ? (((/* implicit */long long int) var_2)) : (1502905001305316261LL)))))) : (((max((arr_5 [i_2]), (((/* implicit */unsigned long long int) var_8)))) ^ (((/* implicit */unsigned long long int) ((arr_9 [i_3 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
            }
        } 
    } 
}
