/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146341
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
    var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_13)))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))) != (var_13))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) 322318133))));
        var_15 = ((/* implicit */unsigned int) 322318136);
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (arr_0 [i_1] [i_1])));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (arr_0 [i_1] [i_1]))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))))))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19973)))))) ? (((/* implicit */int) min((var_7), ((unsigned short)1881)))) : (arr_3 [i_1] [i_1]))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) ((unsigned int) min((max((arr_4 [i_1]), ((unsigned short)1872))), (((/* implicit */unsigned short) ((_Bool) var_13))))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (-((((-(arr_6 [i_2] [i_2]))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 691923112U)))))))) ? (((/* implicit */unsigned long long int) (~(arr_6 [i_2] [i_2])))) : (((((/* implicit */_Bool) 1846434861681902398ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35325)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) : (min((((/* implicit */unsigned long long int) -731995150)), (18446744073709551615ULL)))))));
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)720)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (564331637U)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (arr_3 [i_2] [i_2]));
    }
}
