/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141273
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
    var_10 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) (-2147483647 - 1))) + (-2635251874256776311LL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (var_2)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((arr_0 [i_0]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1 - 1]))))))) && (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) var_7))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24808)) / (((/* implicit */int) (short)-25346))))) ? (2635251874256776310LL) : (((((/* implicit */_Bool) 2635251874256776338LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (-2635251874256776307LL)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1689735730) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))), (((/* implicit */int) (!(arr_0 [i_1]))))))));
                arr_7 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                var_11 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_1 - 1]))))) ? (max((((/* implicit */long long int) arr_2 [i_1] [i_1])), (var_2))) : (((/* implicit */long long int) var_6)))), (var_2)));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) max((((_Bool) -2635251874256776316LL)), ((_Bool)1))))));
            }
        } 
    } 
}
