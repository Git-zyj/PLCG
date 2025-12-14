/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109637
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
    var_11 = ((/* implicit */int) (!(((((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((-7977946998435567153LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] |= min((min((((/* implicit */unsigned int) arr_2 [i_1] [i_1 - 1] [i_0])), (var_5))), (((/* implicit */unsigned int) ((((arr_3 [i_1 + 1] [i_1]) + (2147483647))) >> (((-8948759980120433991LL) + (8948759980120434002LL)))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((1876933584), (((/* implicit */int) (short)-1))))) ? (min((4971616157220381273ULL), (((/* implicit */unsigned long long int) -8575201601503548340LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))))) < (((/* implicit */unsigned long long int) min((((int) 1739941248)), (-1739941253))))));
            }
        } 
    } 
}
