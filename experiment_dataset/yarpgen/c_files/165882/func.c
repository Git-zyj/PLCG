/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165882
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((1016631559) == (-1016631560))) ? (((/* implicit */int) (unsigned char)34)) : (min((-1016631560), (1016631559)))))), (var_3)));
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_5))) & (((/* implicit */int) var_0)))))));
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) : (((var_3) + (((/* implicit */unsigned long long int) var_2)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2147483647))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((((/* implicit */_Bool) 2147475456)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (unsigned char)96)));
                var_15 = ((/* implicit */unsigned char) (~(1016631542)));
                arr_6 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
                arr_7 [4LL] [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) 2147483646)) / (min((13010678169146941348ULL), (8796093022207ULL))))));
            }
        } 
    } 
}
