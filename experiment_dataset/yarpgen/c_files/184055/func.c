/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184055
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                var_11 &= (-(18446744073709551615ULL));
                var_12 = ((/* implicit */unsigned short) (-(min((18446744073709551615ULL), (arr_1 [i_1 - 1])))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) (_Bool)1))))) ? ((-(arr_5 [i_0 - 1]))) : (((/* implicit */int) ((unsigned short) 18446744073709551594ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1] [i_1])) && ((!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_1 - 1])))))))) : (((((/* implicit */_Bool) (-(arr_3 [i_0] [i_0 - 1] [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)512))) / (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                var_14 ^= ((/* implicit */short) (+((-(((/* implicit */int) arr_2 [i_0 + 1]))))));
                var_15 = ((/* implicit */_Bool) ((18446744073709551594ULL) >> (((18446744073709551611ULL) - (18446744073709551575ULL)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (~(var_3)));
}
