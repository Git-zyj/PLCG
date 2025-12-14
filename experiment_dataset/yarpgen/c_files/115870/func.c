/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115870
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1])))) ? (((/* implicit */unsigned long long int) max((arr_4 [i_1 - 1]), (arr_4 [i_1 + 1])))) : (((387172574173744327ULL) - (((/* implicit */unsigned long long int) arr_4 [i_1 - 1]))))));
                arr_6 [8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((arr_2 [4ULL]), (((/* implicit */long long int) arr_1 [i_1] [i_0]))))))) ? (((arr_0 [i_1 + 1]) + (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) -536870912)) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */int) arr_1 [i_0] [i_1])))))))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned long long int) var_5);
}
