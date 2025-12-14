/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103007
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
    var_11 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) ((var_3) > (((((/* implicit */_Bool) -9207722180952371261LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)24)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = var_0;
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? ((+(((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) ((unsigned short) min((((/* implicit */int) var_10)), (var_3)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20675)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20112))))))))) < ((-((~(((/* implicit */int) (short)20105))))))));
    var_14 = ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) ((((((/* implicit */int) (short)1675)) * (((/* implicit */int) (short)-20112)))) != (((/* implicit */int) (short)-20113)))))));
}
