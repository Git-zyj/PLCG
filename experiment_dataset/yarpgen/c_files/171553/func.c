/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171553
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
    var_19 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) & (((/* implicit */int) arr_0 [14U])))) : (((/* implicit */int) (_Bool)1))))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((max((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) (short)-32084)))))) <= (((((/* implicit */int) (short)32083)) ^ ((+(((/* implicit */int) (unsigned char)7)))))))))));
                var_22 ^= ((/* implicit */int) ((var_11) >= (max((max((3038621553U), (2941795026U))), ((-(arr_4 [i_1] [i_0])))))));
                var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16777215))))) : (((((/* implicit */_Bool) (short)32083)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)136))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((-4925707723798663004LL) / (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))), (((((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (var_13)))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (arr_1 [i_0] [14ULL])))))));
            }
        } 
    } 
}
