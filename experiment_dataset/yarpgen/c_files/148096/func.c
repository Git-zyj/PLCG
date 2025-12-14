/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148096
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
    var_13 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_8)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((var_10), (((/* implicit */short) var_2))))))));
    var_14 = ((/* implicit */unsigned int) ((signed char) var_1));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) var_9);
        arr_3 [i_0] = (+(((/* implicit */int) ((signed char) var_1))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) var_10)) ? (2694288382132992635LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) ((int) arr_2 [i_0]))) : (2694288382132992635LL)));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 0ULL))) * (((/* implicit */int) ((2694288382132992635LL) <= (((/* implicit */long long int) var_7)))))))) ? (((((/* implicit */int) arr_2 [i_0])) / (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_0 [i_0])))))) : (((int) arr_2 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_6 [i_1])) % (((/* implicit */int) arr_0 [i_1 - 2])))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_1 + 2] [i_1 - 2])) - ((-9223372036854775807LL - 1LL))))) ? ((+(arr_4 [i_1 + 1] [i_1 + 2]))) : (min((arr_4 [i_1 - 1] [i_1 + 1]), (arr_4 [i_1 + 2] [i_1 + 2]))))))));
        arr_8 [i_1] [i_1 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) : (arr_5 [i_1 + 2] [i_1 + 2]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((arr_1 [i_1 + 2] [i_1]) - (((/* implicit */int) arr_2 [i_1]))))))));
    }
    var_19 = ((/* implicit */short) (~(((((_Bool) var_8)) ? (0U) : (((((/* implicit */_Bool) var_4)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
}
