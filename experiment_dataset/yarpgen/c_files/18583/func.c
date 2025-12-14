/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18583
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((var_10) << (((var_7) - (2171408799391532733ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [4ULL] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) max((arr_1 [10ULL]), (arr_7 [i_0]))))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) min((13044102689546597437ULL), (var_11)))) ? (((((/* implicit */_Bool) var_4)) ? (15827728977095422717ULL) : (arr_0 [0ULL]))) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_1 [4ULL]) : (arr_5 [i_0] [i_1] [i_0]))))));
                }
            } 
        } 
    } 
    var_13 = var_10;
}
