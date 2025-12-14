/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158636
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */int) (_Bool)1);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) 2350031874159323790LL))) ^ (((((/* implicit */_Bool) (~(arr_1 [i_0 - 1] [i_0])))) ? (((arr_1 [i_0 - 1] [i_0]) - (-2350031874159323798LL))) : (min((((/* implicit */long long int) var_3)), (0LL)))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) ((_Bool) 0LL));
        var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) 2350031874159323790LL)), (7875957127925987252ULL))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)119))))), (max((var_2), (((/* implicit */unsigned long long int) arr_5 [i_1]))))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_8))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        var_21 = ((/* implicit */int) ((0LL) % (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [(short)11] [i_2]))))));
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) >> (((var_4) + (1811934904)))));
    }
    var_23 = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_9))))))));
}
