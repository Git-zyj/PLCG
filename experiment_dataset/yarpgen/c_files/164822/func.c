/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164822
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
    var_17 = ((_Bool) (unsigned short)17487);
    var_18 = ((((/* implicit */_Bool) var_4)) ? (min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20495)) && (((/* implicit */_Bool) -1470059289))))))) : (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((var_13) + (0)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 1128710928)) : (var_9))))));
    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) min((min((var_7), (var_13))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((var_6) - (var_1))) : (max((-2004527028), (var_1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((arr_3 [i_2]), (arr_3 [i_1]))))));
                    var_21 = ((/* implicit */_Bool) min((0), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_0]))))));
                    var_22 = ((/* implicit */int) ((short) max((max((-1371269768), (1506254653))), (((((/* implicit */int) (unsigned char)209)) ^ (-1470059296))))));
                }
            } 
        } 
    } 
}
