/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184764
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
    for (int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((max((arr_2 [i_0] [i_1]), (((/* implicit */long long int) arr_1 [(_Bool)1] [i_0])))) | (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) & (-8716784293228892122LL)))))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)14905)))))) : (((/* implicit */int) ((short) arr_1 [i_1 + 2] [i_1 + 1]))))))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((-2365220404846766370LL) * (((/* implicit */long long int) -1))))) ? ((+(var_14))) : (((((/* implicit */_Bool) ((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -8716784293228892124LL)) : (var_14))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) || (((/* implicit */_Bool) var_7)))))))) / ((~(-8716784293228892122LL)))));
}
