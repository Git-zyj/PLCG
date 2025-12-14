/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119514
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
    var_12 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) var_4);
                var_14 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)))), (((((/* implicit */_Bool) 9663912141830244450ULL)) ? (8671424755863596682ULL) : (0ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) : (((arr_1 [3U]) >> ((((~(arr_6 [i_0] [i_0]))) - (50112219U))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))))))))) <= (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) : (var_4)))));
            }
        } 
    } 
}
