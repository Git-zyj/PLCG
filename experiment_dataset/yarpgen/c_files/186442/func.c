/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186442
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)-23105))));
                var_19 += ((((/* implicit */_Bool) (((+(8707224460834258230ULL))) * (((/* implicit */unsigned long long int) ((1779361527U) / (((/* implicit */unsigned int) -107505150)))))))) ? (max((arr_6 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) ((unsigned char) 15252112329073483555ULL))))) : (((/* implicit */unsigned long long int) 1779361527U)));
            }
        } 
    } 
    var_20 = var_14;
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (1513361462U) : (((/* implicit */unsigned int) (((+(((/* implicit */int) var_13)))) << (((max((13964360095186555069ULL), (((/* implicit */unsigned long long int) -107505151)))) - (18446744073602046464ULL)))))))))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((var_2), (var_14))))));
}
