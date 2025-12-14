/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169379
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((arr_0 [(unsigned short)3]), (arr_6 [i_0] [i_1 + 1] [i_0])));
                    arr_7 [2ULL] [i_0] [3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)-23663)), (((((/* implicit */_Bool) (unsigned short)6516)) ? (3323328389103260393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61007)))))));
                    var_18 = ((/* implicit */unsigned short) ((15201741997235053896ULL) + (max(((-(10289340942057685760ULL))), (((/* implicit */unsigned long long int) var_11))))));
                    arr_8 [3] [3] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) (~(var_14)))) == (var_5))))));
                    var_19 = ((/* implicit */short) (!(max((var_12), (arr_4 [i_0] [i_1 + 1] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */unsigned int) (~(var_10)));
}
