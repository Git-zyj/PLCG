/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179246
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)63502)), (arr_4 [i_0] [i_0])))))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8320703501005952481LL)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned short)0))))) : (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) 2911148607U)) : (958132965802527357ULL)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) max((((arr_1 [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (unsigned char)255)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) (unsigned short)2034)) && (((/* implicit */_Bool) -8320703501005952493LL)))))) ? (((((/* implicit */_Bool) (unsigned char)250)) ? (11957820282080026258ULL) : (((((/* implicit */_Bool) 550056122U)) ? (8866581570954112323ULL) : (2591146813550626914ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_10)) << (((var_2) - (2079454203U))))), (((/* implicit */int) ((_Bool) var_4))))))));
    var_15 = ((/* implicit */int) 10831726796176741605ULL);
}
