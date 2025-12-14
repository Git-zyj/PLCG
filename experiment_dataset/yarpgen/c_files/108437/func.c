/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108437
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
    var_13 = ((/* implicit */long long int) ((3602667717U) < (var_10)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 &= ((/* implicit */long long int) max(((+(3940649673949184ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 3] [i_1]))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((6254550500557170642LL) / (((/* implicit */long long int) 1827664725U)))))));
                var_16 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_1 + 4])) < (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 3] [i_1 + 2])))), (((((/* implicit */_Bool) arr_3 [i_1 + 4] [i_1 + 4] [21])) && (((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1] [i_0]))))));
            }
        } 
    } 
}
