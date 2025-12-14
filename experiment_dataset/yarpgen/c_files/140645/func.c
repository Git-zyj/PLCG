/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140645
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
    var_16 -= ((/* implicit */long long int) (unsigned char)216);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [20ULL] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)228);
                var_17 = ((/* implicit */long long int) 2161727821137838080ULL);
                var_18 += ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_3 [16ULL] [i_0 + 1] [16ULL]))))) ? (((/* implicit */unsigned long long int) ((60) & (-56)))) : (((max((((/* implicit */unsigned long long int) -61)), (var_13))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [16ULL])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(240518168576LL)));
    var_20 = ((/* implicit */long long int) ((int) (unsigned short)16));
}
