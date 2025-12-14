/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172958
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */int) (short)-548)) > (((/* implicit */int) (unsigned char)221)))))));
        var_13 -= ((/* implicit */long long int) ((((/* implicit */int) ((short) (signed char)-4))) != (((/* implicit */int) ((_Bool) (signed char)17)))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1 + 4] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-10)) && (var_9))))));
        arr_7 [i_1 + 1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_2))))))), (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_2 = 1; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) (signed char)-8);
        arr_12 [i_2] = ((/* implicit */_Bool) (unsigned short)7);
        var_15 = ((/* implicit */_Bool) ((unsigned long long int) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (4136755159640313658ULL))));
    }
    var_16 = ((signed char) (signed char)88);
}
