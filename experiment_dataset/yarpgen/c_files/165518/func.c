/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165518
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
    var_12 = ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) (((+(18446744073709551615ULL))) >= (18446744073709551615ULL)))), (((((3585170398U) * (3593036251U))) / (arr_5 [i_2 - 2] [i_2 - 1] [i_2])))));
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_1] [i_2 + 1]), (arr_2 [i_1] [i_2 - 2])))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_2 + 1])) ? (18263237961344711339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))))) : (((unsigned long long int) 3030776070688418425ULL))));
                }
            } 
        } 
    } 
}
