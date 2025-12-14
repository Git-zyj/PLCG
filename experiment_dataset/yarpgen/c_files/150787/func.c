/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150787
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((var_6) - (6919386372711191443LL)))))), (max((var_6), (((/* implicit */long long int) 8388544))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || ((!(((/* implicit */_Bool) var_10))))))) : (min((((((/* implicit */_Bool) (unsigned short)9453)) ? (((/* implicit */int) (unsigned short)56082)) : (-1846768467))), (max((((/* implicit */int) (unsigned short)57526)), (-1)))))));
    var_12 = ((((/* implicit */_Bool) 9U)) ? (((28U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)126))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)126))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)10277))));
                    arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) 67108863)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13353))) : (var_0)))))) : (-3621403321210074777LL)));
                    var_14 = ((/* implicit */long long int) max((((/* implicit */int) var_7)), (1543765947)));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned int) var_7);
}
